//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////��ͨʵ��ҳ��
//
////Javaҳ��
///*
//class java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��.." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//	void content()
//	{
//		cout << "java��ѧ����Ƶ" << endl;
//	}
//};
//
////pythonҳ��
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��.." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//	void content()
//	{
//		cout << "python��ѧ����Ƶ" << endl;
//	}
//};
//
////cppҳ��
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��.." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//	void content()
//	{
//		cout << "cpp��ѧ����Ƶ" << endl;
//	}
//};
//*/
//
//
//
////ʹ�ü̳�ʵ��ҳ�湫������
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��.." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//};
//
////ÿ����ҳ�������ʹ�ü̳��ټ�����ҳ���˽�в���
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java��ѧ����Ƶ" << endl;
//	}
//};
//
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python��ѧ����Ƶ" << endl;
//	}
//};
//
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp��ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "java������Ƶҳ�����£�" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	cout << "------------------" << endl;
//	cout << "python������Ƶҳ�����£�" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	cout << "------------------" << endl;
//	cout << "cpp������Ƶҳ�����£�" << endl;
//	cpp cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}