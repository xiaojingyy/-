#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//һ��Բ��Ӿ�أ�����Ҫ����Χ��һ����Ϊ3�׵Ĺ���������ҪΧ��դ��������Ϊ35Ԫÿ�ף��������Ϊ20Ԫÿƽ���ף����û�����Ӿ�صİ뾶
const float PI = 3.141593;//float������λС��
const float fence_price = 35;
const float guodao_price = 20;
class swim_circle
{
public:
	swim_circle(float radius);//������
	float length();//�����ܳ�
	float size();//�������
private:
	float radius;
};

swim_circle::swim_circle(float r)
{
	radius = r;
}

float swim_circle::length()
{
	return (2 * PI * this->radius* fence_price);
}

float swim_circle::size()
{
	return (PI * radius * radius* guodao_price);

}
void test01()
{
	float radius;
	cout << "�������Ӿ�صİ뾶��";
	cin >> radius;

	swim_circle s1(radius);//Ӿ�ر߽�
	swim_circle s2(radius+3);//Բ���߽�

	cout << "դ��������ǣ�" << s2.length()<<endl;

	cout << "�����������" << s2.size() - s1.size();
}

int main()
{
	test01();


	system("pause");
	return  0;
}