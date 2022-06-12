#include<iostream>
#include<string>
#include <fstream>
#include <iomanip>
#include<sstream>
const int tmax = 10;
using namespace std;

//����Ա����
class Person
{
public:
	string name;
	int  sex;
	int department;//���ţ����ۣ����ڣ����ڣ�
	int position;//ְλ������������Ա��������Ա�����۾���
	int  level;//���𣨳��иߣ�
	int num = 0;
	int salary = 3000;
	//Ա������û����������
	int ill_nowork = 0;
	//�Ѿ���н�ݼٵ�����
	int salary_nowork = 0;
	Person(string nam = " ", int s = 0, int d = 0, int p = 0, int l = 0)
	{
		name = nam;
		sex = s;
		department = d;
		position = p;
		level = l;
	}
	//�����е��麯����������д
	//ʹ��virtual������ͬ���������ᱻ����
	virtual void input();//������Ϣ
	virtual void output();//��ӡ��Ϣ
	//�Զ���ֵ��ŵĺ���
	int set_num();
	//���㹤�ʺ���
	int count_salary();
	//����
	int getnum(){return this->num;}
	string getname(){return name;}
};


//������Ϣ��
void Person::input()
{
	cout << "����(string)��";
	cin >> name;


	cout << "�Ա�";
	cout << "1--�� ��2--Ů" << endl;
	cin >> sex;

	int space = 7;

	cout << "���ڲ��ţ�";
	cout << "1--���۲�  " << setw(space) << "2--���ڲ�  " << setw(space) << "3--���ڲ�" << endl;
	cin >> department;


	cout << "ְλ��";
	cout << "1--����  " << setw(space) << "2--������Ա  " << setw(space) << "3--������Ա  " << setw(space) << "4--���۾���" << setw(5) << endl;
	cin >> position;


	cout << "����";
	cout << "1--����  " << setw(space) << "2--�м�  " << setw(space) << "3--�߼�" << setw(space) << endl;
	cin >> level;


	cout << "��Ա���ı����" << this->set_num() << endl;
}
//�����Ϣ��
void Person::output()
{
	int space = 15;
	cout << endl << setiosflags(ios::left) << "  ������ " << setw(space) << this->name;

	cout << "  ��ţ� " << setw(space) << this->num;


	if (this->sex == 1)
		cout << "  �Ա� " << "��" << endl;
	else if (this->sex == 2)
		cout << "  �Ա� " << "Ů" << endl;



	if (this->department == 1)
		cout << "  ���ţ� " << setw(space) << "���۲�";
	else if (this->department == 2)
		cout << "  ���ţ� " << setw(space) << "���ڲ�";
	else if (this->department == 3)
		cout << "  ���ţ� " << setw(space) << "���ڲ�";

	if (this->position == 1)
		cout << "  ְλ�� " << setw(space) << "���ž���";
	else if (this->position == 2)
		cout << "  ְλ�� " << setw(space) << "������Ա";
	else if (this->position == 3)
		cout << "  ְλ�� " << setw(space) << "������Ա";
	else if (this->position == 4)
		cout << "  ְλ�� " << setw(space) << "���۾���";


	if (this->level == 1)
		cout << "  ���� " << "����";
	else if (this->level == 2)
		cout << "  ���� " << "�м�";
	else if (this->level  == 3)
		cout << "  ���� " << "�߼�";

	cout << endl;
	
	cout<< "  �벡��:" << this->ill_nowork << setw(space-1) << "Сʱ";
	cout<< " ��н�ݼ�:" << this->salary_nowork << setw(space- 3) << "Сʱ";
	cout<< "  ���ʣ�" << this->count_salary() << "Ԫ";

	cout << endl << endl;

	

}


//�Զ���ֵ��ŵĺ���
int i = 1;//��ŵĺ���λ˳��ʹ��ȫ�ֱ���
int Person::set_num()
{
	int temp_num = 1;
	//��Ű�����  
	//���� �� ���۲� ���� ������Ա    1112
	//���� Ů ���ڲ� �м� ����        2321

	if (this->sex == 2)
		temp_num = 2;

	//ͳһ����ʮ���򻯺�������
	temp_num *= 10;
	//����
	if (this->department == 1)//���۲�
		temp_num += 1;
	else if (this->department == 2)//���ڲ�
		temp_num += 2;
	else if (this->department == 3)//���ڲ�
		temp_num += 3;


	//ͳһ����ʮ���򻯺�������
	temp_num *= 10;
	//����
	if (this->level == 1)//����
		temp_num += 1;
	else if (this->level == 2)//�м�
		temp_num += 2;
	else if (this->level == 3)//�߼�
		temp_num += 3;


	//ͳһ����ʮ���򻯺�������
	temp_num *= 10;
	//ְλ
	if (this->position == 1)//����
		temp_num += 1;
	else if (this->position == 2)//������Ա
		temp_num += 2;
	else if (this->position == 3)//������Ա
		temp_num += 3;
	else if (this->position == 4)//���۾���
		temp_num += 4;

	//����100��������λ���־���˳���Է�ͬ������ְλ������˵ı����һ����
	temp_num *= 100;


	//��Ҫ������ְ˳�����������λ��ֵ
	temp_num += i;
	i += 1;


	//�������Ǹ�ֵ��Ա���ı��
	this->num = temp_num;

	return this->num;
	//����ֻ�÷������ݾͿ��ԣ�Ȼ����ݲ�ͬʹ�ó�������д�Ϳ���
}


//���ʺ��������㹤��
int Person::count_salary()
{
	int temp_salary = 0;

	//�Բ������û�������
	//���۲������ڲ������ڲ�
	if (this->department == 1)
		temp_salary = 4300;
	else if (this->department == 2)
		temp_salary = 4500;
	else if (this->department == 3)
		temp_salary = 4200;

	//����ְλ���ϲ�ͬ�Ĺ���
	//����������Ա��������Ա�����۾���
	if (this->position == 1)
		temp_salary += 600;
	else if (this->position == 2)
		temp_salary += 500;
	else if (this->position == 3)
		temp_salary += 300;
	else if (this->position == 4)
		temp_salary += 600;


	//�ٸ���ְλ���ϲ�ͬ�Ĺ���
	//���и߼�
	if (this->level == 1)
		temp_salary += 200;
	else if (this->level == 2)
		temp_salary += 400;
	else if (this->level == 3)
		temp_salary += 600;


	//���ǵø�ֵ������
	this->salary = temp_salary;
	return this->salary;
}

class person_mana :public Person//�̳�person��
{
public:
	Person p[tmax];//����Ա���������飬����Ա����Ϣ
	int top;//Ա��ʵʱ����
	
	person_mana();//���캯�������ڳ�ʼ��Ա����Ϣ
	void add();//��Ӻ���
	void show();//��ʾ����

	//����Ա����Ա�����ֱ�ź���������
	void search();
	void search_num();
	void search_name();

	//Ա���鿴������Ϣ
	void e_check(int e_num);//����Ա�����

	//�༭��Ϣ�������ֱ�ź���������
	void edit();
	void edit_num();
	void edit_name();


	//ɾ����Ϣ�������ֱ�ź���������
	void Delete();
	void Delete_num();
	void Delete_name();

	//��ʾԱ������
	void total();

	//��ٺ������ֱ���ת��������������
	void record_vacation_day(int num);
	//���벡��
	void judge_ill_vacation(int i);
	//�����н�ݼ�
	void judge_salary_vacation(int i);


	//����Ͷ�ȡ
	void save();
	void read();

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_fileifempty;
	int get_EmpNum();

	//��ʼ��Ա��
	void t_Emp();
};

person_mana::person_mana()
{
	//topҪ��ʼ�������򱨴���������
	top = 0;
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	//1���ļ�������ʱ
	if (!ifs.is_open())
	{
		//cout << "�ļ������ڣ�" << endl;

		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_fileifempty = true;//����˵���ļ�Ϊ���ǶԵ�

		ifs.close();//�ǵùر��ļ�
		return;
	}

	//2:�ļ�������ʱ
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//���ļ�����û������
		//cout << "�ļ�Ϊ�գ�" << endl;

		//��ʼ������
		top = 0;

		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_fileifempty = true;//����˵���ļ�Ϊ���ǶԵ�

		ifs.close();//�ǵùر��ļ�
		return;
	}

	//3�����ļ����ڲ���������ʱ


	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ��" << num << endl;
	/*top = num;*/
	this->t_Emp();

	////���Դ���
	//for (int i = 0; i < top; i++)
	//{
	//	p[i].output();
	//}
}

//��Ӻ���
void person_mana::add()
{
	if (top >= tmax)
	{
		cout << "�ռ��������������!!!" << endl;
		system("pause");
		system("cls");
		return;
	}
	Person pe;
	cout << "�����������Ա��Ϣ��" << endl;
	pe.input();
	p[top] = pe;//���´����Ķ����뵽������
	cout << "��ӳɹ�!!!" << endl;
	cout << endl;
	top++;//Ҫ�ǵ���ÿ�����Ա��֮����������ӵ�Ա������
	this->save();

	//����Ա��������Ϊ�յı�־
	this->m_fileifempty = false;//�ļ�Ϊ���Ǽٵ�

	system("cls");

	return;
}


//��ʾ����Ա��
void person_mana::show()
{
	if (top == 0) { cout << "Ŀǰû��Ա�����������Ա����Ϣ��" << endl; system("pause"); system("cls"); return; }
	cout << "����" 
		 <<setw(12) << "���" 
		 << setw(9) << "�Ա�" 
		 << setw(8) << "����" 
		 << setw(10) << "ְλ" 
		 << setw(10) << "����" 
		 << setw(13) << "����ʱ��" 
		 << setw(11) << "н��ʱ��" 
		 << setw(8) << "����" << endl;

	string se = "", de = "", po = "", le = "";

	for (int i = 0; i < top; i++)
	{
		//�ж��Ա�
		if (p[i].sex == 1)
			se = "��";
		else if(p[i].sex == 2)
			se = "Ů";
		//�жϲ���
		if (p[i].department == 1)
			de = "���۲�";
		else if(p[i].department==2)
			de = "���ڲ�";
		else if(p[i].department==3)
			de = "���ڲ�";
		//�ж�ְλ
		if (p[i].position == 1)
			po = "���ž���";
		else if (p[i].position == 2)
			po = "������Ա";
		else if (p[i].position == 3)
			po = "������Ա";
		else if (p[i].position == 4)
			po = "���۾���";
		//�жϼ���
		if (p[i].level == 1)
			le = "����";
		else if (p[i].level == 2)
			le = "�м�";
		else if (p[i].level == 3)
			le = "�߼�";

		//���㹤��		
		p[i].count_salary();

		cout << setw(6) << p[i].name
			<< setw(11) << p[i].num
			<< setw(7) << se
			<< setw(10) << de
			<< setw(12) << po
			<< setw(7) << le
			<< setw(10) << p[i].ill_nowork
			<< setw(10) << p[i].salary_nowork
			<< setw(12) << p[i].salary << endl;
	}

	cout << endl;
	system("pause");
	system("cls");
}

//Ա���鿴������Ϣ����
void person_mana::e_check(int e_num)//Ա���Լ�������
{
	for (int i = 0; i <= person_mana::top; i++)
	{
		
		if (p[i].num == e_num)
		{
			cout << "top=" << top << endl;
			p[i].output();
			system("pause");
			return;
		}
	}
	//���û��return�ͻ���������
	cout << "δ��ѯ��������Ϣ" << endl;
	system("pause");
}

//��ٺ���
void person_mana::record_vacation_day(int e_num)//������
{
	int xiabiao = 0;
	for (int i = 0; i <= top; i++)
	{
		if (p[i].num == e_num)//�ɱ���ҵ��±�
		{
			xiabiao = i;//��¼�±꣬������������Ҫ��
			cout << "���������" << p[xiabiao].name << endl;
			cout << "��Ĳ���ʱ��ʣ�ࣺ" << 16 - p[xiabiao].ill_nowork << endl;
			cout << "��Ĵ�н�ݼٵ�ʱ��ʣ�ࣺ" << 24 - p[xiabiao].salary_nowork << endl;

			system("pause");

			while (1)
			{
				cout << "��ѡ����Ҫ���еĲ���:\t\t1--�벡��\t\t2--��н�ݼ�\t\t0--�˳�  " << endl;
				int a;
				cin >> a;
				switch (a)
				{
				case 1:
					judge_ill_vacation(xiabiao); this->save(); break;//���뺯�������±�
				case 2:
					judge_salary_vacation(xiabiao); this->save(); break;//���뺯�������±�
				case 0:
					this->save();
					return;
				}
			}
		}
	}
	cout << "δ��ѯ������" << endl;
	system("pause");
	
}

void person_mana::judge_ill_vacation(int xiabiao)//����ٺ����д���������±�
{
	if (p[xiabiao].ill_nowork <= 16)
	{
		cout << "��Ĳ���ʱ����" << 16 - p[xiabiao].ill_nowork << "Сʱ" << endl;
		cout << "���������ٶ���Сʱ��" << endl;
		int a; cin >> a;
		if (a <= (16 - p[xiabiao].ill_nowork))
		{
			p[xiabiao].ill_nowork += a;
			cout << "�㱾���������׼��������ż���ʱ�䣡" << endl;
			system("pause");
			return;
		}
		else
		{
			cout << "������ʱ�䲻�㣡" << endl;
			cout << "���������٣��뵱���������룡" << endl;
			system("pause");
			return;
		}

	}
	else if (p[xiabiao].ill_nowork > 16)
	{
		cout << "��Ĳ���ʱ���Ѿ�ʹ����" << p[xiabiao].ill_nowork << "Сʱ" << endl;
		cout << "���������٣��뵱���������룡" << endl;
		system("pause");
		return;
	}

}

//�жϴ�н�ݼ���
void person_mana::judge_salary_vacation(int xiabiao)
{
	if (p[xiabiao].salary_nowork <= 24)
	{
		cout << "��Ĵ�н�ݼ�ʱ����" << 24 - p[xiabiao].salary_nowork << "Сʱ" << endl;
		cout << "���������ٶ���Сʱ��" << endl;
		int a; cin >> a;
		if (a <= (24 - p[xiabiao].salary_nowork))
		{
			p[xiabiao].salary_nowork += a;
			cout << "�㱾���������׼��������ż���ʱ�䣡" << endl;
			system("pause");
			return;
		}
		else
		{
			cout << "������ʱ�䲻�㣡" << endl;
			cout << "���������٣��뵱���������룡" << endl;
			system("pause");
			return;
		}
	}
	else if (p[xiabiao].salary_nowork > 24)
	{
		cout << "��Ĵ�н�ݼ�ʱ���Ѿ�ʹ����" << p[xiabiao].salary_nowork << "Сʱ" << endl;
		cout << "���������٣��뵱���������룡" << endl;
		system("pause");
		return;
	}
}

//���Һ���
void person_mana::search()
{
	system("cls");
	if (top == 0)
	{
		cout << "û�м�����Ա��Ϣ!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int choice;
	do {
		cout << endl << endl;
		cout << "                                               ooooo����ooooo" << endl;
		cout << "                       ||                                                        ||" << endl;
		cout << "                       ||       1 �� �����       2 :������       0 :�˳�        ||" << endl;
		cout << "                       ||                                                        ||" << endl;
		cout << "                       oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "����������ѡ��:";
		cin >> choice;
		switch (choice)
		{
		case 1:search_num(); break;
		case 2:search_name(); break;
		case 0:cout << "���Ѱ�ȫ�˳�." << endl; break;
		default:cout << "û�д�ѡ��,����ѡ." << endl; system("pause");  system("cls");  break;
		}
	} while (choice != 0);
	system("cls");
}

//���ձ�Ų���
void person_mana::search_num()
{
	int y1;
	cout << "������Ҫ��ѯ������Ա�ı�ţ�";
	cin >> y1;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getnum() == y1)
		{
			cout << "oooooooooooo�ҵ����������Ա�ˣ�����ϢΪ��oooooo" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "�ü�����Ա������!" << endl;
	system("pause");
	system("cls");
}


//������������
void person_mana::search_name()
{
	string s1;
	cout << "������Ҫ��ѯ�ļ�����Ա������";
	cin >> s1;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getname() == s1)
		{
			cout << "oooooooooooo�ҵ����������Ա�ˣ�����ϢΪ��oooooo" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "�ü�����Ա������!" << endl;
	system("pause");
	system("cls");
}

//�༭����
void person_mana::edit()
{
	if (top == 0)
	{
		cout << "û�м�����Ա��Ϣ!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int choice;
	do {
		system("cls");
		cout << "                                       ooooo�༭ooooo" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    ||        1 : �����       2 : ������       0 :�˳�       ||" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "����������ѡ��:";
		cin >> choice;
		switch (choice)
		{
		case 1:edit_num(); this->save();  break;
		case 2:edit_name(); this->save(); break;
		case 0:cout << "���Ѱ�ȫ�˳�." << endl; this->save(); break;
		default:cout << "û�д�ѡ��,����ѡ." << endl; system("pause");  system("cls");  break;
		}
	} while (choice != 0);
	system("cls");
}


//���ұ�ű༭
void person_mana::edit_num()
{
	int x1;
	cout << "������Ҫ�༭�ļ�����Ա�ı�ţ�";
	cin >> x1;
	for (int i = 0; i <= top; i++)
	{
		if (p[i].getnum() == x1)
		{
			p[i].output();
			cout << endl;
			cout << "���������뼼����Ա��Ϣ��"<<endl;
			p[i].input();
			cout << "�޸ĳɹ�!" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "��Ա��������!" << endl;
	system("pause");
}


//���������༭
void person_mana::edit_name()
{
	string h1;
	cout << "������Ҫ�༭�ļ�����Ա������:";
	cin >> h1;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getname() == h1)
		{
			p[i].output();
			cout << endl;
			cout << "���������뼼����Ա��Ϣ��";
			p[i].input();
			cout << "�޸ĳɹ�!" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "��Ա��������!" << endl;
	system("pause");
}

//ɾ����
void person_mana::Delete()
{
	system("cls");
	if (top == 0) { cout << "û�м�����Ա��Ϣ!" << endl; system("pause"); system("cls"); return; }
	int choice;
	do {
		cout << "                                       oooooɾ��ooooo" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    ||       1 : �����        2 : ������       0 :�˳�       ||" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "����������ѡ��:";
		cin >> choice;
		switch (choice)
		{
		case 1:Delete_num(); this->save(); break;
		case 2:Delete_name(); this->save(); break;
		case 0:cout << "���Ѱ�ȫ�˳�." << endl; this->save(); break;
		default:cout << "û�д�ѡ��,����ѡ." << endl; system("pause");  system("cls");  break;
		}
	} while (choice != 0);
	system("cls");
}

//���ұ��ɾ��
void person_mana::Delete_num()
{

	int f1;
	cout << "������Ҫɾ���ļ�����Ա���:";
	cin >> f1;
	int remain = 0;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getnum() == f1)
		{
			remain = i;
			p[i].output();
			break;
		}

	}
	
	char c1;
	cout << "�Ƿ�ɾ�������:y/Y,��n/N��:";
	cin >> c1;
	if (c1 == 'y' || c1 == 'Y')
	{
		for (int k = remain; k < top; k++)
		{
			p[k] = p[k + 1];
		}
		cout << "ɾ���ɹ�!" << endl;
		top--;
		system("pause");
		system("cls");
		return;
	}
	else
		cout << "û��ɾ���ü�����Ա!" << endl; system("pause"); system("cls");
}

//��������ɾ��
void person_mana::Delete_name()
{

	string r;
	cout << "������Ҫɾ������Ա����:";
	cin >> r;
	int remain = 0;
	for (int i = 0; i < top; i++)
	{
		
		if (p[i].getname() == r)
		{
			remain = i;
			p[i].output();
			break;
		}
		
	}

	char c3;
	cout << "�Ƿ�ɾ�������:y/Y,��n/N��:";
	cin >> c3;
	if (c3 == 'y' || c3 == 'Y')
	{

		for (int k = remain; k < top - 1; k++)
		{
			p[k] = p[k + 1];
		}
		cout << "ɾ���ɹ�!" << endl;
		top--;
		system("pause");
		system("cls");
		return;
	}
	else
		cout << "û��ɾ���ü�����Ա!" << endl; system("pause"); system("cls");
}

//ͳ����Ա����
void person_mana::total()
{
	cout << "Ա��������Ϊ��" << top << " ��" << endl;
	//ͳ�Ƹ�������������˼·��ͨ���������飬����жϲ��Ź��������弸��������ͨ�����ӵķ�ʽ���������Ϣ
		//��ʼ�����۲������ڲ������ڲ�������
	int sale = 0, out = 0, behind = 0;
	int d_manager = 0, tech = 0, sale_people = 0, sale_manager = 0;
	for (int i = 0; i < top; i++)
	{
		if (p[i].department == 1)
			sale++;
		else if (p[i].department == 2)
			out++;
		else if (p[i].department == 3)
			behind++;
	}
	for (int i = 0; i < top; i++)
	{
		if (p[i].position == 1)
			d_manager++;
		else if (p[i].position == 2)
			tech++;
		else if (p[i].position == 3)
			sale_people++;
		else if (p[i].position == 4)
			sale_manager++;
	}
	cout << "����Ҫͳ��ʲô��Ϣ��" << endl;
	cout << "1������������\t2����ְλ����" << endl;
	int a = 0; cin >> a;
	if (a == 1)
	{
		cout << "���۲���" << sale << "��" << endl;
		cout << "���ڲ���" << out << "��" << endl;
		cout << "���ڲ���" << behind << "��" << endl;
	}
	else if (a == 2)
	{
		cout << "���ž���" << d_manager << "��" << endl;
		cout << "������Ա��" << tech << "��" << endl;
		cout << "������Ա��" << sale_people << "��" << endl;
		cout << "���۾���" << sale_manager << "��" << endl;
	}
	system("pause");
	system("cls");
}


//�����ļ��������
void person_mana::save()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	for (int i = 0; i < top; i++)
	{
		//ע�Ᵽ��ĸ�ʽ����ͷ����ÿ������֮���ÿո����
		ofs << p[i].num
			<< " " << p[i].name
			<< " " << p[i].sex
			<< " " << p[i].department
			<< " " << p[i].position
			<< " " << p[i].level
			<< " " << p[i].ill_nowork
			<< " " << p[i].salary_nowork << endl;
	}
	cout << "����Ա��������" << top << endl;
	cout << "����ɹ�!" << endl;
	cout << endl;
	ofs.close();
	system("pause");
	system("cls");

}

//ͳ���ļ������е�����
int  person_mana::get_EmpNum()
{
	ifstream in("test.txt");
	string line;

	int e_num = 0;
	string e_name = "";
	int e_sex = 0;
	int e_department = 0;
	int e_position = 0;
	int e_level = 0;
	int e_ill_nowork = 0;//����ʱ��
	int e_salary_nowork = 0;//��н�ݼ�ʱ��

	int num = 0;
	//�ݴ�Ա������

	while (getline(in, line))
	{
		istringstream str(line);
		string out;
		while (str >> e_num >> e_name >> e_sex >> e_department >> e_position >> e_level>> e_ill_nowork>> e_salary_nowork)
		{
			num++;//ͳ���ļ��е�����
		}
	}

	//�ο�����
	//https://www.freesion.com/article/73031479220/
	in.close();
	return num;
}

void person_mana::t_Emp()//��ʼ��Ա��
{
	ifstream in("test.txt");
	string line;

	int e_num = 0;
	string e_name = "";
	int e_sex = 0;
	int e_department = 0;
	int e_position = 0;
	int e_level = 0;
	int e_ill_nowork = 0;//����ʱ��
	int e_salary_nowork = 0;//��н�ݼ�ʱ��
	while (getline(in, line))
	{
		istringstream str(line);
		string out;
		while (str >> e_num >> e_name >> e_sex >> e_department >> e_position >> e_level >> e_ill_nowork >> e_salary_nowork)
		{
			p[top].num = e_num;
			p[top].name = e_name;
			p[top].sex = e_sex;
			p[top].department = e_department;
			p[top].position = e_position;
			p[top].level = e_level;
			p[top].ill_nowork = e_ill_nowork;
			p[top].salary_nowork = e_salary_nowork;

			top++;//������һ
		}
	}
	//�ر��ļ� 
	in.close();
}

//��ȡ�ļ�
void person_mana::read()
{
	cout << "��ȡ�ɹ���" << endl;
	cout << "����Ա��������" << top << endl;
	system("pause");
	system("cls");
}

//����亯��
string suggestion()
{
	cout << "����˵ʲô��дʲô�����õ��ģ����������ȫ�����ģ�" << endl;
	string sug;
	cin >> sug;
	return sug;
}

//����䱣���ļ�
void suggestion_box()
{
	ofstream ofs;
	ofs.open("suggestion.txt", ios::app);

	ofs << endl << "~~~" << suggestion() << endl;

	cout << "����ɹ���" << endl;

	ofs.close();
	system("pause");
	system("cls");

}

void TechnologistMenu(person_mana tee)
{
	system("cls");
	int choice;
	do
	{
		cout << "                                   *****��˾ϵͳ*****" << endl;
		cout << endl << "                          || 1���鿴������Ϣ     2�����       ||" << endl;
		cout << "                          ||                                   || " << endl;
		cout << "                          || 3������Ա��¼       0������       ||" << endl;
		cout << "������������ѡ�";

		//�����ѡ��

		cin >> choice;

		//Ա�����
		int e_num = 0;
		if (choice == 1 || choice == 2)
		{
			cout << "��������ı�ţ�" << endl;
			cin >> e_num;
		}

		switch (choice)
		{
		case 1:
			tee.e_check(e_num); system("cls"); break;
		case 2:
			tee.record_vacation_day(e_num); system("cls"); break;


		case 3:
			system("cls");
			int a;
			do {
				cout << "                        **************************************************************************" << endl;
				cout << "                        **************************************************************************" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********                         ����Ա����                       ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********    1:���    2:����    3:�޸�    4:ͳ��    5:ɾ��        ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********    6:��ʾ    7:����    8:��ȡ    0:����                  ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        **************************************************************************" << endl;
				cout << "                        **************************************************************************" << endl;

				cout << "������������ѡ�";
				cin >> a;
				switch (a)
				{
				case 1:tee.add(); break;
				case 2:tee.search(); break;
				case 3:tee.edit(); break;
				case 4:tee.total(); break;
				case 5:tee.Delete(); break;
				case 6:tee.show(); break;
				case 7:tee.save(); break;
				case 8:tee.read(); break;
				case 0:tee.save(); cout << "�˳��ɹ�!" << endl; system("pause");system("cls"); break;
				default:cout << "�޴�ѡ��,������!" << endl; break;
				};
			} while (a != 0);
		}


	} while (choice != 0);
}

int main()
{

	cout << "                                           ooo ��ӭ���빫˾����ϵͳooo" << endl;
	int choice;

	person_mana tee;
	do {

		cout << "                                               oooooo���˵�oooooo          " << endl;
		cout << "                         ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "                         ||                                                             || " << endl;
		cout << "                         ||     1����½          2�������          0:�˳�ϵͳ          || " << endl;
		cout << "                         ||                                                             || " << endl;
		cout << "                         ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "����������ѡ��:";
		cin >> choice;

		switch (choice)
		{
		case 1:TechnologistMenu(tee); system("cls"); break;
		case 2:suggestion_box(); break;
		case 0:cout << "���Ѱ�ȫ�˳�ϵͳ." << endl; break;
		default:cout << "û�д�ѡ�����ѡ;" << endl; break;
		}
	} while (choice != 0);

	cout << "                                           ooooo��ӭ��ʹ�ñ�ϵͳ!ooooo" << endl;
	return 0;
}