#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class person
{
public:
	//��������
	void setname(string temp_name)
	{
		name = temp_name;
	}
	//��ȡ����
	string getname()
	{
		return name;
	}
	//��������
	void setage(int temp_age)
	{
		age = temp_age;
		if (temp_age < 0 || temp_age>150)
		{
			age = 0;
			cout << "̫�����ˣ�" << endl;
			return;
		}
		
	}
	//��ȡ����
	int getage()
	{
		return age;
	}
	//��������
	void setlover(string temp_lover)
	{
		lover = temp_lover;
	}
private:
	//���ÿɶ���д
	string name;
	//����ֻ��
	int age;
	//����ֻд
	string lover;
};

int main()
{
	person p;
	p.setname("����");
	cout << "������" << p.getname() << endl;
	p.setage(18);
	cout << "����Ϊ��" << p.getage() << endl;
	//��������
	p.setlover("������");
	//cout << "�����ǣ�" << p.setlover() << endl;
	//������ֻд��Ȩ�ޣ����ɶ�

	system("pause");
	return 0;
}