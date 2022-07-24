//#include<iostream>
//using namespace std;
//
////函数默认参数
////自己传入数据就用自己数据，没传入用默认值
//int func(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
////1、如果某个位置有了默认参数，其位置后面都必须有默认值
//int func1(int a , int b = 20, int c = 30)
//{
//	return a + b + c;
//}
////2、如果函数说明有默认参数，函数实现就不能有默认参数
//int func2(int a = 10, int b = 20);
//
//int func2(int a , int b )
//{
//	return a + b;
//}
//// 占位参数，还可以有默认参数
//void zwfunc(int a,int)
//{
//	cout << "this is zwfunc" << endl;
//}
//
//
////函数重载
////让函数名相同，提高复用性
////函数重载条件
////1、同一作用域下
////2、函数名称相同
////3、函数参数类型不同，或者个数不同，或者顺序不同
//void fyfunc(int a = 20, double b = 10.13)
//{
//	cout << "this is fyfunc" << endl;
//}
//
//void fyfunc(double a=10.13, int b =10)
//{
//	cout << "this is fyfunc 的调用" << endl;
//}
//
////函数重载注意事项
////1、引用作为重载条件
//void yyfunc(int &a)
//{
//	cout << "this is yyfunc" << endl;
//}
//
//void yyfunc(const int & a)
//{
//	cout << "this is yyfunc 的调用" << endl;
//}
////2、函数重载碰到默认参数
//void mrfunc(int a,int b)
//{
//	cout << "this is mrfunc " << endl;
//}
//
//void mrfunc(int a)
//{
//	cout << "this is mrfunc 的moren" << endl;
//}
//
//int main() {
//
//    
//	cout << func2(10,10) <<endl;  
////	zwfunc(10,10);
//	//fyfunc(10,20.24);
//	//int a = 10;
//	//yyfunc(10);
//	mrfunc(10);
//	system("pause");
//	return 0;
//}