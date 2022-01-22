#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#define max 100//ͨѶ¼����Ϊ1000��


//�����ϵ�˽ṹ�� ; ���ͨѶ¼�ṹ�壬Ҫ������ϵ�˽ṹ�� ; main�����д���ͨѶ¼���ṹ�������

struct person
{
	string name;
	int sex;
	int age;
	string phone;
	string addr;
};
struct addressbooks
{
	//��ϵ������
	struct person personarray[max];
	//Ŀǰ����ϵ�˸���
	int size;
};

//�����ϵ�˺���
void addperson(addressbooks *abs)
	{
		//���ж�ͨѶ¼�Ƿ�������������˾Ͳ������
		if (abs->size > max)
	{
		cout << "ͨѶ¼�������������ݣ�����yyת��500���Ӷ��" << endl;
		return;
	}
	else
	{
		//�����ϵ������
		string temp_name;
		cout << "����������" << endl;
		cin >> temp_name;
		abs->personarray[abs->size].name = temp_name;

		//�Ա�
		cout << "�������Ա�:" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int temp_sex = 0;
		while (1)
		{
			cin >> temp_sex;
			//ֻ��������1����2�����˳�ѭ��
			if (temp_sex == 1 || temp_sex == 2)
			{
				abs->personarray[abs->size].sex = temp_sex;
				break;//Ҫ�ǵ�����ѭ��
			}
			else
				cout << "���Ҹ㣬����" << endl;
		}

		//����
		cout << "����������" << endl;
		int temp_age = 0;
		while (1)
		{
			cin >> temp_age;
			if (temp_age > 0 && temp_age < 100)
			{
				abs->personarray[abs->size].age = temp_age;
				break;
			}
			else
				cout << "̫�����ˣ�������" << endl;
		}

		//�绰
		cout << "������绰" << endl;
		string temp_phone;
		cin >> temp_phone;
		abs->personarray[abs->size].phone = temp_phone;
		cout << "�ٴ�ȷ�ϵ绰����Ϊ��"<<temp_phone << endl;

		//סַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personarray[abs->size].addr = address;

		//������һ����ϵ�˺�Ҫ��ͨѶ¼������һ
		abs->size++;
		cout << "******  ��ӳɹ�!  ******" << endl;

		system("pause");//�밴���������
		system("cls");//��������
	}
}

//2:��ʾ������ϵ��
void showperson(addressbooks*abs)
{

	if (abs->size == 0)
		cout << "��ǰͨѶ¼������ϵ��" << endl;
	else
		cout << "�㵱ǰͨѶ¼����" << abs->size << "��" << endl;
	for (int i = 0; i < abs->size; i++)
	{
		cout	<< abs->personarray[i].name		<< setw(6) 
				<<(abs->personarray[i].sex == 1 ? "��" : "Ů") << setw(6)
				<< abs->personarray[i].age		<< setw(6) 
				<< abs->personarray[i].phone	<< setw(15)
				<< abs->personarray[i].addr		<< endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
}


//�����ϵ���Ƿ���ڣ�������ڣ��򷵻���ϵ�����������е�λ�ã��������򷵻�-1��
int exist(addressbooks* abs, string name)//����һ��ͨѶ¼������
{
	for (int i = 0; i <= abs->size;i++)
	{
		//�����û����������
		if (abs->personarray[i].name == name)	
			return i;	
		else
			return -1;

	}
}
//ɾ����ϵ��
void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	
	//�Ƿ��ҵ������
	int whether =exist(abs, name);
	if (whether != -1)
	{
		cout << "��ȷ��Ҫɾ�������ϵ����" << endl;
		cout << "����:" << abs->personarray[whether].name << "\t"
			<< "�Ա�:" << abs->personarray[whether].sex << "\t"
			<< "����:" << abs->personarray[whether].age << "\t"
			<< "�绰:" << abs->personarray[whether].phone << "\t"
			<< "סַ:" << abs->personarray[whether].addr << endl;

		cout << "1--ȷ��" << "\t";
		cout << "2--����" << endl;
		
		int yes;
		cin >> yes;
		if (yes == 1)
		{
			for (int i = whether; i < abs->size; i++)
			{
				//ÿ����ϵ�˵���������ǰ��
				abs->personarray[i] = abs->personarray[i + 1];
			}
			abs->size--;//����ͨѶ¼����Ա����
			cout << "ɾ���ɹ�" << endl;
		}
		else system("pause");

	}
	else if(whether==-1)
	{
		//���޴���
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");



}

//4:����ָ����ϵ����Ϣ

void findperson(addressbooks* abs)
{
	cout<<"��������Ҫ���ҵ���ϵ��:"<<endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ���ͨѶ¼��
	int whether = exist(abs, name);
	if (whether != -1) {
		cout << "����:" << abs->personarray[whether].name  << "\t"
			 << "�Ա�:" << abs->personarray[whether].sex   << "\t"
			 << "����:" << abs->personarray[whether].age   << "\t"
			 << "�绰:" << abs->personarray[whether].phone << "\t"
			 << "סַ:" << abs->personarray[whether].addr  << "\t";
	}
	else if (whether == -1)
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//5:�޸���ϵ��
void modifyperson(addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	
	int whether = exist(abs, name);
	if (whether != -1)	//�ҵ�ָ����ϵ��
	{
		cout << "��ȷ��Ҫ�޸������ϵ����" << endl;
		cout << "����:" << abs->personarray[whether].name << "\t"
			<< "�Ա�:" << abs->personarray[whether].sex << "\t"
			<< "����:" << abs->personarray[whether].age << "\t"
			<< "�绰:" << abs->personarray[whether].phone << setw (15)
			<< "סַ:" << abs->personarray[whether].addr <<endl;

		cout << "1--ȷ��" << "\t";
		cout << "2--����" << endl;
		int yes;
		cin >> yes;
		if (yes == 1)
		{
			string temp_name;
			cout << "����������" << endl;
			cin >> temp_name;
			abs->personarray[whether].name = temp_name;

			//�Ա�
			cout << "�������Ա�:" << endl;
			cout << "1--��" << endl;
			cout << "2--Ů" << endl;
			int temp_sex = 0;
			while (1)
			{
				cin >> temp_sex;
				//ֻ��������1����2�����˳�ѭ��
				if (temp_sex == 1 || temp_sex == 2)
				{
					abs->personarray[whether].sex = temp_sex;
					break;//Ҫ�ǵ�����ѭ��
				}
				else
					cout << "���Ҹ㣬����" << endl;

			}

			//����
			cout << "����������" << endl;
			int temp_age = 0;
			while (1)
			{
				cin >> temp_age;
				if (temp_age > 0 && temp_age < 100)
				{
					abs->personarray[whether].age = temp_age;
					break;
				}
				else
					cout << "̫�����ˣ�������" << endl;
			}

			//�绰
			cout << "������绰" << endl;
			string temp_phone;
			cin >> temp_phone;
			abs->personarray[whether].phone = temp_phone;
			cout << "�ٴ�ȷ�ϵ绰����Ϊ��" << temp_phone << endl;

			//סַ
			cout << "�������ͥסַ" << endl;
			string address;
			cin >> address;
			abs->personarray[whether].addr = address;

			cout << "�޸ĳɹ�" << endl;

		}
		else system("pause");
			

	}
	else if (whether == -1)
	{
		cout << "���޴���" << endl;
	}

		system("pause");
		system("cls");
}

//6:�����ϵ��

//����˼·��ֻҪ��ͨѶ¼�������þͿ���
void allcleanperson(addressbooks* abs)
{
	cout << "��ȷ��Ҫ���������ϵ���𣿴˲������ɳ�����" << endl;
	cout << "1--�������" << endl;
	cout << "2--��������" << endl;
	int whether;
	cin >> whether;
	if (whether == 1)
	{
		cout << "���������룺" << endl;
		int password = 0;
		cin >> password;
		if (password == 214)
		{
			cout << "������ȷ,�������������ϵ��" << endl;
				abs->size = 0;
				cout << "ͨѶ¼�����" << endl;
				system("pause");
				system("cls");
		}
		else {
			cout << "��֪������ͱ��Ҹ�" << endl;
			system("pause");
			system("cls");
		}
	}
	else if (whether == 2)
	{
		cout << "��Ͷ�����,�԰����ӣ�������" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "����զ�Σ���������" << endl;
		system("pause");
		system("cls");
		return;
	}

	
}

//�˵�����
void showmenu()
{
	cout << "**************************" << endl;
	cout << "*****  1:�����ϵ��  *****" << endl;
	cout << "*****  2:��ʾ��ϵ��  *****" << endl;
	cout << "*****  3:ɾ����ϵ��  *****" << endl;
	cout << "*****  4:������ϵ��  *****" << endl;
	cout << "*****  5:�޸���ϵ��  *****" << endl;
	cout << "*****  6:�����ϵ��  *****" << endl;
	cout << "*****  0:�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;

}
int main()
{
		//�����ṹ�����
		addressbooks abs;
		//��ʼ��ͨѶ¼��ǰ��Ա����
		abs.size = 0;

		int select = 0;
		while (1)
		{
			showmenu();
			cin >> select;
			switch (select)
			{
			case 1://���,ʹ�õ�ַ����
				addperson(&abs);
				break;
			case 2://��ʾ
				showperson(&abs);
				break;
			case 3://ɾ��
				deleteperson(&abs);
				break;//��breakǰ��һ��δ��룬��Ҫ�ô����Ű�ס
			case 4://����
				findperson(&abs);
				break;
			case 5://�޸�
				modifyperson(&abs);
				break;
			case 6://���
				allcleanperson(&abs);
				break;
			case 0://�˳�
				cout << "��ӭ�ٴ�ʹ��" << endl;
				return 0;
				break;
			default:cout << "wrong number" << endl;
				break;
			}
		}
		system("pause");
		return 0;
}