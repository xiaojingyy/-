//#include<iostream>
//#include<iomanip>
//using namespace std;
////int main() {
////	int arr[7]{ 8,4,8,2,5,0,2 };
////	//��������
////	for (int j = 0; j < 7; j++) //����ѭ����ÿ��һ��ִ��һ�齻��
////	{	
////		for (int i = 0; i < 7; i++)//����ѭ������һ������
////		{
////			if (arr[i] < arr[i + 1])
////			{
////				int temp = arr[i];
////				arr[i] = arr[i + 1];
////				arr[i + 1] = temp;
////			}
////
////		}
////	}
////	for (int i = 0; i < 7; i++)
////	{
////		cout << arr[i]  << endl;
////	}
////
////
////
////
////	system("pause");
////	return 0;
////}
////
//
//
////ѡ������
//int main() {
//	int N[6] = { 3,7,6,5,2,4 };
//	for (int i = 0; i < 6; i++)
//	{
//		int index = i;
//		for (int j = i + 1; j < 6; j++)
//		{
//			if (N[index] > N[j])
//			{
//				index = j;
//			}
//		}
//		if (index != i)
//		{
//			int a = N[i];
//			N[i] = N[index];;
//			N[index] = a;
//		}
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		cout <<N[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}