#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int max();
int grade();
int equation();
int triangle();
int numbers();
int sixti();
int seventi();
int sum();
int prise();
int multi();



int main()
{
	
	while (1) {
		cout << "1:�����������������ֵ" << endl;
		cout << "2:�󷽳�ax2+bx+c=0�ĸ�" << endl;
		cout << "3:����һ���ɼ�����ӡ��Ӧ�ĵǼ�" << endl;
		cout << "4������3��double���͵�ֵ���ж��Ƿ�����������ε�����" << endl;
		cout << "5������20���������������С��ƽ��ֵ" << endl;
		cout << "6. �������ɸ�����������ĵ�һ����Ϊ����Ҫ��������ĸ�������ƽ��ֵ�����ֵ" << endl;
		cout << "7. �������ɸ���������-999��ʾ��������ƽ��ֵ�����ֵ" << endl;
		cout << "8. ��� s=1X1 + 2X2 + 3X3 +...+ 100X100" << endl;
		cout << "9. ӡ�ȹ����Ľ�������� 2��0�η��ӵ�2��63�η�" << endl;
		cout << "10. ��� s=1! + 2! + 3! +...+ 10!" <<endl;
		cout << "����0�˳�����" << endl;
		int n;
		cin >> n;
		if (0==n)break;
		
		switch (n) {
		case 1:max(); break;
		case 2:equation(); break;
		case 3:grade(); break;
		case 4:triangle(); break;
		case 5:numbers(); break;
		case 6:sixti(); break;
		case 7:seventi(); break;
		case 8:sum(); break;
		case 9:prise(); break;
		case 10:multi(); break;
		default:cout << "wrong number" << endl;
		}
	}
	system("pause");
	return 0;
}

//1:�����������������ֵ
int max()
{
	cout << "please enter three numbers " << endl;
	int a=0, b=0, c=0;
	cin >> a >> b >> c;
	if (a >= b) {
		if (c >= a) {
			cout << "the max number is " << c << endl;
		}
		if (c < a) {
			cout << "the max number is" << a << endl;
		}
	}
	if (a < b) {
		if (c >= b) {
			cout << "the max number is " << c << endl;
		}
		if (c < b) {
			cout << "the max number is " << b << endl;
		}
	}
	cout << endl;
	return 0;
}

//2:�󷽳�ax2+bx+c=0�ĸ�
//˼·��1:�����޽�������2����a=0�������3����d=0��d>0�������ע����sqrt(),����
int equation() {
	cout << "������a,b,c��ֵ" << endl;
	double a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	double d = b * b - 4 * a * c;
	double x = 0;

	if (d < 0) {
		cout << "��������޽�" << endl;
	}
	if (a == 0 && b == 0) {
		cout << "��������޽�" << endl;
	}

	if (a == 0) {
		x = -(c / b);
		cout << "���̵Ľ���x=" << x << endl;
	}

	if (d == 0) {
		x = -b /(2 * a);
		cout << "���̵Ľ���x=" << x << endl;
	}
	if (d > 0) {
		double x1, x2;
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "���̵Ľ���x1="<< x1 << endl;
		cout << "x2=" << x2 << endl;

	}
	return 0;

}


//3:����һ���ɼ�����ӡ��Ӧ�ȼ�
int grade()
{
	cout << "please enter the grade" << endl;
	int grade = 0;
	cin >> grade;
	if (grade >= 90)cout << "�ȼ�ΪA" << endl;
	else if (grade >= 75)cout << "�ȼ�ΪB" << endl;
	else if (grade >= 60)cout << "�ȼ�ΪC" << endl;
	else if (grade < 60)cout << "�ȼ�ΪD" << endl;
	return 0;
}

//4:��������double����ֵ���ж��Ƿ������������
int triangle() {
	cout << "����������double���͵�ֵ" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "�������һ��������" << endl;
	}
	else{
		cout << "�������һ��������" << endl;
	}
	return 0;
}

//5:����20�������������С��ƽ��ֵ
int numbers(){
	int num[20];
	cout << "������20����" << endl;
	for (int i = 0; i < 20; i++) {
		cin >> num[i];
	}
	int max = num[0], min=num[0],sum=0;
	double aver = 0;
	//�����С�ĳ�ֵ���θ�һ����
	for (int i = 0; i < 20; i++) {
		if (num[i] >= max) {
			max = num[i];
		}
	}
	for (int i = 0; i < 20; i++) {
		if (num[i] < min) {
			min = num[i];
		}
		sum = sum + num[i];
	}
	aver = sum / 20;
	cout << "��20���������ֵ��" << max << endl;
	cout << "��20��������Сֵ��" << min << endl;
	cout << "��20������ƽ��ֵ��" << aver << endl;
	return 0;
}


//6. �������ɸ�����������ĵ�һ����Ϊ����Ҫ��������ĸ�������ƽ��ֵ�����ֵ
int sixti(){
	cout << "��������������Ҫ��������ֵĸ���" << endl;
	double n, a, max=0, aver,sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > max)max = a;
		sum += a;
	}
	aver = sum / n;
	cout << "�������" << max << endl;
	cout << "ƽ��ֵ��" << aver << endl;
	return 0;
}

//7:�����ɸ���������-999��ʾ��������ƽ��ֵ�����ֵ
int seventi() {
	cout << "���������ɸ���������-999��ʾ����" << endl;
	double a,sum=0,num=0,max=0,aver = 0;
	cin >> a;
	max = a;
	sum += a;
	num ++;
	while (a!=-999)
	{	
		//cin>>a;��һ��һ��Ҫ�������д��
		//������ڵ�һ�еĻ���������-999��ʱ���ִ��һ��ѭ��������ƽ��ֵ���������Ϊ������-999��
		if (a > max)max = a;
		sum += a;
		num++;
		cin >> a;
	}
	aver = sum / num;
	cout << "���ֵ��" << max << endl;
	cout << "ƽ��ֵ��" << aver << endl;
	return 0;
}

//8:��� s=1X1 + 2X2 + 3X3 +...+ 100X100"

int sum() {
	int sum = 0;
	cout << "��� s=1X1 + 2X2 + 3X3 +...+ 100X100" << endl;
	for (int i = 1; i < 101; i++)
	{
		sum += (i * i);
	}
	cout << "1X1 + 2X2 + 3X3 +...+ 100X100��ֵ��" << sum << endl;
	return 0;
}

//9. ӡ�ȹ����Ľ�������� 2��0�η��ӵ�2��63�η�

int prise() {
	double sum = 1,temp=1;
	for (int i = 1; i <= 63; i++)
	{
		temp = temp * 2;
		sum += temp;
	}
	cout << "2��0�η��ӵ�2��63�η��Ľ����" <<sum<< endl;

	return 0;
}

//10. ��� s=1! + 2! + 3! +...+ 10!

int multi() {
	int temp = 1,sum=0;
	for (int i = 1; i <= 10; i++)
	{
		temp = temp * i;
		sum += temp;
	}
	cout << "1! + 2! + 3! +...+ 10!�ĺ���" << sum << endl;
	return 0;
}