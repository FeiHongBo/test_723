//#include<iostream>
//using namespace std;
//
//int g_a = 10;
//int g_b = 20;
//
//const int c_a1 = 10;
////cout << (int)&ca << endl;
//
////ջ������ע������   1--��Ҫ���ؾֲ�������ַ
////ջ���������ɱ����������ٺ��ͷ�
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//
////����new�ؼ��� ���Խ����ݿ��ٵ�����
//int* func2()
//{
//	int *p = new int(10);
//	return p;
//}
//
////new�Ļ����﷨
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
//	delete [] arr;    //�ͷ������[]
//	//cout << *p << endl;
//}
//int main() {
//	
//	//ȫ����
//	//ȫ�ֱ�������̬����������
//
//	//������ͨ�ֲ�����
//	int a = 10;
//	int b = 20;
//	cout << (int)&a << endl;
//	cout << (int)&g_a << endl;
//
//	//��̬����  ��ͨ����ǰ��static
//	static int s_a = 10;
//	static int s_b = 20;
//	cout << (int)&s_a << endl;
//	cout << (int)&s_b << endl;
//
//	//����
//	//�ַ�������
//	cout << (int)"abc" << endl;
//	//const���ε�ȫ�ֱ������ֲ�����
//	const int c_a = 10;    //const���ξֲ�
//	cout << (int)&c_a << endl;
//	cout << (int)&c_a1 << endl;
//
//	//ջ��
//	//int *p = func();
//	//cout << *p << endl;
//	//cout << *p << endl;
//	
//	//������������
//	int *p = func2();
//	cout << *p << endl;
//
//
//	test01();
//	test02();
//
//	system("pause");
//}