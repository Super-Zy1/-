#include<iostream>
using namespace std;
void quicksort(int a[],int left,int right)
{
	if (left < right)                               //递归条件
	{
		int l = left;
		int r = right;
		int key = a[left];
		while (l < r)
		{
			while (l < r&&a[r] >= key)      //右边界值不小于关键字且右边界位置没有越过左边界位置，保持右边界左移
			{
				r--;
			}a[l] = a[r];                   //直至右边界小于关键字时，将左边界值用右边界值覆盖(如果遇到另一情况，左右边界位置相等时，该赋值语句并无实用）
			while (l < r&&a[l] <= key)      //同理，左边界值不大于关键字且左边界位置没有越过右边界位置，保持左边界右移
			{
				l++;
			}a[r] = a[l];                   //同理，将右边界值用左边界值覆盖
		}                                       //整个循环结束后，左右边界应指向同一处
		a[l] = key;                             //将关键字覆盖到边界同时所指的位置，此时关键字左边的全部不比他大，右边的全部不比它小
		quicksort(a, left, l - 1);              //递归
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
