#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include"circle.h"
#include"point.h"

/*//���һ������,��������Բ����
class point
{
public:
	//����xy����
	void setx(int x)
	{
		m_x = x;
	}
	void sety(int y)
	{
		m_y = y;
	}
	//��ȡxy����
	int getx()
	{
		return m_x;
	}
	int gety()
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};

//���Բ�Ĺ�ϵ��Բ�ڣ�Բ�ϣ�Բ�⣩
class circle
{
public:
	//���ð뾶
	void setr(int r)
	{
		m_r = r;
	}
	//��ȡ�뾶
	int getr()
	{
		return m_r;
	}
	//����Բ��
	void setcenter(point center)
	{
		m_center = center;
	}
	//������
	point getcenter()
	{
		return m_center;
	}


private:
	int m_r;//�뾶
	point m_center;//Բ��


};*/

//�жϵ��Բ�Ĺ�ϵ
void isincircle(circle& c, point& p)
{
	//���жϵ��Բ�ĵľ��룬���߶�ƽ�������ÿ�����
	//�������
	int distance =
		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//����뾶��ƽ��
	int r_long = c.getr() * c.getr();
	//�жϹ�ϵ
	if (distance == r_long)
	{
		cout << "����Բ��" << endl;
	}
	if (distance < r_long)
	{
		cout << "����Բ��" << endl;
	}
	if (distance > r_long)
	{
		cout << "����Բ��" << endl;
	}

}

int main()
{
	//����Բ
	circle c;
	c.setr(10);
	point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);

	//������
	point p;
	p.setx(10);
	p.sety(10);

	//�жϹ�ϵ
	isincircle(c, p);




	system("pause");
	return 0;
}