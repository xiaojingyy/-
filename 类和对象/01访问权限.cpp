#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//public :����Ȩ��
//protected :����Ȩ��
//private:˽��Ȩ��

class family
{
public:
	string name;
protected:
	string car;
private:
	long password;
public:
	void show()
	{
		cout << "������" << name << "������" << car << "���룺" << endl;
	}
};

int main()
{
	family son;
	son.name = "����";
	//son.car = "����";   ������ʾ���ɷ��ʣ�û�з���Ȩ��
	//son.password = 213456;   ͬ��û�з���Ȩ��
	son.show();
	system("pause");
	return 0;
}