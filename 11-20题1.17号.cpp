#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
#define num 6  //��14����������ֵĸ���
#include"11_20.h"

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
		case 12:twelveti(); break;
		case 13:thirteen(); break;
		case 14:forteen();	break;
		case 15:fifteen();	break;
		case 16:sixteen();	break;
		case 17:seventeen();break;
		case 18:eighteen();	break;
		case 19:nineteen();	break;
		case 20:twenty();	break;
		default:	break;
		}
	}
	system("pause");
	return 0;
}
