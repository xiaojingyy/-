#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//������
class person
{
public:
	//�ڳ�Ա�������const�����ε���this��ָ����ָ��ָ���ֵҲ�������޸�
	//thisָ��ı��� �� ָ�볣����ָ���ָ���ǲ������޸ĵ�
	void showperson() const//������
	{
		//m_a = 100 ; ��������������: this->m_a=100; 
		this->m_b = 100;;
	}

	void func()//��ͨ����
	{

	}
	int m_a;
	//����mutable �ؼ���  �����������ʹ�ڳ������У�Ҳ�����޸����ֵ��
	mutable int m_b;
};

void test01()
{
	person p;
	p.showperson();
}
//������

void test02()
{
	const person p;//�ڶ���ǰ��const��Ϊ������
	//p.m_a = 100;���ﱨ�������������޸���ͨ��Ա����
	p.m_b = 100;//m_b���������õ�����������ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	//p.func();  ���ﱨ������Ϊ�������������ͨ��Ա����
	p.showperson();//������ֻ�ܵ��ó�����
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}