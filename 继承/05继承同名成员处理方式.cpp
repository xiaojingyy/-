//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////����
//class father
//{
//public:
//	father()
//	{
//		m_a = 100;
//	}
//	 
//	void func()
//	{
//		cout << "father �е� m_a=" << m_a << endl;
//	}
//	int m_a;
//};
////����
//class son: public father
//{
//public:
//	son()
//	{
//		m_a = 200;
//	}
//
//	void func()
//	{
//		cout << "son �е� m_a=" << m_a << endl;
//	}
//
//	int m_a;
//};
//
//
//void test01()
//{
//	son s;
//	//������͸�������ͬ���ı���ʱ��ֱ�ӷ��ʻ�Ĭ�Ϸ��������е�����
//	//���Ҫ���ʸ����е����ݣ���Ҫ����������::
//
//	//ֻҪ��������ͬ���ģ������еľͻᱻ���أ�������û�����أ������Ҫ���ʣ���ֻ�ܼ�������
//
//	cout << "�����е�m_a=" << s.m_a << endl;
//	cout << "�����е�m_a=" << s.father::m_a<< endl;
//}
//
//void test02()
//{
//	son o;
//	cout << "�����еĺ�������:"  << endl;
//	o.func();
//	cout << "�����еĺ�������:" << endl;
//	o.father::func();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}