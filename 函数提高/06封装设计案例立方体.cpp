#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1��������������
//2���������
//3�������Ϊ  ��ȡ��������
//4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class cube
{
	//���ó����
	void setl(int l)
	{
		m_long = l;
	}
	void setw(int w)
	{
		m_width = w;
	}
	void setw(int h)
	{
		m_height = h;
	}
	//��ȡ�����
	int getl()
	{
		return m_long;
	}
	int getw()
	{
		return m_width;
	}
	int geth()
	{
		return m_height;
	}
	//��ȡ��������

	//��������,һ����˽��
private:
	int m_long;
	int m_width;
	int m_height;

};