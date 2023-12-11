#include<iostream>
using namespace std;

/*int indexOf(const char s1[], const char s2[])
{
	int a = strlen(s1);int b = strlen(s2);  //×Ö·ûÊı
	int j,k,n,i;
	bool s3[20] = {0};
	for (i = 0;i < b - a + 1;i++)
	{
		for (j = 0, k = i;(j < a) && k < (i + a);j++, k++)
		{
			if (s1[j] == s2[k])
			{
				n = i;
				s3[j] = 1;
			}
		}

		int m = 0;
		for (int z = 0;z < a;z++)
		{
			if (s3[z] == 0 && i == b - a)
			{
				return -1;
				break;
			}
			else if (s3[z])
			{
				m++;
			}
		}
		if (m == a)
		{
			return n;
		}
	}
}
*/
int indexOf(const char s1[], const char s2[])
{
	int a = strlen(s1);int b = strlen(s2);
	int c = -1;
	for (int i = 0;i < b-a+1 ;i++)
	{
		int m = 0;
		int n = i;
		while (s1[m] == s2[n])
		{
			m++ ;n++;
			if (m == a)
			{
				c = i;
				cout << " indexOf('\34' " << s1 << " '\34' , '\34' " << s2 << " '\34')is " << c << endl;
			}
		}
		continue;
	}
	if (c == -1)
	{
		cout << " indexOf('\34' " << s1 << " '\34' , '\34' " << s2 << " '\34')is " << c << endl;
	}
	return 0;
}

int main()
{
	char s1[20];char s2[20];
	cout << "Enter the first string:";
	cin.getline(s1, 20);
	cout << "Enter the second string:";
	cin.getline(s2, 20);
	indexOf(s1, s2);
	return 0;
}