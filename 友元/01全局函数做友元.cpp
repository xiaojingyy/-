//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////��������
//class building
//{
//	//��������goodgayȫ�ֺ�����building�ĺ��ѣ����Է���building�е�˽������
//	friend void goodgay(building* building);
//public:
//	building()
//	{
//		sittingroom = "����";
//		bedroom = "����";
//	}
//public:
//	string sittingroom;
//private:
//	string bedroom;
//};
//
//void goodgay(building* building)
//{
//	cout << "�����ѵ�ȫ�ֺ������ڷ��ʣ�" << building->sittingroom << endl;
//	//����ֱ�ӷ���˽�����ԣ�����ʹ����Ԫ���� 
//	cout << "�����ѵ�ȫ�ֺ������ڷ��ʣ�" << building->bedroom << endl;
//}
//
//void test01()
//{
//	building builds;
//	goodgay(&builds);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}