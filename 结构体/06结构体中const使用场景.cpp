//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////constʹ�ó���
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////ʹ��ֵ�����൱�ڽ�ԭ������Ϣ����һ�ݣ����������ܴ�ʱ��Ч�ʾͻ��
//void printstudent1(struct student s)
//{
//
//	cout << "�Ӻ���1�� ����: " << s.name 
//		 << "���䣺 " << s.age 
//		<< "����: " << s.score << endl;
//}
////����ʹ��ָ�봫����Ϣ�Ϳ���ֻռ�ĸ��ֽڣ����Լ����ڴ�ռ䣬���Ҳ��ḳֵ�µĸ���
////ʹ�õ�ַ���ݵ��������൱�ڰѵ���ֱ�Ӹ������ã����ݿ��ܻᱻ�޸ģ����Ծ��õ�const
//void printstudent2(const struct student* s)
//{
//	
//	s->age = 90;//���β��м���const�ͻᵼ����һ��������ֹ�����
//	cout << "�Ӻ���1�� ����: " << s->name
//		<< "���䣺 " << s->age
//		<< "����: " << s->score << endl;
//}
//
//int main() {
//	struct student s={"��ΰ",19,89};
//
//	//ͨ��������ӡ�ṹ�������Ϣ
//	printstudent1(s);
//	
//
//
//	system("pause");
//	return 0;
//}