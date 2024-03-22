//Arrays
#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };

	for (int i = 0; i < SIZE; i++)
	{
	 cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = SIZE -1  ; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = SIZE + 2; i <= 0; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
	cout << (double)sum/SIZE << endl;
}
