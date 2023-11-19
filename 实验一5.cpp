#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float T, F;
	cout << "请输入一个华氏温度F" << endl;
	cin >> F;
	T= (F - 32) / 1.8;
	cout << fixed << setprecision(2) << T<<endl;
	
	return 0;
}