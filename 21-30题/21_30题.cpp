#include<iostream>
#include<iomanip>
#include<string>
#include"21_30.h"
using namespace std;

int main()
{			
	while (1)
	{
		cout << "������Ų鿴��Ӧ��Ŀ������0�˳�����" << endl;
		cout << "1--дһ����������һ�������ĸ�λ���ֵķ����ӡ" << endl;
		cout << "2--дһ����������һ�������ĸ�λ���ֵİ�˳���ӡ����" << endl;
		cout << "3--��һ�������ĸ�λ��֮�͵ĺ���" << endl;
		cout << "4--дһ�������ж�ĳ�����Ƿ��������Լ���1��1000֮�ڵ�����" << endl;
		cout << "5--��ɸ����1��1000֮�ڵ�����" << endl;
		cout << "6--�ж�ĳһ���Ƿ�����ĺ���" << endl;
		cout << "7--дһ�������������������ͱ�����ֵ" << endl;
		cout << "8--�������������Լ��, ŷ������㷨(շת�������" << endl;
		cout << "9--������������С������" << endl;
		cout << "10--��Ǯ��ټ����⣺����һֵǮ�壬��ĸһֵǮ����������ֵǮһ����Ǯ��ټ����ʼ��̡�ĸ���������Σ�" << endl;
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
		default:			break;
		}
	}
	system("pause");
	return 0;
}
