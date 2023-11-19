#include<iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, j = 0, k = 0;                         //分别定义英文字母，数字，其他字符，空格的数量
	char c;
	cout << "请随意输入，回车为停" << endl;
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
 cout << "英文字母有：" << x << "数字有：" << y << "其他字符有：" << j << "空格数量有：" << k << endl;
 return 0;
}