//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����ʽ
//
//class base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "�����static void func()����" << endl;
//	}
//	//��̬���������������������ʼ��
//};
//int base::m_a = 200;
//
//
//class son:public base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "�����static void func()����" << endl;
//	}
//	//��̬���������������������ʼ��
//};
//int son::m_a = 200;
//
//
//void test01()
//{
//	//ͨ��������ʾ�̬��Ա
//	cout << "ͨ��������ʾ�̬��Ա" << endl;
//	son s;
//	cout << "son �е� m_a=" << s.m_a << endl;
//	cout << "base �е� m_a=" << s.base::m_a << endl;
//
//	//ͨ������ֱ�ӷ��ʾ�̬��Ա
//	cout << "ͨ������ֱ�ӷ��ʾ�̬��Ա" << endl;
//	cout << "son �е� m_a=" << son::m_a << endl;
//	
//	//��һ��������ʾͨ��������ʽ����   �ڶ���������ʾ���ʸ����������µĳ�Ա
//	cout << "base �е� m_a=" << son::base::m_a << endl;
//	//Ҳ����ͨ������ֱ�ӷ���
//	cout << "base �е� m_a=" << base::m_a << endl;
//
//}
//
//void test02()
//{
//	//1:ͨ���������
//	cout << "ͨ���������" << endl;
//	son s;
//	s.func();
//	s.base::func();
//
//	//2:ͨ����������
//	cout << "ͨ����������" << endl;
//	son::func();
//	son::base::func();
//
//
//}
//
//int main()
//{
//	test01();
//	cout << "\n\n\n" ;
//	test02();
//
//	system("pause");
//	return 0;
//}