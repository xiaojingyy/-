//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//		cout << "����ִ�й��캯��" << endl;
//	}
//	~Student()
//	{
//		cout << "����ִ����������" << endl;
//	}
//	void input_date()//һ����Ա����
//	{
//		cout << "������ѧ�źͳɼ�" << endl;
//		cout << "ѧ�ţ�" ;
//		cin >> stuID;
//
//	}
//	void show_data()
//	{
//		cout << "����Ӣ��ɼ���";
//		cin >> score_e;
//		cout << "������ѧ�ɼ���";
//		cin >> score_m;
//		score_s = score_e+score_m;
//		score_a = score_s / 2;
//		cout << "===============" << endl;
//		cout << "ѧ��ѧ�ţ�" << this->stuID<<endl;
//		cout << "�ܷ��ǣ�" << score_s << "  ƽ�����ǣ�" << score_a<<endl;
//	}
//
//
//
//
//private:
//	char stuID[8];
//	float score_e, score_m, score_s, score_a;//Ӣ���ѧ���ܷ֣�ƽ����
//};
//
//void test01()//������ֱ���ú������ù��캯������������������Ҫ��Ϊ������������
//{
//	Student  student1;
//	student1.input_date();
//	student1.show_data();
//	cout << endl;
//}
//
//void test02()
//{
//	Student *student2=new Student;  //����student���ָ����󣬲����ù��캯��
//	//��new�ؼ��ַ���һ���student���С��ͬ���ڴ棬��������Ĺ��캯�����������Զ�������������
//	student2->input_date();
//	student2->show_data();
//
//	delete student2;
//	//��Ҫʹ��delete�ؼ��ֽ������ͷţ����ҵ�����������
//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}