#include<iostream>
#include<iomanip>
using namespace std;


int one();
int tem();
int change();
int four();
int time();



int main()
{

	cout << "1--------��������������������ǵĺ͡�������Ͳ�ľ���ֵ" << endl;
	cout << "2--------����һ�������¶�F��Ҫ��ת���������¶�C��C=5/9*(F-32)" << endl;
	cout << "3--------�û�����һ����λ��ABC��������Ǵ���˳�������ֵ����Сֵ����ABC��ACB��BAC��BCA��CAB��CBA �е������Сֵ��" << endl;
	cout << "4--------�û�����һ����λ��ABC�������������ܱ���λ��֮�ͣ���A+B+C��������������̣��������������" << endl;
	cout << "5.�û���������ʱ�̣�HH��MM��SS���������ʱ��Ҫ���������ʱ��ͬ����ʽ����" << endl;

	while (1)
	{
		int n;
		cout << "���������������Ŀ" << endl;
		cin >> n;
		if (0 == n)break;
		else
		{
			switch (n)
			{
				case 1:   one();
				case 2:   tem();
				case 3:change();
				case 4:	 four();
				case 5:  time();
				default:cout << "wrong number" << endl;
			}

		}

	}

	return 0;
}


//1. ��������������������ǵĺ͡�������Ͳ�ľ���ֵ

int one()
{
	int x, y;
	cout << "��������������" << endl;
	cin >> x >> y;
	cout << "x+y=" << x + y << endl;
	cout << "x*y=" << x * y << endl;
	int z;
	z = x - y > 0 ? (x - y) : (y - x);
	
	cout << "|x-y|=" << z << endl;

	return 0;
}

//2. ����һ�������¶�F��Ҫ��ת���������¶�C��C=5/9*(F-32)

int tem()
{
	cout << "������һ�������¶�F,���潫ת��Ϊ��ʩ�¶�" << endl;
	double F,C;
	cin >> F;
	C = ((F - 32) * 5) / 9;
	cout << "���¶ȵ������¶�Ϊ" << C << endl;



	return 0;
}


//3. �û�����һ����λ��ABC��������Ǵ���˳�������ֵ����Сֵ����ABC��ACB��BAC��BCA��CAB��CBA �е������Сֵ��

int change()
{
	int a, b, c, d;
	int num;
	while (1)
	{
		
		cout << "������һ����λ��" << endl;
		cout << endl;
		cout << "����0�����˳�" << endl;
		cin >> num;
		if (num < 100 || num>999)
			cout << "wrong number" << endl;
		else if (0 == num)break;
		else
		{
			a = num / 100; b = (num % 100) / 10; c = num % 10;
			if (b < c)
			{
				d = c, c = b, b = d;
			}
			if (a < b)
			{
				d = b, b = a, a = d;
			}
			if (b < c)
			{
				d = c, c = b, b = d;
			}
			

			cout << "the biggest one:" << a * 100 + b * 10 + c << endl;
			cout << "the smallest one:" << c * 100 + b * 10 + a << endl;


		}
	}

	return 0;
}

//4. �û�����һ����λ��ABC�������������ܱ���λ��֮�ͣ���A+B+C��������������̣��������������
int four()
{
	int a, b, c,num;
	cout << "������һ����λ��" << endl;
	cin >> num;
	cout << endl;
	a = num / 100; b = (num % 100) / 10; c = num % 10;        
	if (num % (a + b + c)==0)//�ж��Ƿ�����
		cout << "num/(a+b+c)=" << num / (a + b + c) << endl;
	else 
		cout << "num%(a+b+c)=" << num % (a + b + c) << endl;

	return 0;

}

//5.�û���������ʱ�̣�HH��MM��SS���������ʱ��Ҫ���������ʱ��ͬ����ʽ����

int time()
{

	int h3=0, m3=0, s3=0;
	cout << "�������һ��ʱ��--ʱ/��/��" << endl;
	int h1, m1, s1;
	cin >> h1 >> m1 >> s1;
	if (h1 > 24 || m1 > 59 || s1 > 59)
		cout << "��������ȷ��ʱ��" << endl;

	cout << "������ڶ���ʱ��--ʱ/��/��" << endl;
	int h2, m2, s2;
	cin >> h2 >> m2 >> s2;
	if (h2 > 24 || m2 > 59 || s2 > 59)
		cout << "��������ȷ��ʱ��" << endl;

	if (h1 > h2)
	{
		if (s1 < s2)
		{
			s1 += 60; m1--;
		}
		if (m1 < m2)
		{
			m1 += 60; h1--;
		}

		h3 = h1 - h2;
		m3 = m1 - m2;
		s3 = s1 - s2;

	}
	else if(h1=h2)
	{
		if (m1 > m2)
		{
			if (s1 < s2)
			{
				s1 += 60; m1--; m3 = m1 - m2; s3 = s1 - s2; 
			}
		}
		else if (m1 = m2)
		{
			s3 = s1 - s2;
		}
		else if(m1 < m2)   
		{
			if (s2 <= s1)
			{
				s2 += 60; m2--; s3 = s1 - s2; m3 = m2 - m1;
			}
		}
	}
	/*else if(h2>h1)
	{
		if (s2 < s1)
		{
			s2 += 60; m2--;
		}
		if (m2 < m1)
		{
			m2 += 60; h2--;
		}

		h3 = h2 - h1;
		m3 = m2 - m1;
		s3 = s2 - s1;


	}*/

	cout << h3 << m3 << s3;



	return 0;
}