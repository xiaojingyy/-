//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////��ֵ���������
//
//class person
//{
//public:
//	person(int age)
//	{
//		m_age= new int(age);
//	}
//
//	//~person()
//	//{
//	//	//�ͷŶ����ڴ�   ����ᱨ��  
//	//	//��Ϊ�����������������ж�����һ���ģ�ָ����ڴ�Ҳ��һ��������ͬһ���ڴ汻�ͷ������Σ����³��򱨴�		
//	//	if (m_age != NULL)
//	//	{
//	//		delete m_age;
//	//		m_age = NULL;
//	//	}
//	//	//�����������������ǳ�������������⣬�ڶ������¿���һ���ڴ�ռ䣨���Ծ��в�һ���ĵ�ַ�ˣ�������һ��������
//	//}
//
//	person& operator=(person& p)
//	{
//		//���������ṩǳ����
//		//m_age = p.m_age;
//	
//		//Ӧ�����ж��Ƿ��������ڶ���������У�Ӧ�����ͷŸɾ�
//
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age= new int(*p.m_age);
//
//		//һ��Ҫע�ⷵ��ֵ����,Ҫ����������  ����������д������ʽ
//		return *this;
//	}
//
//
//	//��ָ�봢�����䣬���ڴ濪�ٵ�����
//	int *m_age;
//};
//
//void test01()
//{
//	person p1(18);
//
//	person p2(20);
//	cout << "p2������Ϊ��" << *p2.m_age << endl;
//	person p3( 2);
//	cout << "p3������Ϊ��" << *p3.m_age << endl;
//
//	p3=p2 = p1;//��ֵ
//	cout << "��ֵ��" << endl;
//	cout << "p1������Ϊ��" << *p1.m_age << endl;
//	cout << "p2������Ϊ��" << *p2.m_age << endl;
//	cout << "p3������Ϊ��" << *p3.m_age << endl;
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