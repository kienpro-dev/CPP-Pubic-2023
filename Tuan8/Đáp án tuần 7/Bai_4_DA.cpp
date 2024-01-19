#include<iostream>
using namespace std;

void giaiHe(float a, float b, float c, float d, float e, float f, float &x, float &y) 
{
    float det = a * e - b * d;
    
    x = (c * e - b * f) / det;
    y = (a * f - c * d) / det;
}

int main()
{
	float a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	giaiHe(a, b, c, d, e, f, x, y);
	if (a * e - b * d != 0)
	{
		cout << "x= " << x << endl << "y= " << y;
	}
	else
	{
		cout << "Ham vo nghiem hoac co vo so nghiem.";
	}
	return 0;
}
