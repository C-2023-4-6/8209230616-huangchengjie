#include<cmath>
#include "mytriangle.h"


bool is_valid(double side1, double side2, double side3)             //判断三角形边长是否合法
{
	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
	{
		return 1;
	}
	return 0;
}
double  _area(double side1, double side2, double side3)
{
	double S, s;
	s = (side1 + side2 + side3) / 2;
	S = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return S;
}