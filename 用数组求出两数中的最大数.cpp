#include<iostream>
using namespace std;
#include<iomanip>
//��if����������
//void zuidashu(int a=0, int b=0)
//{
//	cout << "��������������" << endl;
//	cin >> a >> b;
//	if (a > b)
//	{
//		cout << "�ϴ�����" << a << endl;
//		cout << "��С����" << b << endl;
//	}
//	else if(a==b)
//	{
//		cout << "������һ����" << endl;
//	}
//	else if(a<b)
//	{
//		cout << "�ϴ�����" << b << endl;
//		cout << "��С����" << a << endl;
//	}
//}
//int main()
//{
//	int a=0, b=0;
//	zuidashu(a,b);
//
//	return 0;
//}

//������if����������

//���������鷨�������
void m(int B[2],int a,int b)

{
	B[0] = (a < b) ? a : b;//�����Сֵ
	B[1] = (a > b) ? a : b;//����ϴ�ֵ

}
int main()
{
	int A[2],a, b;
	cout << "��������������" << endl;
	cin >> a >> b;
	m(A, a, b);//ֱ�����������ִ��������
	cout << "�ϴ�ֵ��" << A[1] << setw(10) << "��Сֵ��" << A[0] << endl;

	system("pause");
	return 0;
}