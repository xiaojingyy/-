#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class goodgay
{

public:
	goodgay();//��η�������ʵ��
	void visit();
	void visit2();
	Building* building;
};

class Building
{
	//��ȷ���߱����� googgay���µĳ�Ա����������ĺ����ѣ����Է���˽������
	friend void goodgay::visit();
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;

};
Building::Building()//building���������е�building���캯���Ķ���
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

goodgay::goodgay()
{
	//�������������
	building = new Building;//new���ص��Ǹ��������͵�ָ��

}

void goodgay::visit()
{
	cout << "���������ڷ��ʣ�" << building->m_sittingroom << endl;

	cout << "���������ڷ��ʣ�" << building->m_bedroom << endl;

}
void goodgay::visit2()
{
	cout << "���������ڷ��ʣ�" << building->m_sittingroom << endl;

	//cout << "���������ڷ��ʣ�" << building->m_bedroom << endl;
	//visit2 ���ܷ�������Ϊ��������Ԫ

}


void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}