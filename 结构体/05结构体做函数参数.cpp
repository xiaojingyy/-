//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////��ӡ��Ϣ�ĺ���
//
////1:ֵ����
//void printstudent1(struct student s)//�����б�ʾ����һ���ṹ��
//{
//	
//	cout << "�Ӻ���1�� ����: " << s.name << "���䣺 " << s.age << "����: " << s.score << endl;
//}
//
////2:��ַ����
//void printstudent2(struct student* p)
//{
//	p->age = 100;//ͨ����ַ���ݿ��Ըı�ʵ�ε�ֵ
//	cout << "�Ӻ���2�� ������ " << p->name << "����: " << p->age << "������" << p->score << endl;
//}
//
//int main() {
//	//��ѧ������һ�������У���ӡѧ�����ϵ�������Ϣ
//
//	//�����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.age = 19;
//	s.score = 90;
//	printstudent1(s);
//	printstudent2(&s);
//	cout << "main������������ " << s.name
//		<< "���䣺 " << s.age
//		<< "������ " << s.score << endl;
//	
//	
//	system("pause");
//	return 0;
//}