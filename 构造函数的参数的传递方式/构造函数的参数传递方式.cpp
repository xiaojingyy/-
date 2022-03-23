#include<iostream>
#include<iomanip>
#include<string>
using namespace std;



class cube
{
public:
	cube();
	cube(int, int, int);
	int volume();	
private:
	int height;
	int width;
	int length;
};

//���캯���ĺ�����ǰ���üӷ�������
cube::cube()
{
	cout << "���������볤���" << endl;
	cin >> length >> width >> height;
}


//�������ֵ��÷�ʽ�����һ���ģ���һ�ֵ��ø����

cube::cube(int l,int h,int w):length(l),height(h),width(w)
{
	cout << "������һ���Ѿ���ʼ���˵Ķ�����õĹ��캯��" << endl;
}

//cube::cube(int a ,int b ,int c)
//{
//	cout << "������һ���Ѿ���ʼ���˵Ķ�����õĹ��캯��" << endl;
//	height = a;
//	this->width = b;//���Ǳ��ʣ�ʹ��ָ�����
//	length = c;
//}

//����ֵ����һ��Ҫ�������ж���ķ���ֵ����һ��
int cube::volume()
{
	return (height * this->length * this->width);
}


void test()
{
	cube c1;//���õ�һ�����캯��
	cout << "�ó���������Ϊ" << c1.volume() << endl;
	cube c2(10, 10, 10);//���õڶ������캯��
	cout << "�ó���������Ϊ" << c2.volume() << endl;

	cube c[3] =//����һ����������,ÿ�ν���һ���������鶼�����һ�ι��캯��
	{
		cube(10,10,10),
		cube(15,15,15),
		cube(10,20,30)
	};//ע�ⶨ�������������ط���Ҫ�ӷֺ�

	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i << "��������ǣ�" << c[i].volume();
	}
}

int main()
{
	test();
}