#include<iostream>
using namespace std;
#include <iomanip>
using std::setw;
int main()
{
	//����һ����ά���飬����������ʽ���

	int A[2][3],i,j;
	cout << "������һ��2��3�е�����" << endl;
	for (i = 0; i < 2; i++)
	
		for (j = 0; j < 3; j++)
			cin >> A[i][j];
	
	 
	for (i = 0; i < 2; i++)

	{
		for (j = 0; j < 3; j++)
			
			cout << setw(3)<<A[i][j] << "";
			cout << endl;

	}r

	system("pause");

	return 0;
}