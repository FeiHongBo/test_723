//#include <iostream>
//using namespace std;
//#include <string>
//#include <ctime>
//#include "swap.h"
////常量的定义方式
////1 #define 宏常量
//#define Max 7
//
//
//
////联系人结构体
//struct Person
//{
//	string p_name;
//	int p_sex;
//	int p_age;
//	string p_num;
//	string p_addr;
//
//};
//
////通讯录结构体
//struct Addressbooks
//{
//	//保存的联系人数组
//	struct Person personArray[Max];
//	//当前人员个数
//	int m_size;
//};
//
////1、添加联系人
//void addperson(Addressbooks * abs)
//{
//	//判断通讯录是否满了
//	if (abs->m_size == Max)
//	{
//		cout << "通讯录已满" << endl;
//		return;
//	}
//	else
//	{
//		//添加联系人
//		 //姓名
//		string name;                   
//		cout << "请输入姓名" << endl;   
//		cin >> name;
//		abs->personArray[abs->m_size].p_name = name;
//		//性别
//		int sex = 0 ;
//		cout << "请输入性别" << endl;   
//		cout << "1 --- 男" << endl;
//		cout << "2 --- 女" << endl;
//		while (true)
//		{
//			cin >> sex;
//			if (sex == 1 || sex == 2)
//			{
//				abs->personArray[abs->m_size].p_sex = sex;
//				break;
//			}
//			cout << "输入有误，清重新输入" << endl;
//		}
//		//年龄
//		cout << "请输入年龄" << endl;
//		int age = 0;
//		cin >> age;
//		abs->personArray[abs->m_size].p_age = age;
//		//电话
//		cout << "请输入电话" << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[abs->m_size].p_num = phone;
//		//住址
//		cout << "请输入住址" << endl;
//		string address;
//		cin >> address;
//		abs->personArray[abs->m_size].p_addr = address;
//
//		//更新认识
//
//		abs->m_size++;
//		cout << "添加成功" << endl;
//
//		system("pause");  //按任意键继续
//	    system("cls"); //清屏操作
//	}
//
//}
//
////显示所有联系人
//void showperson(Addressbooks * abs)
//{
//	if (abs->m_size == 0)
//		cout << "当前记录为空" << endl;
//	else
//		for (int i = 0; i < abs->m_size; i++)
//		{
//            cout << "姓名: " << abs->personArray[i].p_name << "\t";
//	        cout << "性别: " << (abs->personArray[i].p_sex == 1? "男" :" 女") << "\t";
//			cout << "年龄: " << abs->personArray[i].p_age << "\t";
//			cout << "电话: " << abs->personArray[i].p_num << "\t";
//			cout << "住址: " << abs->personArray[i].p_addr << endl;
//		}
//	system("pause");  //按任意键继续
//	system("cls"); //清屏操作	
//}
//
////检测联系人是否存在，返回具体位置，不存在返回-1
//int isExist(Addressbooks* abs, string name)
//{
//	for (int i = 0; i < abs->m_size; i++)
//	{
//		if (abs->personArray[i].p_name == name)
//			return i;	
//	}
//	return -1;
//}
//
////3、删除联系人
//void deleteperson(Addressbooks* abs)
//{
//	cout << "请输入要删除的联系人" << endl;
//	string name;
//	cin >> name;
//	
//	//ret == -1 未查到
//	int ret = isExist(abs, name);
//	if (ret != -1)
//	{
//		for (int i = ret; i < abs->m_size; i++)
//		{
//            //数据迁移
//			abs->personArray[i] = abs->personArray[i + 1];
//		}
//		abs->m_size--;
//		cout << "删除成功" << endl;
//	}
//	else
//	{
//		cout << "查无此人" << endl;
//	}
//	system("pause");  //按任意键继续
//	system("cls"); //清屏操作
//}
//
////4、查找联系人
//void findperson(Addressbooks* abs)
//{
//	cout << "输入查找的联系人" << endl;
//	string name;
//	cin >> name;
//
//	//判断是否找到
//	int ret = isExist(abs, name);
//	if (ret != -1)
//	{
//		cout << "姓名： " << abs->personArray[ret].p_name << "\t";
//		cout << "性别: " << (abs->personArray[ret].p_sex == 1 ? "男" : " 女") << "\t";
//		cout << "年龄: " << abs->personArray[ret].p_age << "\t";
//		cout << "电话: " << abs->personArray[ret].p_num << "\t";
//		cout << "住址: " << abs->personArray[ret].p_addr << endl;
//	}
//	else
//	{
//		cout << "查无此人" << endl;
//	}
//	system("pause");  //按任意键继续
//	system("cls"); //清屏操作
//}
//
//// 5、修改指定联系人
//void modifyperson(Addressbooks* abs)
//{
//	cout << "输入要修改的联系人" << endl;
//	string name;
//	cin >> name;
//
//	//判断是否找到
//	int ret = isExist(abs, name);
//	if (ret != -1)
//	{
//		//姓名
//		cout << "请输入姓名" << endl;
//		string name;
//		cin >> name;
//		abs->personArray[ret].p_name = name;
//		//性别
//		cout << "请输入性别" << endl;
//		cout << "1 --- 男" << endl;
//		cout << "2 --- 女" << endl;
//
//		int sex = 0;
//		while(1)
//		{
//            cin >> sex;
//		    if (sex == 1 || sex == 2)
//		    {
//				abs->personArray[ret].p_sex = sex;
//				break;
//		    }
//			else
//			{
//				cout << "输入有误" << endl;
//			}
//		}
//		//年龄
//		cout << "请输入年龄" << endl;
//		int age;
//		cin >> age;
//		abs->personArray[ret].p_age = age;
//		//电话
//		cout << "请输入电话" << endl;
//		int phone;
//		cin >> phone;
//		abs->personArray[ret].p_num = phone;
//		//住址
//		cout << "请输入住址" << endl;
//		int add;
//		cin >> add;
//		abs->personArray[ret].p_addr = add;
//
//		cout << "修改成功" << endl;
//	}
//	else
//	{
//		cout << "查无此人" << endl;
//	}
//	system("pause");  //按任意键继续
//	system("cls"); //清屏操作
//}
//
////6、 清空联系人
//void cleanperson(Addressbooks* abs)
//{
//
//	abs->m_size = 0;
//	cout << "通讯录已清空" << endl;
//	system("pause");  //按任意键继续
//	system("cls"); //清屏操作
//}
//
////菜单界面
//void showmenu()
//{
//	cout << "*************************" << endl;
//	cout << "***** 1、添加联系人 *****" << endl;
//	cout << "***** 2、显示联系人 *****" << endl;
//	cout << "***** 3、删除联系人 *****" << endl;
//	cout << "***** 4、查找联系人 *****" << endl;
//	cout << "***** 5、修改联系人 *****" << endl;
//	cout << "***** 0、退出通讯录 *****" << endl;
//	cout << "*************************" << endl;
//}
//int main()
//{	
//	//创建通讯录结构体变量
//	Addressbooks abs;
//	//初始化人员个数
//	abs.m_size = 0;
//
//	int select = 0;
//
//	while (true)
//	{
//         showmenu();
//
//	     cin >> select;
//
//	     switch (select)
//	     {
//	     case 1:     //1、添加
//		     addperson(&abs);
//		      break;
//	     case 2:
//		     showperson(&abs);
//		     break;
//	     case 3:
//		 /*{
//             cout << "请输入删除联系人姓名" << endl;
//             string name;
//			 cin >> name;
//
//			 if(isExist(&abs,name) == -1)
//				 cout << "查无此人" << endl;
//			 else 
//				 cout << "找到此人" << endl;
//		 }*/
//		 deleteperson(&abs);
//		     break;
//	     case 4:
//		 findperson(&abs);
//		     break;
//	     case 5:
//		 modifyperson(&abs);
//		     break;
//	     case 0:
//		 cleanperson(&abs);
//		     break;
//	     case 7:
//		     cout << "欢迎下次使用" << endl;
//		     system("pause");
//		    return 0;
//		     break;
//	     default:
//		 break;
//	     }
//	}
//
//
//	//system("pause");
//	return 0;
//}