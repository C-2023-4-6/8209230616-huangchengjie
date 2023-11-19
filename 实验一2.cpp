#include<iostream>
#define pai 3.14
using namespace std;
int main()
{
	double r, h,V;
	cout << "请分别输入圆锥的半径和高" << endl;
	cin >> r >> h;
	V = (pai * r * r * h) / 3;
	cout << "该圆锥的体积=" << V << endl;
	return 0;
}