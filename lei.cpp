#include<iostream>
using namespace std;
#include<string>
#include"point.h"
#include"circle.h"

//���һ��Բ��
//���ܳ���ʽ �� 2 * pi * r
const float pi = 3.14;

//class �������һ���࣬��������������

class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	//�뾶r
	int int_r;

	//��Ϊ
	//��ȡ�ܳ�
	float calculateZC()
	{
		return 2 * pi * int_r;
	}
};

class Student
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	//����
	string m_name;
	//ѧ��
	int m_id ;

	//��Ϊ
	//��ȡ������ѧ��
	void showID()
	{
		cout << m_name << endl;
		cout << m_id << endl;
	}
	//��������ֵ
	void setNmae(string name)
	{
		m_name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(int id)
	{
		m_id = id;
	}
};

//����Ȩ��   ����
//����Ȩ�� public      ��Ա ���ڿ��Է���  ������Է���
//����Ȩ�� protected   ��Ա ���ڿ��Է���  ���ⲻ���Է���
//                     ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private     ��Ա ���ڿ��Է���  ���ⲻ���Է���
//                     ���Ӳ����Է��ʸ����е�˽������

class Person
{
public:	
	//����Ȩ��
	string p_Name;

protected:
	//����Ȩ��
	string p_Car;

private:
	//˽��Ȩ��
	int p_Password;

public:
	void func()
	{
		p_Name = "����";
		p_Car = "������";
		p_Password = 123;
	}
};

//struct �� class ������

class C1
{
	int m_A;       //Ĭ��Ȩ��   ˽��
};
struct C11
{
	int m_A;       //Ĭ��Ȩ��   ����
};

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class People
{
public:
	//��������
	void setName(string name)
	{
		p_name = name;
	}
	string getName()
	{
		return p_name;
	}
	//��ȡ����  �ɶ���д ������޸� ��Χ 0-150
	void setage(int age)
	{
		p_age = 0;  //��ʼ������
		if (age < 0 || age > 150)
		{
			return ;
		}
		p_age = age;
	}
	int getage()
	{
		//p_age = 0;  //��ʼ������
		return p_age;
	}
	//��������
	void setLover(string lover)
	{
		p_lover = lover;
	}
private:
	string p_name;   //�ɶ���д
	int p_age;      //ֻ��
	string p_lover; //ֻд
};

//�����������
//�������
//�����Ϊ
//�ж������������Ƿ����
class cube
{
public:
	//���ó���ߡ���ȡ�����
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}
	//��ȡ���������
	int calculateS()
	{
		return 2 * (m_L * m_W + m_W * m_H + m_L * m_H);
	}
	//��ȡ���������
	int calculateV()
	{
		return m_L * m_W  * m_H;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:	
	//����
	int m_L;   //��
	int m_W;   //��
	int m_H;   //��
	//��ȡ�����


};

bool isSame(cube& c1, cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;

}

//////����
//class Point
//{
//private:
//	int m_X;
//	int m_Y;
//public:
//	//����X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_X;
//	}
//	//����Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡx
//	int getY()
//	{
//		return m_Y;
//	}
//};
//
////Բ��
//class Circle1
//{
//private:
//	int m_R;  //�뾶
//	Point m_center;  //Բ��
//
//public:
//	//���ð뾶
//	void set_R(int r)
//	{
//		m_R = r;
//	}
//	//��ȡR
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_center;
//	}
//	
//};

//�жϵ��Բ֮��Ĺ�ϵ
void isInCircle(Circle1 &c, Point &p)
{
	//��������֮����� ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else 
	{
		cout << "����Բ��" << endl;
	}
}

int main() {

	//ͨ��Բ�� ��������Բ
	//Circle c1;
	//��Բ��������Խ��и�ֵ
	//c1.int_r = 10;
	//����Բ�ܳ�
	//cout << c1.calculateZC() << endl;

	
	//Student s1;

	//s1.m_name = "����";
	//s1.setNmae("����");
	//s1.m_id = 1437836;
	//s1.showID();

	//Person p1;
	//p1.p_Name = "zhangsan";
	////p1.p_Car = "ddd";
	//C1 c1;
	////c1.m_A = 100;
	//C11 c2;
	//c2.m_A = 100;

	//People p1;
	//p1.setName("����");
	//cout << p1.getName() << endl;
	//p1.setage(170);
	//cout << p1.getage() << endl;
	//p1.setLover("����");
	//	p1.setage(170);
	//cout << p1.getage() << endl;
	//p1.setLover("����");
	
	////����������
	//cube c1;
	//c1.setL(10);
	//c1.setW(10);
	//c1.setH(10);
	////600
	////cout << c1.calculateS() << endl;
	////cout << c1.calculateV() << endl;
	//cube c2;
	//c2.setL(10);
	//c2.setW(10);
	//c2.setH(10);

	//�ж��Ƿ����
	////bool ret = isSame(c1, c2);       //ȫ�ֺ���
	//bool ret = c1.isSameByClass(c2);   //��Ա����
	//if (ret)
	//{
	//	cout << "���" << endl;
	//}
	//else
	//{
	//	cout << "�����" << endl;
	//}

	//����Բ
	Circle1 c;
	c.set_R(10);
    Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	isInCircle(c,p);

	//system("pause");
	return 0;
}