#include<iostream>
using namespace std;

#define tab "\t";

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int CountEven = 0, CountOdd = 0;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] % 2 == 0 ? CountEven++ : CountOdd++;
	}
	int* Even = new int[CountEven];
	int* Odd = new int[CountOdd];
	CountEven = 0, CountOdd = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] % 2 == 0 ? Even[CountEven++] = arr[i] : Odd[CountOdd++] = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < CountEven; i++)
	{
		cout << Even[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < CountOdd; i++)
	{
		cout << Odd[i] << "\t";
	}
	cout << endl;
	delete[] arr;
	delete[] Even;
	delete[] Odd;	
}