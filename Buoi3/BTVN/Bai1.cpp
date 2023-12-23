#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    cout << "Bang cuu chuong cua " << n << ":\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << n << "*"  << i << "="<< n * i << endl;
    }
}
