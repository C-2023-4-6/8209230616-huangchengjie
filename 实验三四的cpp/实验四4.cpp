#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i, j,k;
	i = j = k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else list3[k++] = list2[j++];
	}
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
}
int main()
{
	int m,n;
	 int list1[80];int list2[80];int list3[80];
	cout << "Enter list1:";
	cin >> m;
	for (int i = 0;i < m;i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> list2[i];
	}
	merge(list1, m, list2, n, list3);
	for (int i = 0;i < m+n;i++)
	{
		cout << list3[i] << " ";
	}
	return 0;
}
