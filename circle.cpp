#include"circle.h"
#include"point.h"

//���ð뾶
void Circle1::set_R(int r)
{
	m_R = r;
}
//��ȡR
int Circle1::getR()
{
	return m_R;
}
//����Բ��
void Circle1::setCenter(Point center)
{
	m_center = center;
}
//��ȡԲ��
Point Circle1::getCenter()
{
	return m_center;
}