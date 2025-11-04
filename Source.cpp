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
int main()
{	int a,b ;
    a = 10;
	b = 20;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =" << tong(a,b);
	cout<<"Hieu =" << hieu(a,b);
	cout<<"\nSo sanh 2 so:" <<soSanhHaiSo(a,b);
	system("pause");
	return 0;
}