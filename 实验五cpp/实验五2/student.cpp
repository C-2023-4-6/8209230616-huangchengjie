#include <iostream>
#include "student.h"             //不要漏写此行，否则编译通不过
using namespace std;
void Student::set_value(int num_t,const  char* name_t, char sex_t)
{
	num = num_t;
	memcpy(name, name_t,20);
	
	this->sex = sex_t;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
	cout << "name：" << name << endl;
	//for (int i = 0;i < 20;i++)
	//{
	//	cout << *(name+i);
	//}
    cout << "sex：" << sex << endl;
}
