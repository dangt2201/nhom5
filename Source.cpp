#include <iostream>

using namespace std;
int tong(int a, int b)
{
	int sum = a + b;
	return sum;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{	int a,b ;
    a = 10;
	b = 20;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =" << tong(a,b);
	system("pause");
	return 0;
}