//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////�����ǳ����
////ǳ�������򵥵ĸ��ƿ������������Ƶĵ�ַҲ��һ����
////������ڶ�����������ռ䣬���п������������µĵ�ַ��������Ӱ��ԭ���ĵ�ַ
//
////������ջ�����ݣ��Ƚ����
//
////�ص㣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
//
//class person
//{
//public:
//	person()
//	{
//		cout << "����person��Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//	person(int age,int height)
//	{
//		
//		cout << "����person���вι��캯���ĵ���" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	person(const person& p)
//	{
//		cout << "person�Ŀ������캯������" << endl;
//		m_age = p.m_age;		//���Ǳ�����Ĭ��ʵ�ֵ�
//		//m_height = p.m_height;  ���Ǳ�����Ĭ��ʵ�ֵ�
//		m_height = new int(*p.m_height);
//		//����������һ���µĶ����ռ䣬p2����һ��ռ�����ͷŲ���Ӱ��p1�ͷ����Լ��Ŀռ�
//
//	}
//
//	~person()
//	{
//		//�������룬�����������������ͷŲ���
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;//��ֹҰָ����֣�������Ϊ��ָ��
//
//		}
//
//		cout << "����person�����������ĵ���" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//
//
//};
//
//void test01()
//{
//	person p1(18,160);
//	cout << "p1��������" << p1.m_age << "���Ϊ" << *p1.m_height<< endl;
//
//	person p2(p1);
//	cout << "p2��������" << p2.m_age << "���Ϊ" << *p2.m_height << endl;
//
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}