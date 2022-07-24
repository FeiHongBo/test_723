#include<iostream>
using namespace std;
#include<string>
#include"point.h"
#include"circle.h"

//设计一个圆类
//求周长公式 ： 2 * pi * r
const float pi = 3.14;

//class 代表设计一个类，类后面紧跟类名称

class Circle
{
	//访问权限
	//公共权限
public:
	//属性
	//半径r
	int int_r;

	//行为
	//获取周长
	float calculateZC()
	{
		return 2 * pi * int_r;
	}
};

class Student
{
	//访问权限
	//公共权限
public:
	//属性
	//姓名
	string m_name;
	//学号
	int m_id ;

	//行为
	//获取姓名和学号
	void showID()
	{
		cout << m_name << endl;
		cout << m_id << endl;
	}
	//给姓名赋值
	void setNmae(string name)
	{
		m_name = name;
	}
	//给学号赋值
	void setId(int id)
	{
		m_id = id;
	}
};

//访问权限   三种
//公共权限 public      成员 类内可以访问  类外可以访问
//保护权限 protected   成员 类内可以访问  类外不可以访问
//                     儿子可以访问父亲中的保护内容
//私有权限 private     成员 类内可以访问  类外不可以访问
//                     儿子不可以访问父亲中的私有内容

class Person
{
public:	
	//公共权限
	string p_Name;

protected:
	//保护权限
	string p_Car;

private:
	//私有权限
	int p_Password;

public:
	void func()
	{
		p_Name = "张三";
		p_Car = "拖拉机";
		p_Password = 123;
	}
};

//struct 和 class 的区别

class C1
{
	int m_A;       //默认权限   私有
};
struct C11
{
	int m_A;       //默认权限   公共
};

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
class People
{
public:
	//设置姓名
	void setName(string name)
	{
		p_name = name;
	}
	string getName()
	{
		return p_name;
	}
	//获取年龄  可读可写 如果想修改 范围 0-150
	void setage(int age)
	{
		p_age = 0;  //初始化年龄
		if (age < 0 || age > 150)
		{
			return ;
		}
		p_age = age;
	}
	int getage()
	{
		//p_age = 0;  //初始化年龄
		return p_age;
	}
	//设置情人
	void setLover(string lover)
	{
		p_lover = lover;
	}
private:
	string p_name;   //可读可写
	int p_age;      //只读
	string p_lover; //只写
};

//设计立方体类
//设计属性
//设计行为
//判断两个立方体是否相等
class cube
{
public:
	//设置长宽高、获取长宽高
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
	//获取立方体面积
	int calculateS()
	{
		return 2 * (m_L * m_W + m_W * m_H + m_L * m_H);
	}
	//获取立方体体积
	int calculateV()
	{
		return m_L * m_W  * m_H;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:	
	//属性
	int m_L;   //长
	int m_W;   //宽
	int m_H;   //高
	//获取长宽高


};

bool isSame(cube& c1, cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;

}

//////点类
//class Point
//{
//private:
//	int m_X;
//	int m_Y;
//public:
//	//设置X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x
//	int getX()
//	{
//		return m_X;
//	}
//	//设置Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取x
//	int getY()
//	{
//		return m_Y;
//	}
//};
//
////圆类
//class Circle1
//{
//private:
//	int m_R;  //半径
//	Point m_center;  //圆心
//
//public:
//	//设置半径
//	void set_R(int r)
//	{
//		m_R = r;
//	}
//	//获取R
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_center;
//	}
//	
//};

//判断点和圆之间的关系
void isInCircle(Circle1 &c, Point &p)
{
	//计算两点之间距离 平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else 
	{
		cout << "点在圆内" << endl;
	}
}

int main() {

	//通过圆类 创建具体圆
	//Circle c1;
	//给圆对象的属性进行赋值
	//c1.int_r = 10;
	//返回圆周长
	//cout << c1.calculateZC() << endl;

	
	//Student s1;

	//s1.m_name = "张三";
	//s1.setNmae("张三");
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
	//p1.setName("张三");
	//cout << p1.getName() << endl;
	//p1.setage(170);
	//cout << p1.getage() << endl;
	//p1.setLover("李四");
	//	p1.setage(170);
	//cout << p1.getage() << endl;
	//p1.setLover("李四");
	
	////创建立方体
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

	//判断是否相等
	////bool ret = isSame(c1, c2);       //全局函数
	//bool ret = c1.isSameByClass(c2);   //成员函数
	//if (ret)
	//{
	//	cout << "相等" << endl;
	//}
	//else
	//{
	//	cout << "不相等" << endl;
	//}

	//创建圆
	Circle1 c;
	c.set_R(10);
    Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断关系
	isInCircle(c,p);

	//system("pause");
	return 0;
}