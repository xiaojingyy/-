#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Building
{
	//�ص�  ������Ԫ
	friend class goodgay;
public:
	Building();//���������д��Ա����


public:
	string m_sittingroom;
private:
	string m_bedroom;

};
class goodgay
{

public:
	goodgay();//��η�������ʵ��
	void visit();//�ιۺ���  ����building������
	Building* building;
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

void test01()
{
	goodgay gg;
	gg.visit();

}

int main()
{
	test01();
	system("pause");
	return 0;
}