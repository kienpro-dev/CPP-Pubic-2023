#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int cntEven = 0;
    int sumEven = 0;
    int cntOdd = 0;
    int diffOdd = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 2 == 0) {
            	cntEven++;
            	sumEven += a[i][j];
			} else {
				if (cntOdd == 0) {
					diffOdd = a[i][j];
					cntOdd++;
				} else {
    				diffOdd -= a[i][j];
    				cntOdd++;
				}
			}
        }

    }

	cout << cntEven << " " << sumEven << endl;
	cout << cntOdd << " " << diffOdd;
    return 0;
}
