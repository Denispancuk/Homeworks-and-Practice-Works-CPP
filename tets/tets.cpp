#include <iostream>
using namespace std;

int main()
{
	int Num2, Num, sum = 0;
	while (true)
	{
		cout << "Enter number: ";
		cin >> Num;
		if (Num == 0)
		{
			break;
		}
		else {
			sum += Num;
		}
	}
	cout << "Sum all numbers: " << sum << endl;
}
