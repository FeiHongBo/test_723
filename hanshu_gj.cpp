//#include<iostream>
//using namespace std;
//
////����Ĭ�ϲ���
////�Լ��������ݾ����Լ����ݣ�û������Ĭ��ֵ
//int func(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
////1�����ĳ��λ������Ĭ�ϲ�������λ�ú��涼������Ĭ��ֵ
//int func1(int a , int b = 20, int c = 30)
//{
//	return a + b + c;
//}
////2���������˵����Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//int func2(int a = 10, int b = 20);
//
//int func2(int a , int b )
//{
//	return a + b;
//}
//// ռλ��������������Ĭ�ϲ���
//void zwfunc(int a,int)
//{
//	cout << "this is zwfunc" << endl;
//}
//
//
////��������
////�ú�������ͬ����߸�����
////������������
////1��ͬһ��������
////2������������ͬ
////3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//void fyfunc(int a = 20, double b = 10.13)
//{
//	cout << "this is fyfunc" << endl;
//}
//
//void fyfunc(double a=10.13, int b =10)
//{
//	cout << "this is fyfunc �ĵ���" << endl;
//}
//
////��������ע������
////1��������Ϊ��������
//void yyfunc(int &a)
//{
//	cout << "this is yyfunc" << endl;
//}
//
//void yyfunc(const int & a)
//{
//	cout << "this is yyfunc �ĵ���" << endl;
//}
////2��������������Ĭ�ϲ���
//void mrfunc(int a,int b)
//{
//	cout << "this is mrfunc " << endl;
//}
//
//void mrfunc(int a)
//{
//	cout << "this is mrfunc ��moren" << endl;
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