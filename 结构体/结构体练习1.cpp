#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Ŀ�ģ�����һ��Ӣ�۵Ľṹ�岢�����ǰ���ָ����������
//Ӣ�۵Ľṹ��Ӧ�������������Ա����䣬��ߣ����أ�

//����Ӣ�۽ṹ��
//����Ӣ�۽ṹ������
//дһ������ָ����������ĺ��������Ժ��װ

struct hero {
	string name;
	int sex;
	int age;
	int height;
	int weight;

};

void printarray(struct hero* heroarray, int length)
{
	cout	<< "����" << "\t"
			<< "�Ա�" << "\t"
			<< "����" << "\t"
			<< "���" << "\t"
			<< "����" << "\t"<<endl;
	for (int i = 0; i < length; i++)
	{
		
		cout	<<  heroarray[i].name << "\t"
				<<  (heroarray[i].sex == 1 ? "��" : "Ů") << "\t"
				<<  heroarray[i].age << "\t"
				<<  heroarray[i].height << "\t"
				<<  heroarray[i].weight << "\t" << endl;
	}
}

void bubblesort(struct hero* heroarray, int length,int select)
{
		if(select==1)
			cout << "������������������" << endl;
		else if(select==2)
			cout << "�����������������" << endl;
		else if(select==3)
			cout << "������������������" << endl;

		for (int i = 0; i < length - 1; i++)
		{
			for (int j = 0; j < length - 1 - i; j++)
			{
				if (select == 1)
				{	
					if (heroarray[j].age > heroarray[j + 1].age)
					{
						struct hero temp = heroarray[j];
						heroarray[j] = heroarray[j + 1];
						heroarray[j + 1] = temp;
					}
				}
				if (select == 2)
				{
					if (heroarray[j].height > heroarray[j + 1].height)
					{
						struct hero temp = heroarray[j];
						heroarray[j] = heroarray[j + 1];
						heroarray[j + 1] = temp;
					}
				}
				if (select == 3)
				{
					if (heroarray[j].weight > heroarray[j + 1].weight)
					{
						struct hero temp = heroarray[j];
						heroarray[j] = heroarray[j + 1];
						heroarray[j + 1] = temp;
					}
				}
			}
		}

		cout << "����" << "\t"
			<< "�Ա�" << "\t"
			<< "����" << "\t"
			<< "���" << "\t"
			<< "����" << "\t" << endl;
		for (int i = 0; i < length; i++)
		{
			cout << heroarray[i].name << "\t"
				<< (heroarray[i].sex == 1 ? "��" : "Ů") << "\t"
				<< heroarray[i].age << "\t"
				<< heroarray[i].height << "\t"
				<< heroarray[i].weight << "\t" << endl;
		}
		system("pause");
		
}
int main() {
	struct hero heroarray[5] = {
		{"��",1,23,182,130},
		{"����",1,19,185,145},
		{"����",2,19,168,100},
		{"��ɪ",1,24,190,160},
		{"�Ϸ���",1,70,178,140}
	};
	int length = sizeof(heroarray) / sizeof(heroarray[0]);
	printarray(heroarray, length);
	while (1)
	{
		cout << endl;
		cout << "���밴��ʲô��������ЩӢ������(����0��ʾ�˳�)" << endl;
		cout << "1--����" << endl;
		cout << "2--���" << endl;
		cout << "3--����" << endl;
		int select;
		cin >> select;
		if (select == 0)break;
		bubblesort(heroarray, length,select);
	}
	system("pause");
	return 0;
}
