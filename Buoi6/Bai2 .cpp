#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n, m;
	cout << "Nhap n: "; cin >> n;
	int a[n][n];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			bool flag = true;
			if (a[i][j] < 2) flag = false;
			else  
				for (int k = 2 ; k <= sqrt(a[i][j]); k++) 
					if (a[i][j] % k == 0) flag = false;
			
			if (flag) {
				cout << a[i][j] << " ";
				sum += a[i][j];
			}
		}
	}
	cout << endl << sum;
	return 0;
}
