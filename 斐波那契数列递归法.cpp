#include<iostream>
#include<iomanip>
using namespace std;
#define n 20

void apply()//��ӡ���е�ǰ20��
{
	int x = 0;
	while (x <= 0)
	{
		cout << "����Ҫ�鿴�ڼ����ֵ��" << endl;
		cin >> x;
		if (x < 0)
			cout << "������һ������0��ֵ" << endl;
	}
	int fibonaqi(int x = 5);
	int fibo();
	fibonaqi(n);
	fibo();
	

}

int fibonaqi(int num)//ʹ�õݹ�ó�ĳһ���ֵ
{
	int result;
	
	

	if (num == 1 || num == 2)
	{
		result = 1;
	}
	else
	{
		result = fibonaqi(num - 1) + fibonaqi(num - 2);
	}
	
	return result;//����ʹ�÷���ֵ�Ϳ��ԣ���Ҫcout

}

int fibo()
{
	int f[n] = { 1,1 };
	for (int i = 2; i < 20; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}

	for (int i = 0; i < 20; i++)
	{
		if (i % 5 == 0)  cout << endl;//һ������������������

		cout << setw(10) << f[i];
	}
	return 0;
}

int main()
{
	
	
	cout << "쳲��������е�ǰ20������" << endl;
	apply();

	

	system("pause");
	return 0;
}