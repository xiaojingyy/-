#include<iostream>
#include<iomanip>
#include<string>
#include"31_40.h"
using namespace std;

int main()
{
	while (1)
	{	
		cout << "������Ų鿴��Ӧ��Ŀ������0�˳�����" << endl;
		cout << "1--��һ��������һ���ַ�����ͳ�����е�СдӢ����ĸ�ĸ���" << endl;
		cout << "2--��һ��������һ���ַ����������еĴ�дӢ����ĸ��ΪСд�������" << endl;
		cout << "3--��ӡ��������Σ���˹�������Σ�����ӡ10��" << endl;
		cout << "4--��ӡһ���žų˷���" << endl;
		cout << "5--������10000�Σ�ͳ�Ƶõ��������Ĵ���" << endl;
		cout << "6--��д����distance����������(x1, y1)��(x2, y2)֮��ľ���" << endl;
		cout << "7-- дһ�����򣬽���������֣���������10����ί����������ȥ��һ����߷ֺ�һ����ͷ֣������ƽ������Ϊѡ�ֵĵ÷�" << endl;
		cout << "8--дһ��������һ�����е�Ԫ�ط�ת" << endl;
		cout << "9--дһ��������һ���������ҳ����Ԫ�ص�λ��" << endl;
		cout << "10--�ҳ�һ����ά�����еİ��㣬����Ԫ���ڸ���������ڸ�������С" << endl;
		int n; cin >> n;
		if (n == 0)
			break;
		switch (n)
		{
		case 1:	first();	break;
		case 2:	second();	break;
		case 3:	third();	break;
		case 4:	forth();	break;
		case 5:	fifth();	break;
		case 6:	sixth();	break;
		case 7:	seventh();	break;
		case 8:	eighth();	break;
		case 9:	ninth();	break;
		case 10:tenth();	break;
		default:
			cout << "��������ȷ�����" << endl;
			system("pause"); system("cls"); break;
		}
	}
	system("pause");
	return 0;
}
