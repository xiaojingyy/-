#include"11_20.h"
//�����Զ���ļ��㷽��
//int eleventi() {
//	double sum = 1, temp = 1;
//	cout << "��������Ҫ��������һλ���ķ�ĸ" << endl;
//	int n;cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j >= 1; j--)
//		{
//			temp *= j;
//		}
//		sum += (1 / temp);
//	}
//	cout << "e=1 + 1/1! + 1/2! + 1/3! +...+ 1/" << n << "!" << "�Ľ����" << sum << endl;
//	system("pause");
//	system("cls");
//	return 0;
//}

int eleventi()
{
	int i = 1; double t = 1, sum = 0;
	while (t > 1e-7)
	{
		t = t / i;
		i += 1;
		sum += t;
	}
	cout << "e=1 + 1/1! + 1/2! + 1/3! + ...�Ľ����" << sum << endl;
	system("pause");
	system("cls");
	return 0;
}

int twelveti()
{
	/*int i = 1, j = 0 ; double sum = 0,t = 1;
	while (t > 1e-7)
	{
		t = t / i;
		i += 2;
		j += 1;
		if (j % 2 == 1)
		{
			sum += t;
		}
		else if(j%2==0)
			sum -= t;
	}*/

	double i = 1;
	int j = 1;
	double PI, t;
	PI = 1.00;
	t = 1.00;
	while (t > 1e-7)
	{
		i += 2;
		t = 1 / i;
		if (j % 2 == 1)//pi�Ѿ�Ϊ1��,���Դӵڶ��ʼ
			PI -= t;
		else
			PI += t;
		j += 1;
	}
	cout << "PI��ֵΪ" << 4 * PI;

	system("pause");
	system("cls");
	return 0;
}

int thirteen()
{
	int i = 1; double t = 1, sum = 1, j = 1;
	while (t > 1e-7)
	{
		i += 2;
		t = t * j / i;
		sum += t;
		j += 1;//һ��tips��һ��������j��ȥ�������㣬һ��������t����������֮��
	}
	cout << "PI��ֵΪ" << sum * 2 << endl;
	system("pause");
	system("cls");
	return 0;
}

int forteen()
{
	cout << "������6����" << endl;
	cout << "��������ͳ�����е�����������ĸ���" << endl;
	int arry[num];
	for (int i = 0; i < num; i++)
		cin >> arry[i];
	
	int m = 0, n = 0, zero = 0;
	for (int i = 0; i < num; i++)
	{
		if (arry[i] > 0)
		{
			m += 1;
		}
		else if (arry[i] < 0)
		{
			n += 1;
		}
		else if (arry[i] == 0)
		{
			zero += 1;
		}
	}
	cout << "�����ĸ����ǣ�" << m << endl;
	cout << "�����ĸ����ǣ�" << n << endl;
	cout << "��ĸ����ǣ�" << zero << endl;


	system("pause");
	system("cls");
	return 0;
}

int fifteen()
{
	cout << "���������ɸ����������ֱ�ͳ��������ż��֮�ͣ�����0��ʾ����" << endl;
	int odd_num = 0, even_num = 0;//odd_num��������even_num��ż��
	while (1)
	{
		int a;
		cin >> a;
		if (a % 2 == 1)
		{
			odd_num += a;
		}
		//����Ҫע��ż����0��˳��Ҫô��0��ǰ����ֹ�����ൽż����Ҫôż����ǰ��Ҫ���ϡ��ҡ����
		else if (a == 0)
			break;
		else if (a % 2 == 0)
		{
			even_num += a;
		}

	}
	cout << "����֮���ǣ�" << odd_num << endl;
	cout << "ż��֮���ǣ�" << even_num << endl;
	system("pause");
	system("cls");
	return 0;
}

int sixteen()
{
	cout << "����������x��y�η�" << endl;
	cout << "������x" << endl; int x; cin >> x;
	cout << "������y" << endl; int y; cin >> y;
	int multi = 1;
	for (int i = 0; i < y; i++)
	{
		multi *= x;
	}
	cout << "x��y�η�=" << multi << endl;

	system("pause");
	system("cls");
	return 0;
}

int seventeen()
{
	int a, b, c;//���ո�ʮ�ٵ�˳��
	for (int i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = i % 100 / 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i)
			cout << i << endl;
	}
	system("pause");
	system("cls");
	return 0;
}
//18��
bool perfect_number(int a)
{
	int sum = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			sum += i;
		}

	}
	if (sum == a)
		return true;
	return false;
}
int eighteen()
{
	for (int i = 1; i < 1001; i++)
	{
		if (perfect_number(i))
			cout << "1000���ڵ���ȫ���У�" << i << endl;
	}
	system("pause");
	system("cls");
	return 0;
}
//19��
int fibo(int a)
{
	if (a == 1)return 1;
	else if (a == 2)return 1;
	else return fibo(a - 1) + fibo(a - 2);
}

int nineteen()
{
	int a = 1, b = 1;//���е�ǰ����
	cout << "������쳲��������еĵڼ��" << endl;
	int f; cin >> f;
	fibo(f);
	cout << "���еĵ�" << f << "���ǣ�" << fibo(f) << endl;
	system("pause");
	system("cls");
	return 0;
}
//20��
int twenty()
{
	cout << "������һ������" << endl;
	int number; cin >> number;
	int a;
	while (number > 0)
	{
		a = number % 10;
		cout << a;
		number /= 10;
	}
	system("pause");
	system("cls");
	return 0;
}