//#include<iostream>
//using namespace std;
//
////��������
//
////1��ֵ����
////void myswap01(int a, int b) {
////	int temp = a;
////	a = b;
////	b = temp;
////}
//
////2����ַ����
////void myswap02(int *a, int *b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////3�����ô���  
//void myswap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////��Ҫ���ؾֲ�����������
//int& test01() {
//	int a = 10;
//	return a;
//}
////�����ĵ��ÿ�����Ϊ��ֵ
//int& test02() {
//	static int a = 10;   //��̬�����������ȫ��������������ͷ�
//	return a;
//}
//
////���õı��� ����һ��ָ�볣������ʼ���󲻿ɸı�
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
//	//int &b = a;     //����ֻд&b
//	//b = c;
//	//int& d = c;    //�������ó�ʼ�����ܸı�
//	//b = 20;        //������ֻ��ֵ
//	//cout << "a= " << b << endl;
//	//cout << "b= " << d << endl;
//	//cout << (int)&b << endl;
//	//cout << (int)&d << endl;
//
//	//int a = 10;
//	//int b = 20;
//	//myswap03(a, b);  //���ô��ݣ��β�Ҳ������ʵ��
//	//cout << a << "\t";
//	//cout << b << endl;
//
//	//int& ref = test02();
//	//cout << ref << endl;  //��һ����ȷ�����������˱���
//	//cout << ref << endl;  //�ڶ��δ���a���ڴ��Ѿ��ͷ�
//
//	//test02() = 1000;    //���ÿ�����Ϊ��ֵ
//	//cout << test02() << endl;  //��һ����ȷ�����������˱���
//	//cout << ref << endl;  //�ڶ��δ���a���ڴ��Ѿ��ͷ�
//
//	//��������
//	//ʹ�ó��������������βΣ���ֹ�����
//
//	int a = 10;
//
//	const int& ref = 10;
//
//	system("pause");
//	return 0;
//}