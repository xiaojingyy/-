#include"21_30.h"

//��һ��
//�����ַ���ĺ���
int reverse(int a)
{
	int b = 0;
	while (a != 0)
	{
		b *= 10;
		b += (a % 10);
		a /= 10;
	}
	return b;
}
int first()
{
	cout << "������һ������" << endl;
	int n; cin >> n;
	cout << "������������ӡ��" << reverse(n) << endl;
	system("pause");
	system("cls");
	return 0;
}
//�ڶ���
//�����ӡ�ĺ���
void print_gap(int n)
{
	while (n != 0)
	{
		int i;
		i = n % 10;
		cout << i << setw(2) ;
		n /= 10;
	}
}
int second()
{
	cout << "������һ��������������������˳���ӡ" << endl;
	int n; cin >> n;
	//���һ����ֻҪʹ�����ε�һ��ķ�ת�����Ϳ����ˣ��������������ԣ���ֱ�Ӵ�ӡ�������ûʲô����
	cout << "���������˳���ӡ��" << reverse(reverse(n));
	//���÷��������ڷ���ʱ����setw�Ϳ���
	cout << "��������ռ��˳���ӡ��"; print_gap(reverse(n));
	system("pause");
	system("cls");
	return 0;
}
//������
//��λ����ӵĺ���
int addnumbers(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int third()
{
	cout << "������һ������" << endl;
	int n; cin >> n;
	cout << "���������λ��֮����" << addnumbers(n) << endl;
	system("pause");
	system("cls");
	return 0;
}
//������
//�ж��Ƿ�����
bool prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int forth()
{
	cout << "������һ������" << endl;
	int n; cin >> n;
	if (prime(n))
		cout << "��������" << endl;
	else if (n == 1)
	{
		cout << "��ѧ�涨1��������" << endl;
	}
	else 
		cout << "�ⲻ������" << endl;
	cout << "1000������������" << endl;
	int endline = 0;
	for (int i = 2; i < 1000; i++)
	{	
		if (prime(i))
		{
			endline++;
			cout << i << setw(4);
			if (endline % 10 == 0)
				cout << endl;
		}
	}
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}
//������
//����һ�����鴢��1-1000��Щ����
//��һ�������������飬��һ���������ϱ��������ֵ������ѭ���ж��������������͵���0
void hanshu(int arry[1001])
{
	for (int i = 2; i < 1001; i++)//��������
	{
		//��2��ʼ
		for (int j = i+1; j < 1001; j++)//�ӵ�ǰ���ֿ�ʼ�ٴα������飬���±��ң��ҵ�֮�󽫸����ݹ���
		{
			if (j % i == 0)
			{
				arry[j] = 0;
			}
		}
	}
	int newline = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (arry[i] != 0)
		{
			newline++;
			cout << arry[i] << setw(4);
			if (newline % 10 == 0)
			cout << endl;
		}
	}
}

//�Ľ��棺�ҵ�һ����֮��ֱ�������ı����������ı�����Ϊ0
void hanshu_pro(int arry[1001])
{
	for (int i = 2; i < 1001; i++)
	{
		int j = 2 * i;//��ʱ��j�Ǵ���i�ĵ�һ������
		while (j < 1001)
		{
			arry[j] = 0;
			j += i;//���ϵ��ҵ�i�ı���
		}
	}
	int newline = 0;
	for (int i = 2; i < 1001; i++)
	{
		if (arry[i] != 0)
		{
			newline++;
			cout << arry[i] << setw(4);
			if (newline % 10 == 0)
				cout << endl;
		}
	}
}
int fifth()
{
	int arry[1001];
	for (int i = 1; i < 1001; i++)
	{
		arry[i] = i;
	}
	arry[0] = 0;arry[1] = 0;
	hanshu(arry);
	cout << endl;
	cout << "������pro���ӡ��" << endl;
	hanshu_pro(arry);
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}
//������  
//���꣺���Ա�4��400���������ǲ��ܱ�100����
int sixth()
{

	system("pause");
	system("cls");
	return 0;
}
int seventh()
{

	system("pause");
	system("cls");
	return 0;
}
int eighth()
{

	system("pause");
	system("cls");
	return 0;
}
int ninth()
{

	system("pause");
	system("cls");
	return 0;
}
int tenth()
{

	system("pause");
	system("cls");
	return 0;
}
