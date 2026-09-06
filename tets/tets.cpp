#include <iostream>
using namespace std;

int main()
{
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
