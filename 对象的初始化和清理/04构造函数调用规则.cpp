//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////���캯�����ù���
////1������һ���࣬C++���������ÿ���඼���������������
////Ĭ�Ϻ�������ʵ�֣�
////������������ʵ�֣�
////����������ֵ������
//
//
////2:�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬������Ȼ�ṩ��������
////�������д�˿������캯�����������Ͳ����ṩ�������캯��
//
//class person
//{
//public:
//
//	/*person()
//	{
//		cout << "����person��Ĭ�Ϲ��캯���ĵ���" << endl;
//	}*/
//	person(int age)
//	{
//		cout << "����person���вι��캯���ĵ���" << endl;
//		m_age = age;
//	}
//	person(const person& p)
//	{
//		cout << "person�Ŀ������캯������" << endl;
//		m_age = p.m_age;
//	}
//	~person()
//	{
//		cout << "����person�����������ĵ���" << endl;
//	}
//
//	int m_age;
//
//};
//
////void test01()
////{
////	person p;
////	p.m_age = 19;
////	person p2(p);
////	cout << "p2��������" << p2.m_age << endl;
////}
//
//void test02()
//{
//	//person p;//����������Ĭ�Ϲ��캯��ע�͵��������вι��죬�������Ͳ��ܵ���Ĭ�Ϲ��캯�����ᱨ��
//	person p3(20);
//	cout << "p2��������" << p3.m_age << endl;
//
//
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}