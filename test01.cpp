#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include "swap.h"
//�����Ķ��巽ʽ
//1 #define �곣��
#define Day 7

//int add(int a, int b)   //a��b���β�
//{
//	int sum = a + b;
//	return sum;
//}

//����û�з���ֵ������ʱдvoid
//void swap(int num1, int num2)
//{
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//	int cap = num1;
//	num1 = num2;
//	num2 = cap;
//
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//}

//����������ʽ
//1���޲��޷�  2���в��޷�  3���޲��з�  4���в��з�
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
 
////�����ķ��ļ���д
////��������
//void swap(int a, int b);
////��������
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << a << endl;
//	cout << b << endl;
//}

//void swap(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

// ð��������
//void bubbleSort(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for(int j = 0; j<len - i - 1; j++)
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//	}
//	for (int i = 0; i < len ; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}

// �ṹ�嶨��
//struct Student
//{
//	//��Ա�б�
//	
//	//����
//	string name;
//	//����
//	int age;
//	//����
//	int score;
//};

// �ṹ�����鶨��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;

};

//�ṹ��Ƕ��
struct Teacher
{
	//����
	string name;
	// id
	int id;
	//����
	int age;
	//ѧ��
	struct Student stu;
};

// �ṹ��-���� ֵ����
void printsz(struct Student s)
{
	//s.age = 100;  //δ�ı���������ֵ
	cout << s.age << endl;
}
// �ṹ��-���� ��ַ����
void printzz(struct Student * s) //����const���Է�ֹ�����
{
	//s->age = 200;  //�ı���������ֵ
	cout << s -> age << endl;
}

//���Ӣ�۽ṹ��
struct Hero
{
	string name;
	int age;
	string sex;
};


// main�ǳ�������
//int main()
//{ 
	// hello world��ϰ
	//cout << "hello c++" << endl;
	// ���������ϰ
	/*float a = 100;
	char b[] = "adgfs";
	bool cc = false;
	float d = 20;
	float c = floor(a) + floor(d);
	c /= 20;*/
	
	//cout <<"d = " << (a == b) << endl;
	//cout <<  (a && d) << endl;
	//const ���α��� ҲΪ����
	//const int a = 7;
	//cout << "size:\n" << cc << endl;
	//cin >> b;
	//cout <<"a=" <<b<< endl;
	// if�����ϰ
	/*int a1 = 1;
	int a2 = 2;
	int a3 = 3;

	if (a1 >= a2 && a1 >= a3 )
	{
		cout << "a1" << endl;
	}
	else if (a2 >= a1 && a2 >= a3)
	{
		cout << "a2" << endl;
	}
	else if (a3 >= a1 && a3 >= a2)
	{
		cout << "a3" << endl;
	}*/

	//switch��� (ֻ���ж����Ͳ��ܱ�ʾ����)
	//int aa = 0;
	//
	//cout << "��ʼ��֣�" << endl;
	//cin >> aa;
	//switch (aa)
	//{
	//case 10:
	//    cout << "jingdian1" << endl;
	//	break;
	//case 9:
	//	cout << "jingdian2" << endl;
	//	break;
	//default:
	//	cout << "lanpian" << endl;
	//	break;
	//}

	// whileѭ�����

	/*srand((unsigned int)time(NULL));
	int num = rand()%100 + 1;//����1-100�����
	int val = 0;
	
	while (1)
	{
       cin >> val;

	   if (val > num)
	   {
		   cout << "�²����" << endl;
	   }
	   else if (val < num)
	   {
		   cout << "�²��С" << endl;
	   }
	   else if (val = num)
	   {
		   cout << "�¶���" << endl;
	   }
		
	}*/
		
	// do....while���
	/*int num = 100;
	do
	{
		//�ж�ˮ�ɻ���
		int n1 = 0;
		int n2 = 0;
		int n3 = 0;
		
		n1 = num % 10;
		n2 = num /10 % 10;
		n3 = num / 100;
		if(n1*n1*n1 + n2*n2*n2 + n3*n3*n3 == num)
		{
			cout << num << endl;
		}
		//cout << num << endl;
		num++;
	} 
	while (num<1000);*/

	// forѭ��

	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
	//	{
 //           cout << "�����ӣ�" << i << endl;
	//	}
	//	else if (i == 6)
	//	{
	//		break;
	//	}
	//	else
	//		cout  << i << endl;
	//}

	//Ƕ��ѭ��
	/*for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << "* " ;
		}
		cout << endl;
	}*/
    //�žų˷���
	/*for (int i = 1; i <= 9; i++)
    {
	    for (int j = 1; j <= i; j++)
	    {
		    cout <<j<<"��"<<i<<"=" << (j * i) << " ";
	    }
	    cout << endl;
    }*/
	//continue���
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 2 ==0)
	//	{
	//		continue;
	//		cout << i << endl;
	//		//break;
	//	}
	//	cout <<i<< endl;
	//}
    //���鶨��
 //   int arr1[10];
	//int arr2[] = { 1,2,3,4,5 };   //���油0
	//for (int i = 1; i <= 10; i++)
	//{
	//	arr1[i - 1] = 2*i;
	//	cout << arr1[i-1] << endl; //��ӡ�׵�ַ
	//}
	//cout << (int)&arr2[2] << endl;
	//һά��������Ӧ��

 //   int arr[5] = { 300,350,400,200,250 };
	//int max = 0;
	//for (int i=0; i <= 5; i++)
	//	if (arr[i] > max)
	//		max = arr[i];
	//	else
	//		break;
	//cout << max << endl;
    // ����Ԫ������
    
 //   int arr[5] = { 1,2,3,5,4 };
 //   int start = 0;
	//int end = sizeof(arr) / sizeof(arr[0]) - 1;
	//for (int i = 0; i < 5; i++)
	//{

	//	cout << arr[i] << endl;
	//}

	//while (start <= end)
	//{
 //       int temp = arr[start];
	//    arr[start] = arr[end];
	//    arr[end] = temp;
	//	//�±����
	//	start++;
	//	end--;
	//}
	//for (int i = 0; i < 5; i++)
	//{

	//	cout << arr[i] << endl;
	//}
   //ð������
 //   int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//for (int i = 0; i < 10; i++)
 //   {
	//    cout << arr[i] << endl;
 //   }
	//// ���������� = Ԫ�ظ��� - 1
	//for (int i = 0; i < 9-1; i++)
	//{
	//	//�ڲ�ѭ���Ա�  ���� = Ԫ�ظ��� - ��ǰ���� - 1
	//	for (int j = 0; j < 9 - i - 1; j++)
	//	{
 //           //r�����һ�����ȵڶ������󣬽������� 
	//		if (arr[j] > arr[j + 1])
	//		{
 //               int temp = arr[j];
	//	        arr[j] = arr[j + 1];
	//		    arr[j + 1] = temp;
	//		}
	//	}		
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << arr[i] << endl;
	//}
    // ��ά����
 //   int arr[2][3] = { {1,2,3},{2,3,4} };
	//cout << (int)&arr[0][0] << endl;
	//int sum1 = 0;
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j=0; j < 3; j++)
	//	{
	//		
	//		sum1+= arr[0][j];
	//		cout << arr[i][j] <<" " ;
	//	}
	//	cout << endl;
	//	
	//}
 //   cout << sum1 << endl;
    
 //   int aa = 10;     //ʵ��
	//int bb = 20;
	//int cc = add(aa, bb);
	//cout << cc << endl;

	
 //   int aa = 5;
 //   int bb = 3;
	//swap(aa, bb);
	
// ָ��

 //   // ����ָ��
 //   int a = 10;
	////����ָ���﷨
	//int * p;
	////ָ���¼����a�ĵ�ַ(32λ4�ֽڡ�64λ8�ֽ�)
	//p = &a;
	//cout << &a << endl;
	//cout << sizeof(int *) << endl;
	////*p��ʾ�����ã��ҵ��ڴ��Ӧ������
	//system("pause");

//��ָ���Ұָ��
// 1����ָ�����ڸ�ָ�������ʼ��������ֱ�ӷ���
//0~255֮����ڴ��ű�ϵͳռ�ã������Է���
//����Ұָ��

 //   int a = 10;
	//int b = 20;
 //   const int* p = &a;  //����ָ�룺ָ����Ըģ�ָ���ֵ���ɸ�
	////*p = 20;   ����
	//p = &b;  //�ı�ָ��
	//cout << *p << endl;
	//int* const p1 = &a; //ָ�볣����ָ�򲻿ɸģ�ָ���ֵ���Ը�
	////p1 = &b;  ����
	//*p1 = 20; //�ı���ֵ
	//cout << *p1 << endl;
	//const int* const p2 = &a; //�����Σ�ָ�򲻿ɸģ�ָ���ֵҲ���ɸ�
    

 //   int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << arr[9] << endl;
	//int * p = arr;  //�׵�ַ
	//p++;
	//cout << *p << endl;
	//int* p1 = arr;
	//for(int i = 0; i < 10; i++)
	//{
 //        cout << *p1 << endl;
	//     p1++;
	//}

 //   int a = 10;
 //   int b = 20;
	//swap(&a, &b); //������ַ�ɸı�ʵ�ε�ֵ
	//cout << a << endl;
	//cout << b << endl;

 //   int arr[10] = { 2,1,9,7,5,10,4,8,3,6 };
	//bubbleSort(arr, 10);

    //�ṹ�弯���嶨��
 //   struct Student s1;
	//s1.name = "����";
	//s1.age = 18;
	//s1.score = 100;
	//cout << s1.name << " " << s1.age << " " << s1.score << endl;
	//struct Student s2 = { "����" , 18 , 100 };
	//cout << s2.name << " " << s2.age << " " << s2.score << endl;

    //�����ṹ������
    /*struct Student stuArray[3] =
    {
	    {"����", 18 , 100},
	    {"����", 19 , 90},
	    {"����", 12 , 80}
    };*/
    // Ԫ�ظ�ֵ
    /*stuArray[2].name = "������";
	stuArray[2].age = 29;
	stuArray[2].score = 83;
	for (int i = 0; i < 3; i++)
	{
		cout << stuArray[i].age << endl;
	}*/
    //ָ��ָ��ṹ��
 //   Student s = { "����" , 18 ,95 };
	//Student * p = &s;     //ָ��ָ��ṹ�����
	//p->name;
	//cout << "����: " << p->name << endl;
	
	// �ṹ��Ƕ��
	/*Teacher y;
	y.id = 1115;
	y.name = "С���";
	y.age = 36;
	y.stu.name = "����";
	y.stu.age = 19;
	y.stu.score = 95;
	cout << y.stu.name << endl;*/

    //�Ƚ�ֵ���ݺ͵�ַ����
 //   struct Student s;
	//s.name = "sss";
	//s.age = 28;
	//s.score = 98;
	//printsz(s);
	//cout << s.age <<endl;
	//printzz(&s);
	//cout << s.age << endl;

 //   struct Hero heroarray[5] =
 //   {
	//    {"liu" , 23 , "��"},
	//    {"guan", 22, "��"},
	//    {"zhang", 21, "��"},
	//    {"zhao", 20, "��"},
	//    {"diao", 19, "Ů"},
 //   };
	//int len = sizeof(heroarray) / sizeof(heroarray[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << heroarray[i].name << heroarray[i].age
	//		<< heroarray[i].sex << endl;
	//}

// ͨѶ¼����ϵͳ��ϰ

	//system("pause");
//	return 0;
//}  





	