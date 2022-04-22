#include <iostream>
#define MAX 10
using namespace std;

void bubble_sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				int t = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = t;
			}
		}
	}
}
int main()
{
	int arr[MAX] = { 10, 2, 6, 9, 4, 1, 8, 3, 5, 7 };

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	bubble_sort(arr, MAX);

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}