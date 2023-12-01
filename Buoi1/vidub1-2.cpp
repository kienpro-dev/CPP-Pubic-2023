// 1. khai bao thu vien
#include<iostream>
using namespace std;
// 2. Dinh nghia ham main()
int main()
{
	// in ra man hinh: cout <<
	// xuong dong: endl
//	cout << "Hello " << endl;
//	cout << "Word";
	
	// Kieu du lieu: so nguyen, so thuc, kieu luan ly, kieu ki tu
	// so nguyen: short, int, long, long long, ...
	// so thuc: float, double, ...
	// kieu ki tu: char
	// kieu luan ly: bool (true, false)
	// kieu chuoi: string
//	bool a = true; // false
//	cout << "a = " << a;

	// nhap du lieu: cin >>
	// truoc khi nhap du lieu bien thi phai khai bao
//	int a, b;
//	int c;
//	cout << "Nhap a, b, c: ";
//	cin >> a >> b >> c;
////	cin >> b;
////	cin >> c;
//	cout << a << " " << b << " " << c;

	// ki tu dac biet trong c++: \n , \t, \\, \"
	// \n: tuong tu endl
//	cout << "Hello \n World";
	// \t: 1 dau tab = 4 dau cach;
//	cout << "Hello \t World";
	// \\: in ra dau \,
//	cout << "Hello \\ World";
//	cout << "Hello \"world";

	// toan tu: +, -, *, /, %, =, ==, >=, <=, >, <
//	int a = 5;
//	int b = 2;
//	cout << a + b << endl;
//	cout << a - b << endl;
//	cout << a / b << endl;
//	cout << a * b << endl;
//	cout << a % b << endl;
	
//	bool a = 5 > 5;

	// nhap vao 2 so nguyen, in ra ket qua: + - * / % 
	int a, b;
	cout << " Nhap a, b: ";
	cin >> a >> b;
	cout << a+b << endl;
	cout << a-b << endl;
	cout << (float) a/b << endl;
	cout << a%b << endl;

	return 0;
}
