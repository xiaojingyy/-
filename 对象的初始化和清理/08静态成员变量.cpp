#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//��̬��Ա����
class person
{
public:
	//1�����ж��󶼹���ͬһ������
	//2���ڱ���׶ξͷ����ڴ�
	//3�����������������ʼ�������������޷���ʼ������
	static int m_a;
private:
	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static int m_b;
};

//������ͨ������ȥ��ʼ��
int person::m_a = 100;
int person::m_b = 300;


void test01()
{
	person p;
	//100
	cout << p.m_a << endl;

	person p2;
	p2.m_a = 200;
	//200
	cout << p.m_a << endl;
	//��Ϊ����һ�ݹ������ݣ�˭���˶���ĵ���Դ
}

void test02()
{
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1:ͨ�����������з���
	person p;
	cout << p.m_a << endl;

	p.m_a = 200;

	//2:ͨ���������з���
	cout << person::m_a << endl;
	//cout << person::m_b << endl;    ��̬��Ա����Ҳ���з���Ȩ�޵�
}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}