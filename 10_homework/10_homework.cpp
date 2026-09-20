#include <iostream>
using namespace std;
void Initarray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;

	}
}
void Initarray2(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;

	}
}
void Initarray3(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 + 1;

	}
}
void Showarray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";

	}
}
void sortByAsc(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void sortByDesc(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void MainSort(int arr[], int size, int parameter = 1) {
	if (parameter == 0)
	{
		sortByAsc(arr, size);
	}
	else if (parameter == 1)
	{
		sortByDesc(arr, size);
	}
	else {
		sortByDesc(arr, size);
	}
}
int SearchIndexLeft(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
}
int SearchIndexRight(int arr[], int size) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
}
void SortDiapazone(int arr[], int size, int LeftIndex, int RightIndex) {
	int temp;
	for (int i = LeftIndex + 1; i < RightIndex; i++)
	{
		for (int j = RightIndex - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void MixedUpArray(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 3; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int SearchNumber(int arr[], int size, int RandomNum) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == RandomNum)
		{
			return i;
		}

	}
}
void LeftSort(int arr[], int size, int IndexNum) {
	int temp;
	for (int i = IndexNum; i <= 0; i--)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void RightSort(int arr[], int size, int IndexNum) {
	int temp;
	for (int i = IndexNum; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	//First task
	srand(time(0));
	const int size = 10;
	int array[size];
	int parameter;
	Initarray(array, size);
	cout << "Enter number parameter:\n0 - By ASC\n1 - By Desc\nYou answer: ";
	cin >> parameter;
	cout << "Original list: ";
	Showarray(array, size);
	cout << endl;
	MainSort(array, size, parameter);
	cout << "Sorted list: ";
	Showarray(array, size);
	cout << endl;
	cout << endl;
	//Second task
	int array2[size];
	Initarray2(array2, size);
	int leftIndex = SearchIndexLeft(array2, size), RightIndex = SearchIndexRight(array2, size);
	cout << "Original list: ";
	Showarray(array2, size);
	cout << endl;
	SortDiapazone(array2, size, leftIndex, RightIndex);
	cout << "Sorted list: ";
	Showarray(array2, size);
	cout << endl;
	cout << endl;
	//Third task
	int array3[size];
	Initarray3(array3, size);
	int RandomNumber = rand() % 20 + 1;
	cout << "Original list: ";
	Showarray(array3, size);
	cout << endl;
	cout << "Mixed up list: ";
	MixedUpArray(array3, size);
	Showarray(array3, size);
	cout << endl;
	cout << "Random number: " << RandomNumber << endl;
	int RandomNumberIndex = SearchNumber(array3, size, RandomNumber);
	LeftSort(array3, size, RandomNumberIndex);
	RightSort(array3, size, RandomNumberIndex);
	cout << "Sort list by criteria: ";
	Showarray(array3, size);
	cout << endl;
}