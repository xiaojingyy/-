#include<iostream>
#include<iomanip>
#define n 7
using namespace std;
int main()
{
	int A[n], i, j;//���飬��ѭ����������ѭ������
	int t = 0;//��ʱ������ֵ��һ������

	cout << "�������������Ϊn��һά����" << endl;
	for (i = 1; i <n; i++)   cin >> A[i];//��������

	for (int i = 2; i <n; i++)
	{
			A[0] = A[i];   //�Ƚ�ÿһ�ε���С����Ҳ������ǰ���Ǹ���������
			int j = i - 1; //j��A[i]��ߵ������±�
			
			
			while (A[0]<A[j])
				{
					A[j + 1] = A[j]; 
					j = j - 1;
				}

			A[j + 1] = A[0];


	}


	for (i = 1; i <n; i++)
		cout << A[i] << setw(3) << "";


	system("pause");
	return 0;
}