#include<iostream>
using namespace std;
#include<string>

// 7-24  12:00
//1�����캯������͵���
//����
//  ���ղ�������
//  �������ͷ���
class Person_gz
{
public:
	//1�����캯��
	int age = 0;
	Person_gz()
	{
		cout << "�޲ι���" << endl;
	}
	Person_gz(int a)
	{
		age = a;
		cout << "�вι���" <<age<< endl;
	}
	//�������캯��
	Person_gz(const Person_gz& p)
	{
		age = p.age;  // ��������������������ԣ�����������
		cout << age << endl;
	}
	//2����������
	~Person_gz()
	{
		cout << "��������" << endl;
	}
};

//����
void test01()
{
	//1�����ŷ�
	//Person_gz p1;  //Ĭ�Ϲ��캯������
	//Person_gz p2(10);  //�вι��캯������
	//�������캯������
	//Person_gz p3(p2);
	//ע������ 1
	// ����Ĭ�Ϲ��캯��,��Ҫ��()
	//�������д��룬����������Ϊ�Ǻ�����һ��������������Ϊ�Ǵ�������
	//Person_gz p1();
	//cout << "p2����: " << p2.age << endl;
	//cout << "p3����: " << p3.age << endl;

	//2����ʾ��
	Person_gz p1;
	Person_gz p2 = Person_gz(10); //�вι���
	Person_gz p3 = Person_gz(p2); //��������

	//Person_gz(10);  // ��������  �ص㣺��ǰ��ִ�н�����
	                                 //ϵͳ������������������
	//cout << "aaa" << endl;

	//ע������ 2
	//��Ҫ���ÿ������캯��  ��ʼ���������� 
	// ����������Ϊ  Person_gz(p3) === Person_gz p3
	//Person_gz(p3);

	//3����ʽת����
	Person_gz p4 = 10; //�൱��Person_gz p4 = Person_gz(10);  �вι���
	Person_gz p5 = p4;  //��������
}

// 7-24 15:20

// �������캯���ĵ���ʱ��

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

//2��ֵ���ݵķ���������������ֵ
 
//3��ֵ��ʽ���ؾֲ�����

class Person_kb
{
public:
	Person_kb()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}
	int m_Age;
	Person_kb(int age)
	{
		m_Age = age;
		cout << "�вι��캯������" << endl;
	}
	Person_kb(const Person_kb& p)
	{
		m_Age = p.m_Age;
		cout << "�������캯������" << endl;
	}
	~Person_kb()
	{
		cout << "������������" << endl;
	}
};

void test02() {
	Person_kb p1(20);
	Person_kb p2(p1);

	cout << "p2�����䣺 " << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void dowork(Person_kb p) {

}

void test03() {
	Person_kb p;
	dowork(p);
}

// 3��ֵ��ʽ���ؾֲ�����

Person_kb dowork2() {
	Person_kb p1;
	cout << (int*)&p1 << endl;   //���������p
	return p1;
}

void test04() {
	Person_kb p = dowork2();
	cout << (int*)&p << endl;    //p��p1����ͬһ������
}

//���캯�����ù���
//1������һ���࣬C++���������ÿ���඼��������������� (��дҲ��)
// Ĭ�Ϲ��� (��ʵ��)
// �������� (��ʵ��)
// �������� (ֵ����)

// 2�����д���вι��죬�����������ṩĬ�Ϲ��죬��Ȼ�ṩ��������
// ���д�˿������죬�����������ṩ������ͨ���캯��
class Person_gzgz
{
public:
	Person_gzgz(){
		cout << "Ĭ�Ϲ��캯������" << endl;
	}
	
	Person_gzgz(int age){
		p_Age = age;
		cout << "�вι��캯������" << endl;
	}
	Person_gzgz(const Person_gzgz& p){
		p_Age = p.p_Age;
		cout << "�������캯������" << endl;
	}
	~Person_gzgz(){
		cout << "������������" << endl;
	}

    int p_Age;
};

void test_1() {
	Person_gzgz p;
	p.p_Age = 18;
	Person_gzgz p2(p);
	cout << "p2�����䣺 " << p2.p_Age << endl;
}

void test_2() {
	Person_gzgz p(10);
	Person_gzgz p2(p);
	cout << "p2�����䣺 " << p2.p_Age << endl;
}

// 7-24 16��40
//�����ǳ����
class Person_sqkb
{
public:
	Person_sqkb() {
		cout << "Ĭ�Ϲ��캯������" << endl;
	}

	Person_sqkb(int age, int height) {
		p_Age = age;
		p_Height = new int(height);
		cout << "�вι��캯������" << endl;
	}
	/*Person_sqkb(const Person_sqkb& p) {
		p_Age = p.p_Age;
		cout << "�������캯������" << endl;
	}*/

	//�Լ�ʵ�ֿ������캯�������ǳ��������������
	Person_sqkb(const Person_sqkb& p) {
		p_Age = p.p_Age;
		cout << "�������캯������" << endl;
		//�������

		p_Height = new int(*p.p_Height);
	}

	~Person_sqkb() {
		//�������룬�����������������ͷŲ���
		if (p_Height != NULL) {
			delete p_Height;
			p_Height = NULL;
		}//ǳ�����ͷ��������ڴ棬�ڶ����ͷ����ڷǷ�����
		cout << "������������" << endl;
	}

	int p_Age;
	int *p_Height;  //���ٵ�����
};

void test_01() {
	Person_sqkb p1(18 , 160);
	cout << "p1�����䣺 " << p1.p_Age <<"��ߣ� "<<*p1.p_Height << endl;
	Person_sqkb p2(p1);
	cout << "p2�����䣺 " << p2.p_Age << "��ߣ� " << *p2.p_Height << endl;
}

//��ʼ���б�
class Person_csh {
public:
	//Person_csh(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	// 7-24  17:05
	//��ʼ���б��ʼ������
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

//  7-24  17��38
//�������Ϊ���Ա

//�ֻ���
class  Phone {
public:
	Phone(string pNmae) {
		cout << "�ֻ��Ĺ��캯��" << endl;
		m_phone = pNmae;
	}
	~Phone() {
		cout << "�ֻ�������������" << endl;
	}
	string m_phone;
};
//����
class Person_r {
public:
	Person_r(string name,string pNmae) : m_Nmae(name),m_Phone(pNmae)
	{
		cout << "�˵Ĺ��캯��" << endl;
	}
	~Person_r() {
		cout << "�˵�������������" << endl;
	}
	//����
	string m_Nmae;
	//�ֻ�
	Phone m_Phone;
};

//�������������Ϊ����ĳ�Ա������ʱ���ȹ��������
//�ٹ�����������˳�򣿣���   ����˳���෴
void test_21() {
	Person_r p("����", "ƻ��13");
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