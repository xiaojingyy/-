#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
	
int* func()
{
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);//����һ���������10
	return p;
}

//1��new�Ļ����﷨
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����ӡ�����û������ģ������������ɳ���Ա�����ٲ������ͷţ�
	//������ͷŶ������ݣ���delete�ؼ���
	delete p;
	//cout << *p << endl;//����ʱ������ᱨ����Ϊ�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�

}

void test02()
{
	//����10�������ݵ�����
	int*arr = new int[10];//10��Ԫ�ص�����

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	//�ͷ�����Ҫ��������
	delete [] arr;

	/*for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}*/
	//�����Ѿ��ͷţ������޷��ٴ�ӡ
}





int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}
