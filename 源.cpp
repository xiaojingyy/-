#include<stdio.h>
#include<iostream>
#include<String.h>
using namespace std;
int cnt = 0;
int flag = 1;
char a[255];


//�ݹ� 

void Convert(int i,int b)
{
	if(i==0)//�ݹ����
	{
		return;
	}
	a[cnt++]=i%b;
	Convert(i/b,b);
}

//
////�ǵݹ� 
//void Convert(int i, int b)
//{
//	while (i)
//	{
//		a[cnt++] = i % b;
//		i = i / b;
//	}
//}


int Print(int& num)
{
	for (int i = cnt - 1; i > -1; i--)
	{
		if (a[i] < 10)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%c", a[i] + 'A' - 10);
		}
	}
	printf("\n");
	printf("������?(1(Y)/0(N)");
	num = 0;
	scanf_s("%d", &flag);
	return flag;
}

int main()
{
	while (flag)
	{
		int integer, base;
		printf("����һ������0��������������");
		scanf_s("%d", &integer);
		printf("����������Ļ���:(2~16)");
		scanf_s("%d", &base);
		if (base > 16 || base < 2)
		{
			printf("�������!������2~16���ڵĽ���������:");
			scanf_s("%d", &base);
		}
		Convert(integer, base);
		flag = Print(cnt);
	}
	return 0;
}

