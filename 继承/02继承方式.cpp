//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////�̳з�ʽ
//
//
////��һ������
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
////�����̳�
//class son1 :public base1
//{
//public:
//	void func()
//	{
//		m_a = 10;//�����еĹ���Ȩ�޵���������Ȼ�ǹ���Ȩ��
//		m_b = 10;//�����еı���Ȩ�޵���������Ȼ�Ǳ���Ȩ��
//		//m_c = 10;//�����е�˽��Ȩ���ǲ����Է��ʵ�
//	}
//};
//
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 20;//�����еı���Ȩ��ֻ���������п��Ա����ʣ���������ʲ���
//}
//
//
////�����̳�
//
////�ڶ�������
//class base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
//class son2 :protected base2
//{
//public:
//	void func()
//	{
//		m_a = 10;//�����еĹ�����Ա���������Ϊ������Ա
//		m_b = 10;//�����еı�����Ա���������Ϊ������Ա
//		//m_c = 10;//�����е�˽��Ȩ���ǲ����Է��ʵ�
//	}
//};
//
//void test02()
//{
//	son2 s2;
//	//s2.m_a = 10000;//��son2�У� m_aҲ��Ϊ�˱���Ȩ�� �����ⲻ�ɷ���
//}
//
//
//
////˽�м̳�
//
////����������
//class base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
//class son3 :private base3
//{
//public:
//	void func()
//	{
//		m_a = 10;//�����еĹ�����Ա���������Ϊ˽�г�Ա
//		m_b = 10;//�����еı�����Ա���������Ϊ˽�г�Ա
//		//m_c = 10;//�����е�˽��Ȩ���ǲ����Է��ʵ�
//	}
//};
//
//class grandson3 :public son3
//{
//public:
//	void func()
//	{
//		//m_a = 10;//�������Ѿ���Ϊ˽�г�Ա��������Ͳ��ɷ�����
//		//m_b = 10;//�������Ѿ���Ϊ˽�г�Ա��������Ͳ��ɷ�����
//		//m_c = 10;//˽��Ȩ���ǲ����Է��ʵ�
//	}
//};
//
//void test03()
//{
//	son3 s3;
//	//s3.m_a = 10000;//��son2�У� m_a��Ϊ��˽�г�Ա �����ⲻ�ɷ���
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}