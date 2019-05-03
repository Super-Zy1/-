#include<iostream>
using namespace std;
void quicksort(int a[],int left,int right)
{
	if (left < right)
	{
		int l = left;
		int r = right;
		int key = a[left];
		while (l < r)
		{
			while (l < r&&a[r] >= key)
			{
				r--;
			}a[l] = a[r];
			while (l < r&&a[l] <= key)
			{
				l++;
			}
		}
		a[r] = a[l];
		a[l] = key;
		quicksort(a, left, l - 1);
		quicksort(a, l + 1, right);
	}
}
int main()
{
	int a[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		a[i] =10-i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] <<' ';
	}
	cout << endl;
	quicksort(a, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] <<' ';
	}
}
