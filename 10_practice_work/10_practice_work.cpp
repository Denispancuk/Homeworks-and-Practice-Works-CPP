#include <iostream>
using namespace std;
int Stypin(int number, int step) {
	if (step == 1) {
		return number;
	}
	step--;
	return number * Stypin(number, step);
}
int Stars(int N) {
	if (N <= 0) {
		return '*';
	}
	cout << '*';
	N--;
	Stars(N);
}
int Summ(int a, int b) {
	if (a > b)
	{
		if (a == b)
		{
			return b;
		}
		return b + Summ(a, b + 1);
	}
	else
	{
		if (a == b)
		{
			return a;
		}
		return a + Summ(a + 1, b);
	}
}

void InitArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int SumMinNum10(int arr[], int size, int current_index = 0) {
	int sum = 0;
	static int min = 100000002;
	static int Best_Index = -1;
	for (int i = 0; i < 10; i++) {
		if (size < 10) {
			min = 100000002;
			int finalIndx = Best_Index;
			Best_Index = 0;
			return finalIndx;
		}
		sum += arr[i];
	}
	if (sum < min) {
		min = sum;
		Best_Index = current_index;
	}
	return SumMinNum10(arr + 1, size - 1, current_index + 1);
}
	
int hanoi(int n, int from, int to, int zapas) {
	if (n == 1) {
		cout << "Move disk 1 from " << from << " to  " << to << endl;
		return 0;
	}
	hanoi(n - 1, from, zapas, to);
	cout << "Move disk " << n << " from " << from << " to  " << to << endl;
	hanoi(n - 1, zapas, to, from);
}
int main()
{
	srand(time(0));
	/*First task*/
	//int number, step;
	//cout << "Enter number: ";
	//cin >> number;
	//cout << "Enter step: ";
	//cin >> step;
	//cout << "Product number: " << Stypin(number, step) << endl;
	////Second task
	//int N;
	//cout << "Enter number stars: ";
	//cin >> N;
	//Stars(N);
	//cout << endl;
	///*Third task*/
	//int a = 5, b = 1;
	//cout << "Enter first number diapazone: ";
	//cin >> a;
	//cout << "Enter second number diapazone: ";
	//cin >> b;
	//cout << "Sum all numbers diapazone: " << Summ(a, b) << endl;
	/*Fourth task*/
	const int size = 100;
	int arr[size];
	InitArr(arr, size);
	ShowArr(arr, size);
	cout << endl;
	cout << endl;
	cout << SumMinNum10(arr, size) << endl; 
	//Fiveth task 
	hanoi(3, 1, 2, 3);
}