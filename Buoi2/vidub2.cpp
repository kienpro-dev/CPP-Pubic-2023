#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

#define PI 3.14

int main() {
  // Hang so: PI. Khi khao bao nen viet hoa toan bo chu cai
  //	const double SO_THUC = 5.5;
  //	cout << PI;
  // Toan tu phu dinh: !
  // if(dieu_kien (dung hoac sai))
  //	if(5 >= 6) 
  //	{
  //		cout << "5 > 3" << endl; // 1
  //		if() {
  //			
  //		}
  //	} 
  //	else if(3 < 1) 
  //	{
  //		cout << "4 > 3" << endl; // 2
  //	}
  //	else if(3 == 3)
  //	{
  //		cout << "6 > 3" << endl; // 3
  //	}
  //	else
  //	{
  //		cout << "5 <= 3" << endl; // 4
  //	}

  //	if(5 > 1) {
  //		cout << "5 > 1" << endl;
  //	} else if(3 > 2){
  //		cout << "3 > 2" << endl;
  //	}
//  int a;
//  cout << a;
//
// 2 toan tu: && || 
//  if (5 > 1 && 5 < 7) {
//    cout << "5 > 1" << endl;
//  }
//  if (3 == 3) {
//    cout << "3 > 2" << endl;
//  }
//	float a, b, c;
//	cin >> a >> b >> c;
//	if (a + b > c && a + c > b && b + c > a) 
//	{
//		cout << "La tam giac";
//	} 
//	else 
//	{
//		cout << "Khong la tam giac";
//	}	

	float a, b, c;
	cin >> a >> b >> c;
	if( a == 0 && b == 0 && c == 0){
		cout << "Phuong trinh vo so nghiem";
	}
	else if( a == 0 && b == 0 && c != 0){
		cout << "Phuong trinh vo nghiem";
	}
	else if( a == 0 && b != 0 && c != 0){
		cout << "Nghiem cua phuong trinh la: x= " << -c/b;
	}
	else{
		
		float delta = pow(b,2)-(4*a*c);
		if(delta < 0){
			cout << "Phuong trinh vo nghiem";
		}
		else if(delta == 0){
			cout << "Phuong trinh co nghiem kep: x= " << -b/(2*a);
		}
		else{
			cout << "Nghiem thu nhat cua phuong trinh la: x= " << (-b + sqrt(delta))/(2*a) << endl;
			cout << "Nghiem thu hai cua phuong trinh la: x= " << (-b - sqrt(delta))/(2*a);
		}
	}

	return 0;
}
