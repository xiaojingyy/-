#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}

};

//���Ǻ����� ����� ������������ ����������  
void myprint02(string test)
{
	cout << test << endl;
}

void test01()
{
	//���صģ��������� ��Ϊ�ǳ��������� Ҳ��Ϊ�º���
	person p;
	p("�������ֱ�Ӵ�ӡ");
}

class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	myadd p;
	int result = p(100, 10);
	cout << result;

	//������������
	//ֻ����ʱʹ��������������ᱣ��ʲô
	//����()(����)   �����һ��������������
	cout << myadd()(20, 30) << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}