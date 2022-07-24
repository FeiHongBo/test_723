#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include "swap.h"
//常量的定义方式
//1 #define 宏常量
#define Day 7

//int add(int a, int b)   //a和b是形参
//{
//	int sum = a + b;
//	return sum;
//}

//函数没有返回值，声明时写void
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

//函数常见形式
//1、无参无返  2、有参无返  3、无参有返  4、有参有返
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
 
////函数的分文件编写
////函数声明
//void swap(int a, int b);
////函数定义
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

// 冒泡排序函数
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

// 结构体定义
//struct Student
//{
//	//成员列表
//	
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	int score;
//};

// 结构体数组定义
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;

};

//结构体嵌套
struct Teacher
{
	//姓名
	string name;
	// id
	int id;
	//年龄
	int age;
	//学生
	struct Student stu;
};

// 结构体-函数 值传递
void printsz(struct Student s)
{
	//s.age = 100;  //未改变主函数数值
	cout << s.age << endl;
}
// 结构体-函数 地址传递
void printzz(struct Student * s) //加入const可以防止误操作
{
	//s->age = 200;  //改变主函数数值
	cout << s -> age << endl;
}

//设计英雄结构体
struct Hero
{
	string name;
	int age;
	string sex;
};


// main是程序的入口
//int main()
//{ 
	// hello world练习
	//cout << "hello c++" << endl;
	// 定义变量练习
	/*float a = 100;
	char b[] = "adgfs";
	bool cc = false;
	float d = 20;
	float c = floor(a) + floor(d);
	c /= 20;*/
	
	//cout <<"d = " << (a == b) << endl;
	//cout <<  (a && d) << endl;
	//const 修饰变量 也为常量
	//const int a = 7;
	//cout << "size:\n" << cc << endl;
	//cin >> b;
	//cout <<"a=" <<b<< endl;
	// if语句练习
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

	//switch语句 (只能判断整型不能表示区间)
	//int aa = 0;
	//
	//cout << "开始打分：" << endl;
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

	// while循环语句

	/*srand((unsigned int)time(NULL));
	int num = rand()%100 + 1;//生成1-100随机数
	int val = 0;
	
	while (1)
	{
       cin >> val;

	   if (val > num)
	   {
		   cout << "猜测过大" << endl;
	   }
	   else if (val < num)
	   {
		   cout << "猜测过小" << endl;
	   }
	   else if (val = num)
	   {
		   cout << "猜对了" << endl;
	   }
		
	}*/
		
	// do....while语句
	/*int num = 100;
	do
	{
		//判断水仙花数
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

	// for循环

	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
	//	{
 //           cout << "敲桌子：" << i << endl;
	//	}
	//	else if (i == 6)
	//	{
	//		break;
	//	}
	//	else
	//		cout  << i << endl;
	//}

	//嵌套循环
	/*for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << "* " ;
		}
		cout << endl;
	}*/
    //九九乘法表
	/*for (int i = 1; i <= 9; i++)
    {
	    for (int j = 1; j <= i; j++)
	    {
		    cout <<j<<"×"<<i<<"=" << (j * i) << " ";
	    }
	    cout << endl;
    }*/
	//continue语句
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
    //数组定义
 //   int arr1[10];
	//int arr2[] = { 1,2,3,4,5 };   //后面补0
	//for (int i = 1; i <= 10; i++)
	//{
	//	arr1[i - 1] = 2*i;
	//	cout << arr1[i-1] << endl; //打印首地址
	//}
	//cout << (int)&arr2[2] << endl;
	//一维数组名称应用

 //   int arr[5] = { 300,350,400,200,250 };
	//int max = 0;
	//for (int i=0; i <= 5; i++)
	//	if (arr[i] > max)
	//		max = arr[i];
	//	else
	//		break;
	//cout << max << endl;
    // 数组元素逆置
    
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
	//	//下标更新
	//	start++;
	//	end--;
	//}
	//for (int i = 0; i < 5; i++)
	//{

	//	cout << arr[i] << endl;
	//}
   //冒泡排序
 //   int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//for (int i = 0; i < 10; i++)
 //   {
	//    cout << arr[i] << endl;
 //   }
	//// 总排序轮数 = 元素个数 - 1
	//for (int i = 0; i < 9-1; i++)
	//{
	//	//内层循环对比  次数 = 元素个数 - 当前轮数 - 1
	//	for (int j = 0; j < 9 - i - 1; j++)
	//	{
 //           //r如果第一个数比第二个数大，交换两数 
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
    // 二维数组
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
    
 //   int aa = 10;     //实参
	//int bb = 20;
	//int cc = add(aa, bb);
	//cout << cc << endl;

	
 //   int aa = 5;
 //   int bb = 3;
	//swap(aa, bb);
	
// 指针

 //   // 定义指针
 //   int a = 10;
	////定义指针语法
	//int * p;
	////指针记录变量a的地址(32位4字节、64位8字节)
	//p = &a;
	//cout << &a << endl;
	//cout << sizeof(int *) << endl;
	////*p表示解引用，找到内存对应的数据
	//system("pause");

//空指针和野指针
// 1、空指针用于给指针变量初始化，不能直接访问
//0~255之间的内存编号被系统占用，不可以访问
//避免野指针

 //   int a = 10;
	//int b = 20;
 //   const int* p = &a;  //常量指针：指向可以改，指向的值不可改
	////*p = 20;   错误
	//p = &b;  //改变指向
	//cout << *p << endl;
	//int* const p1 = &a; //指针常量：指向不可改，指向的值可以改
	////p1 = &b;  错误
	//*p1 = 20; //改变数值
	//cout << *p1 << endl;
	//const int* const p2 = &a; //都修饰：指向不可改，指向的值也不可改
    

 //   int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << arr[9] << endl;
	//int * p = arr;  //首地址
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
	//swap(&a, &b); //交换地址可改变实参的值
	//cout << a << endl;
	//cout << b << endl;

 //   int arr[10] = { 2,1,9,7,5,10,4,8,3,6 };
	//bubbleSort(arr, 10);

    //结构体集具体定义
 //   struct Student s1;
	//s1.name = "张三";
	//s1.age = 18;
	//s1.score = 100;
	//cout << s1.name << " " << s1.age << " " << s1.score << endl;
	//struct Student s2 = { "李四" , 18 , 100 };
	//cout << s2.name << " " << s2.age << " " << s2.score << endl;

    //创建结构体数组
    /*struct Student stuArray[3] =
    {
	    {"张三", 18 , 100},
	    {"李四", 19 , 90},
	    {"赵六", 12 , 80}
    };*/
    // 元素赋值
    /*stuArray[2].name = "王麻子";
	stuArray[2].age = 29;
	stuArray[2].score = 83;
	for (int i = 0; i < 3; i++)
	{
		cout << stuArray[i].age << endl;
	}*/
    //指针指向结构体
 //   Student s = { "张三" , 18 ,95 };
	//Student * p = &s;     //指针指向结构体变量
	//p->name;
	//cout << "姓名: " << p->name << endl;
	
	// 结构体嵌套
	/*Teacher y;
	y.id = 1115;
	y.name = "小杨哥";
	y.age = 36;
	y.stu.name = "张三";
	y.stu.age = 19;
	y.stu.score = 95;
	cout << y.stu.name << endl;*/

    //比较值传递和地址传递
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
	//    {"liu" , 23 , "男"},
	//    {"guan", 22, "男"},
	//    {"zhang", 21, "男"},
	//    {"zhao", 20, "男"},
	//    {"diao", 19, "女"},
 //   };
	//int len = sizeof(heroarray) / sizeof(heroarray[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << heroarray[i].name << heroarray[i].age
	//		<< heroarray[i].sex << endl;
	//}

// 通讯录管理系统练习

	//system("pause");
//	return 0;
//}  





	