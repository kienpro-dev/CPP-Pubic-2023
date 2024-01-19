#include <iostream>
using namespace std;

void NHAP(float &x)
{
	cin >> x;
}

float MAX(float a, float b, float c)
{
	float temp = a;
	if (b > temp) temp = b;
	if (c > temp) temp = c;
	
	return temp;
}

float MIN(float a, float b, float c)
{
	float temp = a;
	if (b < temp) temp = b;
	if (c < temp) temp = c;
	
	return temp;
}

int main()
{
	float a, b, c, d, e;
	NHAP(a);
	NHAP(b);
	NHAP(c);
	
	cout << "MAX= " << MAX(a, b, c) <<", MIN= " << MIN(a, b, c) << endl;
	
	NHAP(d);
	NHAP(e);
	
	cout << "MAX= " << MAX(MAX(a, b, c), d, e) <<", MIN= " << MIN(MIN(a, b, c), d, e) << endl;
	
	return 0;
}
