#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//��ͨʵ��ҳ��

//Javaҳ��
class java
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��.." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
	}
	void left()
	{
		cout << "java,python,cpp" << endl;
	}
	void content()
	{
		cout << "java��ѧ����Ƶ" << endl;
	}
};

//pythonҳ��
class python
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��.." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
	}
	void left()
	{
		cout << "java,python,cpp" << endl;
	}
	void content()
	{
		cout << "python��ѧ����Ƶ" << endl;
	}
};

//cppҳ��
class cpp
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��.." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
	}
	void left()
	{
		cout << "java,python,cpp" << endl;
	}
	void content()
	{
		cout << "cpp��ѧ����Ƶ" << endl;
	}
};


void test01()
{
	cout << "java������Ƶҳ�����£�" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	cout << "------------------" << endl;
	cout << "java������Ƶҳ�����£�" << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	cout << "------------------" << endl;
	cout << "java������Ƶҳ�����£�" << endl;
	cpp cp;
	cp.header();
	cp.footer();
	cp.left();
}

int main()
{
	test01();
	system("pause");
	return 0;
}