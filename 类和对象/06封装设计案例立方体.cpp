//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////1��������������
////2���������
////3�������Ϊ  ��ȡ��������
////4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//
//class cube
//{
//public:	
//	//���ó����
//	void setl(int l)
//	{
//		m_long = l;
//	}
//	void setw(int w)
//	{
//		m_width = w;
//	}
//	void seth(int h)
//	{
//		m_height = h;
//	}
//	//��ȡ�����
//	int getl()
//	{
//		return m_long;
//	}
//	int getw()
//	{
//		return m_width;
//	}
//	int geth()
//	{
//		return m_height;
//	}
//	//��ȡ��������
//	int gets()
//	{
//		return 2 * m_long * m_width + 2 * m_long * m_height + 2 * m_height * m_width;
//	}
//	int getv()
//	{
//		return m_long * m_width * m_height;
//	}
//	//���ó�Ա�����ж������������Ƿ����
//	bool same_class(cube&c)//����ֻҪ����һ����������Ϊ�Ѿ�����һ������ȥ�����������
//	{
//		if (m_long == c.getl() && m_width == c.getw() && m_height == c.geth())
//			return true;
//		else return false;
//	}
//
//
//	//��������,һ����˽��
//private:
//	int m_long;
//	int m_width;
//	int m_height;
//
//};
//
////����ȫ�ֺ����ж������������Ƿ����
//bool same(cube& c1, cube& c2)
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
//		return true;
//	else return false;
//
//}
//
//int main()
//{
//	cube c1;
//	c1.setl(10);
//	c1.setw(10);
//	c1.seth(10);
//	cube c2;
//	c2.setl(10);
//	c2.setw(10);
//	c2.seth(11);
//
//	cout << "c1�����Ϊ��" << c1.gets() << endl;
//	cout << "c1�����Ϊ��" << c1.getv() << endl;
//	//������ȫ�ֺ����ж�
//	bool ret = same(c1, c2);
//	if (ret)
//		cout << "ȫ�ֺ����жϣ�c1��c2����ȵ�" << endl;
//	else
//		cout << "ȫ�ֺ����жϣ�c1��c2�����" << endl;
//
//	//�������ó�Ա�����ж�
//	ret = c1.same_class(c2);
//	if (ret)
//		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
//	else
//		cout << "��Ա�����жϣ�c1��c2�����" << endl;
//	system("pause");
//	return 0;
//}