//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//public:
//	person()
//	{
//		m_num = 0;
//	}
//
//	//����ǰ��++�����
//	//�м� ����ǰ�������Ҫ��������  ����������������������һ����ͬһ�����ݽ�������
//	person& operator++()
//	{
//		//����++����
//		m_num++;
//		//�ٷ�������
//		return *this;
//	}
//
//
//	//���غ��������
//	//void operator++(int)  int ����ռλ����  ��������ǰ�úͺ���  ֻ����int
//	person operator++(int)
//	{
//		//�� ��¼��ǰ���
//		person temp = *this;
//
//		//�� ����++����
//		m_num++;
//
//		//�ٷ��ؼ�¼�Ľ��
//		return temp;
//		//���غ��õ���һ��Ҫ����ֵ�������Ƿ�������
//		//��Ϊ���ﷵ�ص��Ǿֲ����� ǰ�潲��  ���ܷ��ؾֲ�����������  �ֲ����������ûᱻ�ͷ�
//	}
//
//	//����ǰ��--�����
//	person& operator--()
//	{
//		m_num--;
//		return *this;
//	}
//
//	//���غ���--�����
//	//�мǺ������㲻Ҫ��������
//	person operator--(int)
//	{
//		//�ȼ�¼��ǰ����
//		person temp = *this;
//
//		//�ٽ�������
//		m_num--;
//
//		//�ٷ�������¼������
//		return temp;
//	}
//
//
//
//private:
//	int m_num;
//
//};
//
////�������������
//ostream& operator<<(ostream& cout, person p)
//{
//	cout << p.m_num << endl;
//	return cout;
//}
//
////��֤ǰ��
//void test01()
//{
//	person p;
//	cout << ++p << endl;
//}
//
////��֤����
//void test02()
//{
//	person p;
//	cout << (++p)++ << endl;
//	cout << p << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}