#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//������
class animal
{
public:
	int m_age;
};

//�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
//��ʱ�Ĺ��������animal��Ϊ�����

//����
class sheep :virtual public animal {};
//����
class tuo:virtual public animal{};
//������
class sheeptuo:public sheep,public tuo{};

void test01()
{
	sheeptuo st;
	st.sheep::m_age = 100;
	st.tuo::m_age = 100;
	//����virtual�ؼ��ֺ󣬱�Ϊ��̳У�m_ageֻ��һ��������sheep::m_age��tuo::m_age��ͬһ������

	cout << "st.sheep::m_age" << st.sheep::m_age << endl;
	cout << "st.tuo::m_age" << st.tuo::m_age << endl;

}


int main()
{


	system("pause");
	return 0;
}