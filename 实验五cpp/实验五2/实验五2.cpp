#include <iostream>
#include "student.h"             //��Ҫ©д���У��������ͨ����
using namespace std;
int main()
{
	Student stud1;                //�������
	stud1.set_value(007, "tcg", 'm');
	stud1.display();              //ִ��stud�����display����
	return 0;
}
