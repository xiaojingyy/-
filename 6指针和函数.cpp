//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void swap01(int a,int b) {
//	int temp = a;
//	a = b;
//	b = a;
//}
//void swap02(int* a,int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	//ֵ����,�����ı�ʵ��
//	swap01(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	//ָ�봫�ݣ����Ըı�ʵ�ε�ֵ
//	//ָ�봢����ǵ�ַ�����Ժ������ݵ�Ӧ���ǵ�ַ
//	cout << "ָ�봫��cd֮ǰ" << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//	swap02(&c, &d);
//	cout << "ָ�봫��cd֮��" << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//	system("pause");
//	return 0;
//}