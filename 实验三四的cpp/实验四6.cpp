#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	int a = strlen(s);
	for (int i = 0;i < 26;i++)
	{
		counts[i] = 0;
	}
	for (int j = 0;j <a ;j++)
	{
		if (s[j] - 'a' < 26)
		{
			counts[s[j] - 'a']++;
		}
		else counts[s[j] - 'A']++;
	}
}
int main()
{
	char  s[100]; int counts[26];
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0;i <26;i++)
	{
		if (counts[i])
		{
			cout << static_cast<char>(i + 'a') << ":" << counts[i] << "time" << endl;
		}
	}
	return 0;
}
