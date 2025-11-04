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
bool kiemTraSoHoanThien(int n) {
    if (n <= 1) {
        return false;
    }
    int tong_uoc = 1; 
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) { 
            tong_uoc += i; 
            if (i * i != n) {
                tong_uoc += n / i;
            }
        }
    }
    return tong_uoc == n;
}
int main()
{	int a,b ;
    a = 10;
	b = 20;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =" << tong(a,b);
	system("pause");
	return 0;
}