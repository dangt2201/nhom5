#include <iostream>

using namespace std;
int tong(int a, int b)
{
	int sum = a + b;
	return sum;
}
int hieu(int a, int b){
	int h = a - b;
	return h;
}
int tich(int a, int b);
float thuong(int a, int b);
void soSanhHaiSo(int a, int b) {
    if (a == b) {
        cout << "a = b" << endl;
    } else if (a > b) {
        cout << "a > b." << endl;
    } else {
        cout << "a < b" << endl;
    }
}
bool ktsht(int n) {
    if (n <= 1) return false;  

    int sum = 0;

    
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main()
{	int a,b ;
    a = 10;
	b = 20;
	int number;
    cout << "Nhap mot so nguyen: ";
    cin >> number;

    if (ktsht(number)) {
        cout << number << " la so hoan thien." << endl;
    } else {
        cout << number << " khong la so hoan thien." << endl;
    }
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =" << tong(a,b);
	cout<<"Hieu =" << hieu(a,b);
	cout<<"\nSo sanh 2 so:" ;
	soSanhHaiSo(a,b);
	system("pause");
	return 0;
}
