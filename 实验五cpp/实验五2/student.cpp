#include <iostream>
#include "student.h"             //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::set_value(int num_t,const  char* name_t, char sex_t)
{
	num = num_t;
	memcpy(name, name_t,20);
	
	this->sex = sex_t;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
	cout << "name��" << name << endl;
	//for (int i = 0;i < 20;i++)
	//{
	//	cout << *(name+i);
	//}
    cout << "sex��" << sex << endl;
}
