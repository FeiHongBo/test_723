//#include <iostream>
//using namespace std;
//#include <string>
//#include <ctime>
//#include "swap.h"
////�����Ķ��巽ʽ
////1 #define �곣��
//#define Max 7
//
//
//
////��ϵ�˽ṹ��
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
////ͨѶ¼�ṹ��
//struct Addressbooks
//{
//	//�������ϵ������
//	struct Person personArray[Max];
//	//��ǰ��Ա����
//	int m_size;
//};
//
////1�������ϵ��
//void addperson(Addressbooks * abs)
//{
//	//�ж�ͨѶ¼�Ƿ�����
//	if (abs->m_size == Max)
//	{
//		cout << "ͨѶ¼����" << endl;
//		return;
//	}
//	else
//	{
//		//�����ϵ��
//		 //����
//		string name;                   
//		cout << "����������" << endl;   
//		cin >> name;
//		abs->personArray[abs->m_size].p_name = name;
//		//�Ա�
//		int sex = 0 ;
//		cout << "�������Ա�" << endl;   
//		cout << "1 --- ��" << endl;
//		cout << "2 --- Ů" << endl;
//		while (true)
//		{
//			cin >> sex;
//			if (sex == 1 || sex == 2)
//			{
//				abs->personArray[abs->m_size].p_sex = sex;
//				break;
//			}
//			cout << "������������������" << endl;
//		}
//		//����
//		cout << "����������" << endl;
//		int age = 0;
//		cin >> age;
//		abs->personArray[abs->m_size].p_age = age;
//		//�绰
//		cout << "������绰" << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[abs->m_size].p_num = phone;
//		//סַ
//		cout << "������סַ" << endl;
//		string address;
//		cin >> address;
//		abs->personArray[abs->m_size].p_addr = address;
//
//		//������ʶ
//
//		abs->m_size++;
//		cout << "��ӳɹ�" << endl;
//
//		system("pause");  //�����������
//	    system("cls"); //��������
//	}
//
//}
//
////��ʾ������ϵ��
//void showperson(Addressbooks * abs)
//{
//	if (abs->m_size == 0)
//		cout << "��ǰ��¼Ϊ��" << endl;
//	else
//		for (int i = 0; i < abs->m_size; i++)
//		{
//            cout << "����: " << abs->personArray[i].p_name << "\t";
//	        cout << "�Ա�: " << (abs->personArray[i].p_sex == 1? "��" :" Ů") << "\t";
//			cout << "����: " << abs->personArray[i].p_age << "\t";
//			cout << "�绰: " << abs->personArray[i].p_num << "\t";
//			cout << "סַ: " << abs->personArray[i].p_addr << endl;
//		}
//	system("pause");  //�����������
//	system("cls"); //��������	
//}
//
////�����ϵ���Ƿ���ڣ����ؾ���λ�ã������ڷ���-1
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
////3��ɾ����ϵ��
//void deleteperson(Addressbooks* abs)
//{
//	cout << "������Ҫɾ������ϵ��" << endl;
//	string name;
//	cin >> name;
//	
//	//ret == -1 δ�鵽
//	int ret = isExist(abs, name);
//	if (ret != -1)
//	{
//		for (int i = ret; i < abs->m_size; i++)
//		{
//            //����Ǩ��
//			abs->personArray[i] = abs->personArray[i + 1];
//		}
//		abs->m_size--;
//		cout << "ɾ���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "���޴���" << endl;
//	}
//	system("pause");  //�����������
//	system("cls"); //��������
//}
//
////4��������ϵ��
//void findperson(Addressbooks* abs)
//{
//	cout << "������ҵ���ϵ��" << endl;
//	string name;
//	cin >> name;
//
//	//�ж��Ƿ��ҵ�
//	int ret = isExist(abs, name);
//	if (ret != -1)
//	{
//		cout << "������ " << abs->personArray[ret].p_name << "\t";
//		cout << "�Ա�: " << (abs->personArray[ret].p_sex == 1 ? "��" : " Ů") << "\t";
//		cout << "����: " << abs->personArray[ret].p_age << "\t";
//		cout << "�绰: " << abs->personArray[ret].p_num << "\t";
//		cout << "סַ: " << abs->personArray[ret].p_addr << endl;
//	}
//	else
//	{
//		cout << "���޴���" << endl;
//	}
//	system("pause");  //�����������
//	system("cls"); //��������
//}
//
//// 5���޸�ָ����ϵ��
//void modifyperson(Addressbooks* abs)
//{
//	cout << "����Ҫ�޸ĵ���ϵ��" << endl;
//	string name;
//	cin >> name;
//
//	//�ж��Ƿ��ҵ�
//	int ret = isExist(abs, name);
//	if (ret != -1)
//	{
//		//����
//		cout << "����������" << endl;
//		string name;
//		cin >> name;
//		abs->personArray[ret].p_name = name;
//		//�Ա�
//		cout << "�������Ա�" << endl;
//		cout << "1 --- ��" << endl;
//		cout << "2 --- Ů" << endl;
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
//				cout << "��������" << endl;
//			}
//		}
//		//����
//		cout << "����������" << endl;
//		int age;
//		cin >> age;
//		abs->personArray[ret].p_age = age;
//		//�绰
//		cout << "������绰" << endl;
//		int phone;
//		cin >> phone;
//		abs->personArray[ret].p_num = phone;
//		//סַ
//		cout << "������סַ" << endl;
//		int add;
//		cin >> add;
//		abs->personArray[ret].p_addr = add;
//
//		cout << "�޸ĳɹ�" << endl;
//	}
//	else
//	{
//		cout << "���޴���" << endl;
//	}
//	system("pause");  //�����������
//	system("cls"); //��������
//}
//
////6�� �����ϵ��
//void cleanperson(Addressbooks* abs)
//{
//
//	abs->m_size = 0;
//	cout << "ͨѶ¼�����" << endl;
//	system("pause");  //�����������
//	system("cls"); //��������
//}
//
////�˵�����
//void showmenu()
//{
//	cout << "*************************" << endl;
//	cout << "***** 1�������ϵ�� *****" << endl;
//	cout << "***** 2����ʾ��ϵ�� *****" << endl;
//	cout << "***** 3��ɾ����ϵ�� *****" << endl;
//	cout << "***** 4��������ϵ�� *****" << endl;
//	cout << "***** 5���޸���ϵ�� *****" << endl;
//	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
//	cout << "*************************" << endl;
//}
//int main()
//{	
//	//����ͨѶ¼�ṹ�����
//	Addressbooks abs;
//	//��ʼ����Ա����
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
//	     case 1:     //1�����
//		     addperson(&abs);
//		      break;
//	     case 2:
//		     showperson(&abs);
//		     break;
//	     case 3:
//		 /*{
//             cout << "������ɾ����ϵ������" << endl;
//             string name;
//			 cin >> name;
//
//			 if(isExist(&abs,name) == -1)
//				 cout << "���޴���" << endl;
//			 else 
//				 cout << "�ҵ�����" << endl;
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
//		     cout << "��ӭ�´�ʹ��" << endl;
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