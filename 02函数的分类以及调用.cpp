#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1���캯���ķ��༰����
//����  
//���ղ�������    �޲ι��죨Ĭ�Ϲ��죩   �вι���
//�������ͷ���    ��ͨ����    ��������
class person
{
public:
	//���캯��
	person()
	{
		cout << "person���޲ι��캯���ĵ���" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person���вι��캯���ĵ���" << endl;
	}
	//�������캯��
	person(const person& p)
		//������Ĳ������������Ը��Ƶ��ú�������������
	{
		cout << "person�Ŀ������캯���ĵ���" << endl;
		age = p.age;
	}

	~person()
	{
		cout << "person�����������ĵ���" << endl;
	}

	int age;


};
//����
void test01()
{
	//1���ŷ�
	person p1;		//Ĭ�Ϲ��캯���ĵ���
	//Ĭ�Ϲ��캯���ĵ��ò���д���ţ�person p1();  ��Ϊ����������Ϊ��һ��������������

	person p2(10);	//�вι��캯���ĵ���
	person p3(p2);	//�������캯���ĵ���

	//�������캯�������ã����·�
	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;
	

	//2��ʾ��
	person p4;
	person p5 = person(10);//�вι���
	person p6 = person(p5);//��������
	
	//ע��1��
	person(10);//��������  �ص㣺��ǰ��ִ�н�����ϵͳ����ո�������������Ϊ��û�����֣������û����
	
	//��Ҫ���ÿ������캯����ʼ��һ����������  ����������Ϊperson(p3)==person p3; ������ض���
	//person(p3);     //�����Ѿ�������һ��p3


	//3��ʽת����
	person p7 = 10;//�൱�� person p7=person(10);
	person p8 = p3;//��������
}
int main()
{
	test01();
	system("pause");
	return 0;
}


