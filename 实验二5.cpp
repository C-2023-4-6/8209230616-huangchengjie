#include<iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, j = 0, k = 0;                         //�ֱ���Ӣ����ĸ�����֣������ַ����ո������
	char c;
	cout << "���������룬�س�Ϊͣ" << endl;
    while ((c = getchar()) != '\n')
    {
		if (c >= 'a' && c <= 'z'||c>='A'&&c<='Z')
		{
			x += 1;
		}
	
		else if (c >= '0' && c <= '9')
		 {
			 y += 1;
	     }
		 
		else if(c == ' ')
		 {
			 k += 1;
		 }
		else
		{ 
			j += 1; 
		}
	}
 cout << "Ӣ����ĸ�У�" << x << "�����У�" << y << "�����ַ��У�" << j << "�ո������У�" << k << endl;
 return 0;
}