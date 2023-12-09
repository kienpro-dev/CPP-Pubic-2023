#include<iostream>
#include<math.h>

using namespace std;

#define SO_THUC 5.5

int main() 
{
	// constant: const, #define
//	int a = 5;
//	const double PI = 3.14;
//	cout << PI << " " <<SO_THUC;
	
//	int a = 5;
//	int b = 5;
//	// if: neu dieu kien trong if dung (true) thi cau lenh trong if duoc thuc thi
//	if(a < b) 
//	{
//		cout << "a > b" << endl;
//		if(a == 5) 
//		{
//			cout << "a = 5" << endl;
//		}
//	}
//	else 
//	{
//		cout << "a >= b" << endl;
//	}
	
//	if(a == 5) 
//	{
//		cout << "a = 5" << endl;
//	}
// 	Toan tu phu dinh: !, Toan tu ket hop: && ||
//	int a;
//	cin >> a;
//	if(a % 2 == 0 && a < 10 || a > 100) 
//	{
//		cout << "a chan" << endl;
//		if(a % 3 == 0)
//		{
//			cout << "a chia het cho 3" << endl;
//		} 
//		else 
//		{
//			cout << "a k chia het cho 3" << endl;
//		}
//	} 
//	else 
//	{
//		cout << "a le" << endl;
//	}
//	int a = 10;
//	if(a % 2 == 0) // TH1
//	{
//		cout << "TH1";
//	}	
//	if(a % 5 == 0) // TH2
//	{
//		cout << "TH2";
//	}
//	if(a % 10 == 0) // TH3
//	{
//		cout << "TH3";
//	}
//	else // TH con lai
//	{
//		cout << "TH con lai";
//	}
	
//	int a,b,c;
//	cin>>a>>b>>c;
//	if (c>=a+b||a>=b+c||b>=a+c)
//	{
//		cout<<"khong the tao thanh 3 canh cua tam giac";
//	} else {
//		cout<<" co the tao thanh 3 canh cua 1 tam giac";
//	}

//	float a, b, c, x1, x2;
//	cin >> a >> b >> c;
//	float delta = pow(b, 2) - 4 * a * c;
//	if (a == 0) {
//		cout << "khong la phuong trinh bac 2.";
//	}
//	if (delta > 0) {
//		x1 = (-b - sqrt(delta)) / (2 * a);
//		x2 = (-b + sqrt(delta)) / (2 * a);
//		cout << "phuong trinh co 2 nghiem phan biet: " << x1 << " va " << x2;
//	} else if (delta == 0) {
//		x1 = -b / (2 * a);
//		cout << "phuong trinh co nghiem kep: " << x1;
//	} else {
//		cout << "phuong trinh vo nghiem";
//	}

	// switch case: so sanh gia tri ==

//	int a;
//	cin >> a;
//	switch(a) {
//		case 1: // if
//			cout << "a = 1" << endl;
//			break;
//		case 2: // else if
//			cout << "a = 2" << endl;
//			break;	
//		default: // else
//			cout << "Khong co a" << endl;
//			break;
//	}

//	Nhap thang trong nam, in ra so ngay cua thang do (switch case), thang 2 mac
// dinh co 28 ngay
	int a;
	cin >> a;
	switch(a){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "31";
			break;
		case 2:
			int year;
			cin >> year;
			if(...) {
				cout << 29;
			} else {
				cout << 28
			}
			break;
		case 4: case 6: case 9: case 11:
			cout << "30";
			break;
		default:
			cout << "Thang khong hop le"
			break;
	}
















	return 0;
}
