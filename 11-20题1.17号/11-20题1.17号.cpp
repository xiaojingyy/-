#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int eleventi();






int main() {
	while (1) {
		cout << "������Ų鿴��Ӧ��Ŀ������0��ʾ�˳�" << endl;
		cout << "11. �� e=1 + 1/1! + 1/2! + 1/3! + ..." << endl;
		cout << "12. ��PIֵ��PI/4 = 1 - 1/3 + 1/5 - 1/7 + ..." << endl;
		cout << "13. ��PIֵ��PI/2 = 1 + 1/3 + 1/3*2/5 + 1/3*2/5*3/7 + ..." << endl;
		cout << "14. ����20������ͳ��������������������ĸ�����" << endl;
		cout << "15. �������ɸ��������������е�����֮����ż��֮�ͣ���������0��ʾ����" << endl;
		cout << "16. дһ����������x��y�η�������x��y��Ϊ��������" << endl;
		cout << "17. ��ˮ�ɻ�����һ����λ�������λ���������͵��ڸ����ֱ���" << endl;
		cout << "18. ��дһ��������ȷ��һ�������Ƿ�Ϊ��ȫ����һ������������������֮��)�����������ȷ���ʹ�ӡ1��1000֮���������ȫ��" << endl;
		cout << "19. дһ��������쳲��������еĵ�n��" << endl;
		cout << "20. дһ��������ȡһ������ֵ�����ؽ��������ĸ����ַ������ֵ" << endl;
		int n; cin >> n;
		if (n == 0)break;
		switch (n)
		{
		case 11:eleventi(); break;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		default:
			break;
		}
	}
	system("pause");
	return 0;
}

int eleventi() {
	double sum = 1, temp = 1;
	cout << "��������Ҫ��������һλ���ķ�ĸ" << endl;
	int n;cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			temp *= j;
		}
		sum += (1 / temp);
	}
	cout << "e=1 + 1/1! + 1/2! + 1/3! + 1/" << n << "!" << "�Ľ����" << sum << endl;

	return 0;
}

int twelveti()
{


	return 0;
}
