//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////��̳��﷨
//
//class base1
//{
//public:
//	base1()
//	{
//		m_a = 100;
//	}
//	int m_a;
//};
//
//class base2
//{
//public:
//	base2()
//	{
//		m_a = 200;
//	}
//	int m_a;
//};
//
////����ͬʱ�̳�base1��base2
//
////�﷨��class ���� �� �̳з�ʽ ����1  ��  �̳з�ʽ ����2
//class son :public base1, public base2
//{
//public:
//	son()
//	{
//		m_v = 30;
//		m_n = 43;
//	}
//	int m_v;
//	int m_n;
//};
//
//void test01()
//{
//	son s;
//	cout << "sizeof son=" << sizeof(son) << endl;
//
//	//���ʲ�ͬ�����е�ͬ����Ա��Ҫ������������
//	cout << "����1�е�m_a=" << s.base1::m_a << endl;
//	cout << "����2�е�m_a=" << s.base2::m_a << endl;
//
//}
//
//
//
//void main()
//{
//	test01();
//	system("pause");
//}