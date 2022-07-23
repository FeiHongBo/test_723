#include"circle.h"
#include"point.h"

//设置半径
void Circle1::set_R(int r)
{
	m_R = r;
}
//获取R
int Circle1::getR()
{
	return m_R;
}
//设置圆心
void Circle1::setCenter(Point center)
{
	m_center = center;
}
//获取圆心
Point Circle1::getCenter()
{
	return m_center;
}