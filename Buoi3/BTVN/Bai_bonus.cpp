#include<iostream>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t
    while(t--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << 4*a*b << endl;
        }
        else if (2*a <= b)
        {
            cout << b*b << endl;
        }
        else if (2*b <= a)
        {
            cout << a*a << endl;
        }
        else if(2*a > b and a < b)
        {
            cout << 4*a*a << endl;
        }
        else if(2*b > a and b < a)
        {
            cout << 4*b*b << endl;
        }
    }
}
