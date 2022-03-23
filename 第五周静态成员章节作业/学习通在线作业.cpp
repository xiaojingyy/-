#include<iomanip>
#include<string>
#include <iostream>
using namespace std;

/*
�̵�����ĳһ��Ʒ���̵�ÿ�칫��ͳһ���ۿۣ�discount����ͬʱ����������Ա������ʱ��������ۼۣ�price�����ڴ˻����ϣ���һ�ι�10�������ߣ�����������98���Żݡ�����֪����3������Ա�������Ϊ:

����Ա�ţ�num��      ����������quantity��      �������ۣ�price��

101                    5                     23.5

102                   12                     24.5

103                  100                     21.5

�����򣬼�������մ���Ʒ�������ۿ�sum�Լ�ÿ����Ʒ��ƽ���ۼۡ�Ҫ���þ�̬���ݳ�Ա�;�̬��Ա������

��ʾ�����ۿ�discount�������ۿ�sum����Ʒ�����ܼ���n������Ϊ��̬���ݳ�Ա���ٶ��徲̬��Ա����average(��ƽ���ۼ�)��display(������)��
*/



//�����ⶨ�徲̬��Ա����ʱһ��Ҫ�ǵ�д������������
//ʹ�þ�̬��Ա����ʱҲҪ��

class store
{
public:
	//�Զ���һ����̬��Աaverage�������ƽ���ۼۡ�
	//��Ҫ�жϼ����Ƿ����10����Ϊ�������ۻ�û����98��

	store(int quantity, double price);//�������ۼ��������۵���,�ۼ����۶����������
	static double average(double sum, int n);


	//����һ����̬��Ա����display������
	static void display(double sum, int n);//���������ܶ������


	static double discount;//�ۿ�
	static double sum;//�����ܼ�
	static int n;//�����ܼ���
};
//��̬��Ա�����ǵ��������ʼ��
double store::discount = 0.98;
double store::sum = 0;
int	   store::n = 0;

store::store(int quantity, double price)
{
	n += quantity;
	if (quantity > 10)
	{
		sum += (quantity * price * discount);
	}
	else
	{
		sum += (quantity * price);
	}
}

double store::average(double sum, int n)//����ƽ��ֵ
{
	return(sum / n);
}

void store::display(double sum, int n)//��ӡ��� 
{
	cout << "��Ʒ�������ۿ��ǣ�" << sum << endl;
	cout << "��Ʒ�������ܼ����ǣ�" << n << endl;
	cout << "���ۼ۸��ƽ��ֵ�ǣ�" << store::average(store::sum, store::n) << endl;
	//��ʵ���Բ���дaverage������ֱ��display�����ĵ����м���Ϳ��ԣ����������鷳

}

void test()
{
	store _101(5, 23.5);
	store _102(12, 24.5);
	store _103(100, 21.5);
	store::display(store::sum, store::n);
}


int main()
{
	test();
	system("pause");
	return 0;
}
