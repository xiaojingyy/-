//#include <iostream>
//using namespace std;
//class CDate
//{
//	public:
//	void Set(int m, int d, int y)
//	{
//		month = m;
//		day = d;
//		year = y;
//	}
//	int IsLeapYear()
//	{
//		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//	}
//
//	void Print()
//	{
//		cout << month << "/" << day << "/" << year << endl;
//	}
//private:
//	int  month;    int  day;    int  year;
//};
//void main()
//{
//	CDate  a;
//		a.Set(10, 15, 2007);
//	a.Print();
//}



//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	void set_time()
//	{
//		cout << "�밴��ʱ�����˳������ʱ��" << endl;
//		cin >> this->hour;
//		cin >> this->minute;
//		cin >> this->sec;
//	}
//	void show_time()
//	{
//		cout << "�������ʱ����" << endl;
//		cout << this->hour << ":" << this->minute << ":" << this->sec << endl;
//	}
//	int hour;
//	int minute;
//	int sec;
//};
//
//
//int main()
//{
//	Time t1;
//	t1.set_time();
//	t1.show_time();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class cube
//{
//public:
//	void set_data()
//	{
//		cout << "�����볤����ĳ�" << endl;
//		cin >> this->length;
//		cout << "�����볤����Ŀ�" << endl;
//		cin >> this->width;
//		cout << "�����볤����ĸ�" << endl;
//		cin >> this->height;
//	}
//
//	int count_size()
//	{
//		return (this->height * this->length * this->width);
//	}
//	int length;
//	int width;
//	int height;
//};
//
//int main()
//{
//	cube c1;
//	c1.set_data();
//	cout << "�ó���������Ϊ" << c1.count_size() << endl;
//
//	system("pause");
//	return 0;
//}





//�����һ�������࣬������ʵ�����鲿������Ա���ݣ���Ա���ݲ���˽�з���Ȩ�ޣ�ͬʱ�������������ó�Ա����
//�ֱ��������ó�Ա���ݺ������Ա���ݣ����������зֱ���ö���ʽ��ָ�뷽ʽ�����÷�ʽ�����ø���Ĺ��к������ú������Ա���ݡ�


#include<iostream>
using namespace std;

class complex_number
{
public:
	void set_part()
	{
		cout << "������ʵ����" << endl;
		cin >> this->real_part;
		cout << "�������鲿��" << endl;
		cin >> this->imaginary_part;
	}
	
	void show_complex_number()
	{
		cout << "������Ϊ:" << endl;
		if(this->imaginary_part>0)
			cout << this->real_part << "+" << this->imaginary_part << "i" << endl;
		else if(this->imaginary_part < 0)
			cout << this->real_part  << this->imaginary_part << "i" << endl;
		else
			cout << this->real_part  <<endl;

	}
private:
	int real_part;      //ʵ��
	int imaginary_part; //�鲿
};

int main()
{
	complex_number num1;

	//���������зֱ���ö���ʽ��ָ�뷽ʽ�����÷�ʽ�����ø���Ĺ��к������ú������Ա���ݡ�
	num1.set_part();
	num1.show_complex_number();
	

	system("pause");
	return 0;
}