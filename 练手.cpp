#include<iostream>
#include<string.h>
using namespace std;
//��ʮ������ת��Ϊʮ���ڵĽ�����

//int flag = 0;
//int apply()
//{
//	int change(int num,int n);
//	int num, n;
//	cout << "��������Ҫת������num��" << endl;
//	cin >> num;
//	cout << "����Ҫת��Ϊ�����ƣ�" << endl;
//	cin >> n;
//	change(num, n);
//	
//	return 0;
//
//}
//
//int change(int num, int n)
//{
//	//�ú�����˼·���ǲ��϶�numȡ����ȡģ
//	
//	if (num == 0)
//	{
//		if(flag==0)
//		cout << flag << endl;
//		return 0;
//	}
//	else
//	{
//		flag = 1;
//		change(num / n, n);
//		int remaind = num % 2;
//		cout <<remaind;
//
//	}
//	
//	return 0;
//
//}

//���õݹ���ã�ʵ��f(x)=X��n�η���ֵ��x��n��ֵ�ڵ���ʱ���� ��ע�⴦��nΪ�������

int multi = 1;
double jisuan(int x,int n)
{
	if (n == 1)
		return x;

	return 
		x*jisuan(x, n - 1);

}
int cifang()
{
	int x=1,n;
	while (x!=0)
	{

		cout << "����Ҫ�󼸵ļ��η���" << endl;
		cout << "���������������ָ��" << endl;
		
		cin >> x >> n;
		while (x == 0)
		{
			cout << "��������Ϊ0������������,���������������ָ��" << endl;
		
			cin >> x >> n;
		}
		double result = 0;
		if (n > 0)
			result = jisuan(x, n);
		else if (n < 0)
			result = jisuan(x, -n);

		cout << x << "��" << n << "�η�Ϊ" << result<<endl;


	}

	return 0;

}





int main()
{
	
	return 0;
}