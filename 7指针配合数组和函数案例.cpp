#include<iostream>
#include<iomanip>
using namespace std;

void bubblesort(int *arr,int length)//����һ����Ҫ���������ַ�����鳤�ȵĺ���
{
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void coutshuzu(int* arr,int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] <<setw(5);
	}
	cout << endl;
}

int main() {
	//1���ȴ�������
	int arr[10];
	cout << "�������������Ϊ10������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "���ǵ�����������" << endl;
	//2:����������ʵ��ð������
	int length = sizeof(arr) / sizeof(arr[0]);//��������ĳ���

	bubblesort(arr, length);//�������׵�ַ�����鳤�ȴ��뺯��
	//3:��ӡ����������
	coutshuzu(arr, length);
	system("pause");
	return 0;
}