//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////thisָ�����;��
////1�����βκͳ�Ա����ͬ��ʱ��������thisָ��������
////2�����ض�������*this
//
//class person
//{
//public:
//	person(int age)
//	{
//		//˭�������������this��ָ��˭
//		this->age = age;
//	}
//
//	void  addage(person& p)
//	{
//		this->age += p.age;
//		
//	}
//    
//	person& addage_pro(person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	person p1(18);
//	cout << "person��������" << p1.age << endl;
//
//}
//
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	cout << "p2��ֵ��" << p2.age << endl;
//	p2.addage(p1);
//	cout << "p2����һ�ε�ֵ��" << p2.age << endl;
//	p2.addage_pro(p1).addage_pro(p1).addage_pro(p1).addage_pro(p1);
//	cout << "p2����5�ε�ֵ��" << p2.age << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	system("cls");
//	return 0;
//}
//
