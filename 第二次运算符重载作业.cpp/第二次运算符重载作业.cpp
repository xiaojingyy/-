////#include <iostream>
////using namespace std;
////class CComplex
////{
////public:
////	friend CComplex operator + (CComplex& obj1, CComplex& obj2);
////
////	CComplex()
////	{
////		real = 0.0;
////		imag = 0.0;
////	}
////	CComplex(float x, float y)
////	{
////		real = x;
////		imag = y;
////	}
////	//��Ϊ��Ա����������Ĳ���̫��
////	/*CComplex operator + (CComplex& obj1, CComplex& obj2)
////	{
////		CComplex obj3(obj1.real + obj2.real, obj1.imag + obj2.imag);
////		return obj3;
////	}*/
////	CComplex& operator++()//ǰ�õ����ݼ��������ô������
////	{
////
////		real += 1;
////		imag += 1;
////		return *this;
////	}
////	CComplex& operator--()//ǰ�õ����ݼ��������ô������
////	{
////		real -= 1;
////		imag -= 1;
////		return *this;
////	}
////	void print()
////	{
////		cout << real << "+" << imag << "i" << endl;
////	}
////private:
////	float real;
////	float imag;
////};
////
////
////CComplex operator + (CComplex& obj1, CComplex& obj2)//�����޸ĵ�
////{
////	CComplex obj3(obj1.real + obj2.real, obj1.imag + obj2.imag);
////	return obj3;
////}
////
////void main()
////{
////	CComplex obj1(2.1, 3.2);
////	CComplex obj2(3.6, 2.5);
////	cout << "obj1=";
////	obj1.print();
////	cout << "obj2=";
////	obj2.print();
////	CComplex obj3 = obj1 + obj2;
////	cout << "befor++, obj3=";
////	obj3.print();
////	++obj3;
////	cout << "after++, obj3=";
////	obj3.print();
////	--obj3;
////	cout << "after--, obj3=";
////	obj3.print();
////	CComplex obj4 = ++obj3;
////	cout << "obj4=";
////	obj4.print();
////}
//
//
//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//class matrix//����
//{
//public:
//
//	matrix();
//	int m[2][3];
//};
//
//matrix::matrix()//���ù��캯����ʼ������
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			m[i][j] = 0;
//		}
//	}
//}
//
//
////�������������
//istream& operator>>(istream& input, matrix& a)//һ��Ҫ�ǵ����õ���
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> a.m[i][j];
//		}
//	}
//	return input;
//}
////������������
//ostream& operator<<(ostream& output, matrix& a)//һ��Ҫ�ǵ����õ���
//{
//	int n = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		n += 1;
//		if (n % 2 == 0)
//				cout << endl;
//		for (int j = 0; j < 3; j++)
//		{
//			cout <<setw(3) << a.m[i][j];
//		}
//	}
//	return output;
//}
//
//matrix operator+(matrix a, matrix b)
//{
//	matrix d;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			d.m[i][j] = a.m[i][j] + b.m[i][j];
//		}
//	}
//	return d;
//}
//
//
//
//void test01()
//{
//	matrix a, b, d;
//	cout << "�����������������еľ���" << endl;
//	cin >> a >> b;
//	cout << "�µľ���Ϊ��" << endl;
//	d = a + b;
//	cout << d << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class Student
//{
//	friend class Teacher;//������Ԫ�Է���˽�г�Ա����
//private:
//	int num;
//	string name;
//	string sex;
//	int grade;//����һ�������ݳ�Ա��һ��ѧ���ɼ�
//
//public:
//	Student(int num,string name,string sex,int grade)
//	{
//		this->num = num;
//		this->name = name;
//		this->sex = sex;
//		this->grade = grade;
//	}
//	void print()
//	{
//		cout << "  ѧ����Ϣ��" << endl;
//		cout << "������" << this->name << endl;
//		cout << "��ţ�" << this->num << endl;
//		cout << "�Ա�" << this->sex << endl;
//		cout << "�ɼ���" << this->grade << endl;
//	}
//
//};
//
//
//class Teacher 
//{
//
//private:
//	int num;
//	string name;
//	string sex;
//	string job;//����һ�������ݳ�Ա��һ����ʦְλ
//
//	//��ʼ��
//public:
//	Teacher(Student& s)
//	{
//		this->num = s.num;
//		this->name = s.name;
//		this->sex = s.sex;
//	}
//	void teacher_job()
//	{
//		cout << "��������ʦ��ְ��" << endl;
//		cin >> this->job;
//	}
//	void print()
//	{
//		cout << "  ��ʦ��Ϣ��" << endl;
//		cout << "������" << this->name << endl;
//		cout << "��ţ�" << this->num << endl;
//		cout << "�Ա�" << this->sex << endl;
//		cout << "ְλ��" << this->job << endl;
//	}
//
//};
//
//
//
//void test01()
//{
//	Student s(22, "����", "��", 90);
//	Teacher t = Teacher(s);
//	t.teacher_job();
//	s.print();
//	t.print();
//
//


//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//


#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;

class point
{
public:
	friend ostream& operator<<(ostream& cout, point p);
	point(double x0 = 0, double y0 = 0) { x = x0; y = y0; }
	point operator+(point p1);
	double operator^(point p1);
	//void display();
	
	
private:
	double x, y;

};

point  point::operator+(point p1)
{
	point p;
	p.x = this->x + p1.x;
	p.y = this->y + p1.y;
	return p;
}

double point::operator^(point p1)
{
	return sqrt((this->x - p1.x) * (this->x - p1.x) + (this->y - p1.y) * (this->y - p1.y));
}

ostream& operator<<(ostream& cout, point p)
{
	cout << "(" << p.x << "," << p.y << ")";
	return cout;

}

void test01()
{
	point p1(1.2, -3.5);
	point p2(-1.5, 6);
	point p3 = p1 + p2;
	point p4 = p1 ^ p2;

	cout << p3<<endl;
	cout << p1.operator^(p2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}