#include <iostream>
#include "student.h"             //不要漏写此行，否则编译通不过
using namespace std;
int main()
{
	Student stud1;                //定义对象
	stud1.set_value(007, "tcg", 'm');
	stud1.display();              //执行stud对象的display函数
	return 0;
}
