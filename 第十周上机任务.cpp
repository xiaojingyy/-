#include<iostream>
#include<iomanip>
using namespace std;


//1.��д���򣬴Ӽ�������һ��Ӣ����ĸ������Ǵ�д��ĸ�����������Ӧ��Сд��ĸ�������Сд��ĸ�����������Ӧ�Ĵ�д��ĸ

int change()
{
	while (1)
	{
		char num = 0;
		cout << "������һ��Ӣ����ĸ" << endl;
		cin >> num;
		if (num == 0)
			break;
		else if (num > 35 && num < 90)
		{
			cout << char(num + 32)<<endl;
		}
		else if (num > 97 && num <122)
		{
			cout << char(num-32);
		}
	}
	return 0;
}

//ʹ��switch��䣬���û�����ķ�����0-100�����ж���������59�ּ�����ΪFail��60��69ΪPass��70��89ΪGood��90��100ΪExcellent�������û����������������Ӧ�ȼ���

int score()
{
	int num;
	



	return 0;
}


int main()
{
	change();

	system("pause");
	return 0;
}