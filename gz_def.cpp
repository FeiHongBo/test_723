#include<iostream>
using namespace std;
#include<string>

// 7-24  12:00
//1、构造函数分类和调用
//分类
//  按照参数分类
//  按照类型分类
class Person_gz
{
public:
	//1、构造函数
	int age = 0;
	Person_gz()
	{
		cout << "无参构造" << endl;
	}
	Person_gz(int a)
	{
		age = a;
		cout << "有参构造" <<age<< endl;
	}
	//拷贝构造函数
	Person_gz(const Person_gz& p)
	{
		age = p.age;  // 将传入的人身上所有属性，拷到我身上
		cout << age << endl;
	}
	//2、析构函数
	~Person_gz()
	{
		cout << "调用析构" << endl;
	}
};

//调用
void test01()
{
	//1、括号法
	//Person_gz p1;  //默认构造函数调用
	//Person_gz p2(10);  //有参构造函数调用
	//拷贝构造函数调用
	//Person_gz p3(p2);
	//注意事项 1
	// 调用默认构造函数,不要加()
	//下面这行代码，编译器会认为是函数的一个声明，不会认为是创建对象
	//Person_gz p1();
	//cout << "p2年龄: " << p2.age << endl;
	//cout << "p3年龄: " << p3.age << endl;

	//2、显示法
	Person_gz p1;
	Person_gz p2 = Person_gz(10); //有参构造
	Person_gz p3 = Person_gz(p2); //拷贝构造

	//Person_gz(10);  // 匿名对象  特点：当前行执行结束后，
	                                 //系统会立即回收匿名对象
	//cout << "aaa" << endl;

	//注意事项 2
	//不要利用拷贝构造函数  初始化匿名对象 
	// 编译器会认为  Person_gz(p3) === Person_gz p3
	//Person_gz(p3);

	//3、隐式转换法
	Person_gz p4 = 10; //相当于Person_gz p4 = Person_gz(10);  有参构造
	Person_gz p5 = p4;  //拷贝构造
}

// 7-24 15:20

// 拷贝构造函数的调用时机

//1、使用一个已经创建完毕的对象来初始化一个新对象

//2、值传递的方法给函数参数传值
 
//3、值方式返回局部对象

class Person_kb
{
public:
	Person_kb()
	{
		cout << "默认构造函数调用" << endl;
	}
	int m_Age;
	Person_kb(int age)
	{
		m_Age = age;
		cout << "有参构造函数调用" << endl;
	}
	Person_kb(const Person_kb& p)
	{
		m_Age = p.m_Age;
		cout << "拷贝构造函数调用" << endl;
	}
	~Person_kb()
	{
		cout << "析构函数调用" << endl;
	}
};

void test02() {
	Person_kb p1(20);
	Person_kb p2(p1);

	cout << "p2的年龄： " << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值
void dowork(Person_kb p) {

}

void test03() {
	Person_kb p;
	dowork(p);
}

// 3、值方式返回局部对象

Person_kb dowork2() {
	Person_kb p1;
	cout << (int*)&p1 << endl;   //拷贝后给了p
	return p1;
}

void test04() {
	Person_kb p = dowork2();
	cout << (int*)&p << endl;    //p和p1不是同一个对象
}

//构造函数调用规则
//1、创造一个类，C++编译器会给每个类都添加至少三个函数 (不写也有)
// 默认构造 (空实现)
// 析构函数 (空实现)
// 拷贝构造 (值拷贝)

// 2、如果写了有参构造，编译器不再提供默认构造，依然提供拷贝构造
// 如果写了拷贝构造，编译器不再提供其他普通构造函数
class Person_gzgz
{
public:
	Person_gzgz(){
		cout << "默认构造函数调用" << endl;
	}
	
	Person_gzgz(int age){
		p_Age = age;
		cout << "有参构造函数调用" << endl;
	}
	Person_gzgz(const Person_gzgz& p){
		p_Age = p.p_Age;
		cout << "拷贝构造函数调用" << endl;
	}
	~Person_gzgz(){
		cout << "析构函数调用" << endl;
	}

    int p_Age;
};

void test_1() {
	Person_gzgz p;
	p.p_Age = 18;
	Person_gzgz p2(p);
	cout << "p2的年龄： " << p2.p_Age << endl;
}

void test_2() {
	Person_gzgz p(10);
	Person_gzgz p2(p);
	cout << "p2的年龄： " << p2.p_Age << endl;
}

// 7-24 16：40
//深拷贝与浅拷贝
class Person_sqkb
{
public:
	Person_sqkb() {
		cout << "默认构造函数调用" << endl;
	}

	Person_sqkb(int age, int height) {
		p_Age = age;
		p_Height = new int(height);
		cout << "有参构造函数调用" << endl;
	}
	/*Person_sqkb(const Person_sqkb& p) {
		p_Age = p.p_Age;
		cout << "拷贝构造函数调用" << endl;
	}*/

	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person_sqkb(const Person_sqkb& p) {
		p_Age = p.p_Age;
		cout << "拷贝构造函数调用" << endl;
		//深拷贝操作

		p_Height = new int(*p.p_Height);
	}

	~Person_sqkb() {
		//析构代码，将堆区开辟数据做释放操作
		if (p_Height != NULL) {
			delete p_Height;
			p_Height = NULL;
		}//浅拷贝释放了两次内存，第二次释放属于非法操作
		cout << "析构函数调用" << endl;
	}

	int p_Age;
	int *p_Height;  //开辟到堆区
};

void test_01() {
	Person_sqkb p1(18 , 160);
	cout << "p1的年龄： " << p1.p_Age <<"身高： "<<*p1.p_Height << endl;
	Person_sqkb p2(p1);
	cout << "p2的年龄： " << p2.p_Age << "身高： " << *p2.p_Height << endl;
}

//初始化列表
class Person_csh {
public:
	//Person_csh(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	// 7-24  17:05
	//初始化列表初始化属性
	//Person_csh() : m_A(10), m_B(20), m_C(30) {}
	Person_csh(int a,int b,int c) : m_A(a), m_B(b), m_C(c) {}
	int m_A;
	int m_B;
	int m_C;
};

void test_11() {
	Person_csh p(10, 20, 30);
	cout << p.m_A << p.m_B << p.m_C << endl;
}

//  7-24  17：38
//类对象作为类成员

//手机类
class  Phone {
public:
	Phone(string pNmae) {
		cout << "手机的构造函数" << endl;
		m_phone = pNmae;
	}
	~Phone() {
		cout << "手机析构函数调用" << endl;
	}
	string m_phone;
};
//人类
class Person_r {
public:
	Person_r(string name,string pNmae) : m_Nmae(name),m_Phone(pNmae)
	{
		cout << "人的构造函数" << endl;
	}
	~Person_r() {
		cout << "人的析构函数调用" << endl;
	}
	//姓名
	string m_Nmae;
	//手机
	Phone m_Phone;
};

//当其他类对象作为本类的成员，构造时候先构造类对象
//再构造自身，析构顺序？？？   析构顺序相反
void test_21() {
	Person_r p("张三", "苹果13");
	cout << p.m_Nmae << p.m_Phone.m_phone << endl;
}

int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test_2();
	//test_01();
	//test_11();
	test_21();

	system("pause");
	return 0;
}