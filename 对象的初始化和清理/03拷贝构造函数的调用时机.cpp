#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

//2��ֵ���ݵķ�ʽ������������ֵ

//3��ֵ��ʽ���ؾֲ�����

class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	person(int age)
	{
		m_age = age;
		cout << "person���вι��캯���ĵ���" << endl;
	}
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person�Ŀ������캯���ĵ���" << endl;
	}
	~person()
	{
		cout << "person���������캯���ĵ���" << endl;
	}
	
	int m_age;
};

void test01()
{
	person p1(20);
	person p2(p1);
}


int main()
{


	system("pause");
	return 0;
}