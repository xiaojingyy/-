#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//int main()
//{
//	int a = 10, b;
//	int* p1, * p2;
//	p1 = &a; p2 = &b;
//	*p2 = *p1 + 5;
//	cout << a << "," << b << endl;
//	cout << *p1 << "," << *p2 << endl;
//	cout << hex << p1 << "," << p2 << endl;
//	//hex��ת��Ϊ16���Ƶ�
//	cout << &p1 << "," << &p2 << endl;
//
//	system("pause");
//	return 0;
//}


//ȷ�������д�С��
//int main()
//{
//	int a, b;
//	int* p1, * p2, * p;
//	cout << "������������" << endl;
//	cin >> a >> b;
//	p1 = &a; p2 = &b;
//	if (a > b)
//	{
//		p = p1; p1 = p2; p2 = p;
//	}
//	cout << "a=" << a << " b=" << b << endl;
//	cout << "max=" << *p2 << " min=" << *p1 << endl;
//	
//	system("pause");
//	return 0;
//}



////���������������������������ָ���жϣ�
//int main()
//{
//	int a, b;
//	cout << "������������" << endl;
//	cin >> a >> b;
//	int* p1=&a, * p2=&b, temp;
//	cout << "a=" << a << " b=" << b<<endl;
//	if (*p1 > *p2)
//	{
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//	}
//	cout << "max=" << *p2 << " min=" << *p1 << endl;
//	cout << "������" << endl;
//	cout << "a=" << a << " b=" << b << endl;
//
//	system("pause");
//	return 0;
//}



////�����������������ս������
//void exchange(int* p1, int* p2)
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//int main()
//{
//	cout << "��������������" << endl;
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a < b)
//		exchange(&a, &b);
//	if (a < c)
//		exchange(&a, &c);
//	if (b < c)
//		exchange(&b, &c);
//	cout << a <<setw(4)<< b << setw(4) << c << endl;
//	system("pause");
//	return 0;
//}



////ʹ��ָ�������ָ���������������Ԫ��
//int main()
//{
//	int arry[10], * pointer = arry, i;
//	cout << "������10������" << endl;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> *(pointer + i);
//	}
//	cout << "arry[10]:";
//	for (i = 0; i < 10; i++)
//	{
//		cout << setw(3) << *(pointer + i);
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}



////ע��ָ�����������˳��
//
//void main()
//{
//	int a[] = { 2,4,6};
//	int y, * p = &a[1];
//	y = (*--p)++;
//	//��--p,����p=a[0]
//	//��y=*p
//	//Ȼ��(*p)++,����a[0]=2+1=3;
//	cout << y;
//	cout << a[0];
//
//}


////������������Ԫ�ص�ֵ�ԳƱ任
//
//int main()
//{
//	int t, a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* begin, * end;
//	begin = &a[0], end = &a[9];
//	while (begin < end)//��Ϊ������ָ��ָ��ͬһ�����飬���Խ��бȽ�ʱ�������
//	{
//		t = *begin;
//		*begin = *end;
//		*end = t;
//		begin++; end--;
//	}
//	begin = a;//������begin�Ѿ����˺ü����ˣ��������»ص����׼�����
//	while (begin < a + 10)
//		cout << *begin++ <<setw(4);
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}
//


////������������Ԫ�ص�ֵ�ԳƱ任,ʹ�ú�������ָ�봫�ݲ���
//void inv(int x[], int n)
//{
//	int temp, j, m = (n - 1) / 2;
//	for (int i = 0; i <= m; i++)
//	{
//		j = n - 1 - i;//ע��-1���ϸ��
//		temp = x[i];
//		x[i] = x[j];
//		x[j] = temp;
//	}
//}
//
//int main()
//{
//	int i, a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	inv(a, 10);
//	cout << "����˳�������飺" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << ",";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}




//��������������鲢Ϊһ����������

//�ȶ���������������Ĵ�С
#define m 5
#define n 8
void order(int A[],int B[],int C[]) 
{
	int i = 0, j = 0, k = 0;
	while (i < m && j < n)
		if (A[i] < B[j])
			C[k++] = A[i++];
		else
			C[k++] = B[j++];
	//����һ�������Ѿ�ȫ���鲢������һ����������鲢
	while (i < m)
		C[k++] = A[i++];
	while (j < n)
		C[k++] = B[j++];
}

int main()
{
	int A[m] = { -5,3,5,7,134 };
	int B[n] = { -2,-1,0,3,34,34,54,67 };
	int C[m + n];
	order(A, B, C);
	for (int i = 0; i < m + n; i++)
	{
		cout << C[i] << setw(4);
	}
	system("pause");
	return 0;
}

