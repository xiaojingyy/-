#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Ӣ�۵Ľṹ��
struct hero
{
	string name;
	int age;
	string sex;
};

//ð�����򣬰�����Ӵ�С
void bubblesort(struct hero heroarray[], int length)
{
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				//�����㽻������ʱ��Ӧ�������ݽ��н����������ǽ������е����ݽ���
				struct hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}
}

//��ӡ���
void printhero(struct hero heroarray[],int length) {
	cout << "������" << endl;
	for (int i = 0; i < length; i++)
	{
		
		cout << "������" << heroarray[i].name << setw(8)
			 << "���䣺" << heroarray[i].age << setw(8)
			 << "�Ա�:"  << heroarray[i].sex << endl;
	}
}

int main() {

	//2:����������Ӣ��
	struct hero heroarray[5]
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	
	int length = sizeof(heroarray) / sizeof(heroarray[0]);
	cout << "����ǰ��" << endl;
	for (int i = 0; i < length; i++)
	{
		
		cout << "������" << heroarray[i].name<<setw(8)
			 << "���䣺" << heroarray[i].age <<setw(8)
			 << "�Ա�:"  << heroarray[i].sex <<endl;
	}
	//��������
	bubblesort(heroarray, length);
	//����ӡ
	printhero(heroarray, length);
	system("pause");
	return 0;
}