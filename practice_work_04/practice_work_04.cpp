#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	// First task
	while (i <= 100)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;
	i = 1;
	// Second task
	while (i <= 200) {
		i++;
		if (i % 2 == 0 and i > 0)
		{
			cout << i << " ";
		}

	}
	cout << endl;
	// Third task
	int N;
	float SumAll = 0;
	cout << "Enter a N: ";
	cin >> N;
	while (N > 0)
	{
		int UserNum;
		cout << "Enter a number: ";
		cin >> UserNum;
		if (UserNum % 2 == 0) {
			SumAll += UserNum;
		}
		N -= 1;
	}
	cout << "Sum all: " << SumAll << endl;
	// Fourth task
	int hour;
	cout << "Enter a number hour 1-24: ";
	cin >> hour;
	int sumAllHours = 0;
	for (; hour > 0; hour--)
	{
		sumAllHours += hour;
	}
	cout << "Sum all hours: " << sumAllHours << endl;
	// Five task
	int numbers = 0;
	int SumAllFive = 0;
	while (true)
	{
		cout << "Enter a number to summ: ";
		cin >> numbers;
		if (numbers == 0)
		{
			cout << "Summ all numbers: " << SumAllFive;
			break;
		}
		SumAllFive += numbers;
	}
}