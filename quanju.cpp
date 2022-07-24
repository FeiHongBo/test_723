//#include<iostream>
//using namespace std;
//
//int g_a = 10;
//int g_b = 20;
//
//const int c_a1 = 10;
////cout << (int)&ca << endl;
//
////栈区数据注意事项   1--不要返回局部变量地址
////栈区的数据由编译器管理开辟和释放
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//
////利用new关键字 可以将数据开辟到堆区
//int* func2()
//{
//	int *p = new int(10);
//	return p;
//}
//
////new的基本语法
//int* func3() {
//	int* p = new int(10);
//	return p;
//}
//
//
//void test01() {
//	int* p = func3();
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;
//	//cout << *p << endl;
//}
//
//void test02() {
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i+100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//        cout << arr[i] << endl;
//	}
//	
//
//	delete [] arr;    //释放数组加[]
//	//cout << *p << endl;
//}
//int main() {
//	
//	//全局区
//	//全局变量、静态变量、常量
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 20;
//	cout << (int)&a << endl;
//	cout << (int)&g_a << endl;
//
//	//静态变量  普通变量前加static
//	static int s_a = 10;
//	static int s_b = 20;
//	cout << (int)&s_a << endl;
//	cout << (int)&s_b << endl;
//
//	//常量
//	//字符串常量
//	cout << (int)"abc" << endl;
//	//const修饰的全局变量、局部变量
//	const int c_a = 10;    //const修饰局部
//	cout << (int)&c_a << endl;
//	cout << (int)&c_a1 << endl;
//
//	//栈区
//	//int *p = func();
//	//cout << *p << endl;
//	//cout << *p << endl;
//	
//	//堆区开辟数据
//	int *p = func2();
//	cout << *p << endl;
//
//
//	test01();
//	test02();
//
//	system("pause");
//}