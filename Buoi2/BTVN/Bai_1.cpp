#include<iostream>

using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > 0 && a < 31 && b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12 && c > 0)

  {
    cout << " Ngay hom truoc : " << (a - 1) << " /" << b << " /" << c << endl;
    cout << " Ngay hom nay : " << a << "/" << b << "/" << c << endl;
    cout << " Ngay hom sau : " << (a + 1) << "/" << b << "/" << c << endl;
  } else if (a > 0 && a < 30 && b == 4 || b == 6 || b == 9 || b == 11 && c > 0) {

    cout << " Ngay hom truoc : " << (a - 1) << " /" << b << " /" << c << endl;
    cout << " Ngay hom nay : " << a << "/" << b << "/" << c << endl;
    cout << " Ngay hom sau : " << (a + 1) << "/" << b << "/" << c << endl;

  } else if (a > 0 && a < 28 && b == 2 && c % 4 != 0) {
    cout << " Ngay hom truoc : " << (a - 1) << " /" << b << " /" << c << endl;
    cout << " Ngay hom nay : " << a << "/" << b << "/" << c << endl;
    cout << " Ngay hom sau : " << (a + 1) << "/" << b << "/" << c << endl;

  } else {
    cout << " Ngay nay khong ton tai " << endl;
  }
  return 0;
}
