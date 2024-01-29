#include <iostream>

using namespace std;

void menu();
void nhapN(int &n);
void nhapMang(int *&a, int n);
void inMang(int *a, int n);
void sort(int *&a, int n, bool isINC);
void kiemTraTonTaiSoNguyen(int *&a, int &n);
void resize(int *&a, int from, int to);

int main(){
	int n;
	int *a;
	int choice;
	do {
		menu();
		cout << "Nhap lua chon: ";
		cin >> choice;
		switch (choice) {
			case 0:
				cout << "Ket thuc chuong trinh...";
				continue;
			case 1:
				nhapN(n);
				break;
			case 2:
				nhapMang(a, n);
				break;
			case 3:
				inMang(a, n);
				break;
			case 4:
				int sx;
				cout << "1. Tang dan \n2. Giam dan \nNhap lua chon: ";
				cin >> sx;
				sort(a, n, sx == 1 ? 1 : 0);
				break;
			case 5:	
				kiemTraTonTaiSoNguyen(a, n);
				break;
			default:
				cout << "Yeu cau khong ton tai! Vui long nhap lai.";
				break;
		}
		system("pause");
		system("cls");
	}
	while (choice);
	delete[] a;
	return 0;
}

void menu() {
	cout << "--------------------------------------------------------" << endl;
	cout << "1. Nhap so nguyen duong n" << endl;
	cout << "2. Nhap mang" << endl;
	cout << "3. Hien thi mang" << endl;
	cout << "4. Sap xep" << endl;
	cout << "5. Kiem tra so nguyen ton tai trong mang" << endl;
	cout << "0. Thoat chuong trinh" << endl;
	cout << "--------------------------------------------------------" << endl;
}

void nhapN(int &n) {
	do {	
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}
	while (!(0 < n && n < 100) && cout << "Khong thoa man. Vui long nhap lai! (0 < n < 100)" << endl);
}

void nhapMang(int *&a, int n) {
	if (n == 0) {
		cout << "Mang khong ton tai. Vui long lua chon 1 de nhap so phan tu mang!";
		return;
	}
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}

void inMang(int *a, int n) {
	if (n == 0) {
		cout << "Mang khong ton tai. Vui long lua chon 1 de nhap so phan tu mang!";
		return;
	}
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}	
	cout << endl;
}

void sort(int *&a, int n, bool isINC) {
	if (n == 0) {
		cout << "Mang khong ton tai. Vui long lua chon 1 de nhap so phan tu mang!";
		return;
	}
	int oriented = isINC ? 1 : -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (*(a + i) * oriented < *(a+ j) * oriented) {
				int tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tmp;
			}
		}
	}
	cout << "Mang sau khi sap xep: ";
	inMang(a, n);
}

void resize(int *&a, int from, int to) {
	int *tmpArray = new int[to];
	for (int i = 0; i < from; i++) {
		tmpArray[i] = a[i];
	}
	delete[] a;
	a = tmpArray;
}

void kiemTraTonTaiSoNguyen(int *&a, int &n) {
	if (n == 0) {
		cout << "Mang khong ton tai. Vui long lua chon 1 de nhap so phan tu mang!";
		return;
	}
	
	int size = n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (*(a + i) == x) {
			for (int j = i; j < n - 1; j++) {
				*(a + j) = *(a + j + 1);
			}
			i--;
			n--;
			found = true;
		}
	}
	resize(a, size, n);
	
	if (!found) {
		resize(a, n, n+1);
		*(a + n) = x;
		n++;
	}
	
	inMang(a, n);
}
