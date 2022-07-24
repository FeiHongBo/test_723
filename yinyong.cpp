//#include<iostream>
//using namespace std;
//
////交换函数
//
////1、值传递
////void myswap01(int a, int b) {
////	int temp = a;
////	a = b;
////	b = temp;
////}
//
////2、地址传递
////void myswap02(int *a, int *b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////3、引用传递  
//void myswap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////不要返回局部变量的引用
//int& test01() {
//	int a = 10;
//	return a;
//}
////函数的调用可以作为左值
//int& test02() {
//	static int a = 10;   //静态变量，存放在全局区，程序结束释放
//	return a;
//}
//
////引用的本质 就是一个指针常量，初始化后不可改变
//
//void showval(const int& val) {
//
//	cout << "val= " << val << endl;
//}
//
//int main() {
//
//	//int a = 10;
//	//int c = 20;
//	//int &b = a;     //不能只写&b
//	//b = c;
//	//int& d = c;    //报错。引用初始化后不能改变
//	//b = 20;        //不报错，只赋值
//	//cout << "a= " << b << endl;
//	//cout << "b= " << d << endl;
//	//cout << (int)&b << endl;
//	//cout << (int)&d << endl;
//
//	//int a = 10;
//	//int b = 20;
//	//myswap03(a, b);  //引用传递，形参也会修饰实参
//	//cout << a << "\t";
//	//cout << b << endl;
//
//	//int& ref = test02();
//	//cout << ref << endl;  //第一次正确，编译器做了保留
//	//cout << ref << endl;  //第二次错误，a的内存已经释放
//
//	//test02() = 1000;    //调用可以作为左值
//	//cout << test02() << endl;  //第一次正确，编译器做了保留
//	//cout << ref << endl;  //第二次错误，a的内存已经释放
//
//	//常量引用
//	//使用场景；用来修饰形参，防止误操作
//
//	int a = 10;
//
//	const int& ref = 10;
//
//	system("pause");
//	return 0;
//}