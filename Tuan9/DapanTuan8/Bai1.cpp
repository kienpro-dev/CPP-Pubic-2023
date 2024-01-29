#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swapPrime(int *a, int n) {
	int first = 0, last = n - 1;
	bool flag = false;
	
	for (int i = 0; i < n; i++) {
		if (isPrime(*(a + i))) {
			first = i;
			flag = true;
			break;
		}
	}
	
	for (int i = n - 1; i > first; i--) {
		if (isPrime(*(a + i))) {
			last = i;
			break;
		}
	}
	
	if (flag) {
		swap(a + first, a + last);
	}
}

int main(){
	int n;
	cin >> n;
	int *a = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
	swapPrime(a, n);
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
	delete[] a;
	return 0;
}
