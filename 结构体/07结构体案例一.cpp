//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
////һ����ʦ��������ѧ������ҵ��ƣ���ѧ����������ʽ��������ʦ�Ľṹ����
//
////ѧ���Ľṹ�嶨��
//struct student
//{
//	string sname;
//	int score=60;
//};
////��ʦ�Ľṹ�嶨��
//struct teacher
//{
//	string tname;
//	struct student sarray[5];
//};
//
////����ʦ��ѧ����ֵ�ĺ���
//void allocatespace(struct teacher tarray[], int length)
//{
//	string nameseed = "ABCDE";//��ǰ׼������
//	for (int i = 0; i < length; i++)
//	{
//		tarray[i].tname = "teacher_";
//		tarray[i].tname += nameseed[i];//��teacher_����׷������
//		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			tarray[i].sarray[j].sname = "student_";
//			tarray[i].sarray[j].sname += nameseed[j];
//			int random = rand() % 61 + 40;//��ʾ0~60���40=0~100;
//			//����ط���û�з���������ӣ����Է�������仯
//			tarray[i].sarray[j].score =random;
//		}
//	}
//}
//
////��ӡ������Ϣ
//void printall(struct teacher tarray[], int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << "��ʦ������" << tarray[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ�������� " << tarray[i].sarray[j].sname 
//				 << "������ " << tarray[i].sarray[j].score << endl;
//			
//		}
//	}
//}
//
//
//int main() {
//	//�������������
//	srand((unsigned int)time(NULL));
//
//	//1:����������ʦ������
//	teacher tarray[3];
//	//2:ͨ��������������ʦ����Ϣ��ֵ��������ʦ������ѧ����ֵ
//	int length = sizeof(tarray) / sizeof(tarray[0]);
//	allocatespace(tarray, length);
//	//3:��ӡ������ʦ������ѧ������Ϣ
//	
//	printall(tarray, length);
//
//	system("pause");
//	return 0;
//}