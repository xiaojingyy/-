//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class person
//{
//
//
//public:
//	//���ó�Ա�������� ���������  p.operator<<(cout) �򻯰���ǣ� p<<cout; �޷��������ǽ�cout����<<��ߵ�����,���Բ���ʹ�ó�Ա�����������������
//	/*void operator<<(ostream cout)
//	{
//	
//	}*/
//
//	int a;
//	int b;
//
//};
//
////ֻ��ʹ��ȫ�ֺ����������������
////��������Ϊ��׼�����
//ostream &operator<<(ostream& cout, person p)   //����  operator <<(cout,p)
//{
//	cout << "m_a=" << p.a << " m_b=" << p.b << endl;
//	return cout;
//}
//
//void test01()
//{
//	person p;
//	p.a = 10;
//	p.b = 10;
//	//out << p   ����һ������������ֵ�Ǳ�׼����������Ժ�����Լ���д
//	cout << p <<endl;
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}