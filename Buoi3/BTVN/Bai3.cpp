#include<iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int cnt = 0;
    int S = 0;
    for(int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            cnt++;
            S += i;
        }
    }
    cout << x << " co " << cnt << " uoc duong\n";
    cout << "Tong cua chung la: " << S;
}

