//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////Ϊ�˷����Ķ���operator����ӵ������Ӧ�ú�ʵ���������ƥ��
////���� operator+ operator- operator*
//
//class person
//{
//public:
//	//1����Ա��������+��  ʹ�ùؼ���" operator+ "����������
//	/*
//	person operator+(person& p)
//	{
//		person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//	*/
//
//	int m_a;
//	int m_b;
//};
//
////2��ͨ��ȫ�ֺ�������+��
//person operator+(person& p1, person& p2)
//{
//	person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
////ͨ����������ؿ���ʵ�ֲ�ͬ�����������
//person operator+(person& p1, int num)
//{
//	person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//
//}
//
//void test01()
//{
//	person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//
//	person p2;
//	p2.m_a = 10;
//	p2.m_b = 10;
//
//	//��������operator+ ����ؼ��֣�����Ϳ���ʹ�üӷ���������͵��������,ʹ�����
//	person p3 = p1 + p2;
//
//	//��Ա�������صı��ʵ���
//	//person p3 = p1.operator(p2);
//
//	//ȫ�ֺ������صı��ʵ��� 
//	//person p3 = operator(p1,p2);
//
//	cout << "p3_m_a=" << p3.m_a << "  p3_m_b=" << p3.m_b << endl;
//
//	person p4 = p1 + 100;
//	cout << "p4_m_a=" << p4.m_a << "  p4_m_b=" << p4.m_b << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}