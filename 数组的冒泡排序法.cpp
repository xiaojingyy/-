#include<iostream>
#include<iomanip>
using namespace std;
////��ð�ݷ�����
//#define n 6//���Ƕ����������Ԫ�ظ���
//int main()
//{
//	int A[n+1], i, j;//���飬��ѭ����������ѭ������
//
//
//
//
//	cout << "�������������Ϊ6��һά����" << endl;
//	for (i = 1; i <= n; i++)   cin >> A[i];//�������1��ʼ�������ݣ�ʹ�ó���ɶ��Ը���
//	int exchange = 6;
//	while (exchange)//��exchangeû�иı���ֵ��������
//	{
//		int bound = exchange;//bound���Ѿ������˵ĺ�δ���������ݵı߽�
//		exchange  = 0;       //���ǰ������δ��������ôexchangeΪ0����ı䣬������whileѭ��
//		for (int i = 1; i < bound; i++)
//		{
//			if (A[i] > A[i + 1])
//			{
//				A[0] = A[i];
//				A[i] = A[i + 1];
//				A[i + 1] = A[0];
//				exchange = i;//exchange��¼�����һ�ν����Ľϴ����������Ϊ�߽磬��ʾ��һ��ð��ֻ��Ҫִ�е�����߽�
//
//			}
//
//		}
//
//
//
//	}
//
//
//
//	//for (j = 0; j < n - 1; j++)//������ѭ��ִ�е�����
//	//{
//	//	int flag = 0;
//	//	for (i = 0; i < n - 1 - j; i++)//������ѭ�����������ӣ���ѭ������Ҳ�����
//	//	{
//
//	//		if (A[i] >= A[i + 1])
//	//		{
//	//			t = A[i + 1]; A[i + 1] = A[i]; A[i] = t; //������ȣ���������
//	//			flag = 1;
//	//		}
//
//
//	//	}
//	//	if (flag == 0)
//	//		break;
//	//}
//				
//		//һ��Ҫע�⣬��һ��ѭ�������
//		//����ж����Ҫִ�е����Ҫô�ö��Ÿ��������÷ֺ�
//		//Ҫô���˷ֺž�Ҫ�ô����Ÿ���
//	
//
//	for (i = 1; i <= n; i++)
//		cout << A[i] <<setw(3)<< "";
//
//
//	system("pause");
//	return 0;
//}



bool judgePrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= 1000; i++) {
        if (judgePrime(i)) cout << setw(8) << i;
    }

    cout << endl;
    return 0;
}
