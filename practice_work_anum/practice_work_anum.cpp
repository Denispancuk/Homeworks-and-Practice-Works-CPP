#include <iostream>
using namespace std;

int main()
{
	// First task
	int i = 14;
	while (i <= 123)
	{
		cout << i << endl;
		i++;
	}
	cout << endl;
	// Second task
	i = -20;
	while (i <= 100)
	{
		if (i > 0 and i % 2 != 0)
		{
			cout << i << endl;

		}
		i++;
	}
	// Third task
	int counter = 0;
	int Num = 0;
	int N;
	cout << "Enter number numbers: ";
	cin >> N;
	while (N != 0)
	{
		cout << "Enter number: ";
		cin >> Num;
		if (Num < 0)
		{
			counter++;
		}
		N--;
	}
	cout << "Negative count numbers: " << counter << endl;
	// Fourth task
	i = 8;
	float sum = 0;
	float dobutok = 0;
	while (i != 0)
	{
		cout << "Enter number: ";
		cin >> Num;
		if (i == 8)
		{
			dobutok += Num;
		}
		else {
			dobutok *= Num;
		}
		sum += Num;
		i--;
	}
	cout << "product: " << dobutok << endl;
	cout << "Average: " << sum / 8 << endl;
	i = 0;
	// Fiveth task
	do
	{
		if (i % 2 != 0) {
			cout << i << " ";
		}
		i++;
	} while (i <= 100);
	i = 0;
	dobutok = 0;
	cout << endl;
	// Sixth task
	do
	{
		cout << "Enter number: ";
		cin >> Num;
		if (i == 0) {
			dobutok += Num;
		}
		else {
			dobutok *= Num;
		}
		i++;
	} while (i != 5);
	cout << "The product all numbers: " << dobutok << endl;
	// Seventh task
	sum = 0;
	for (int i = 0; i < 50; i++)
	{
		if (i % 4 == 0) {
			sum += i;
		}
	}
	cout << "Sum numbers : " << sum << endl;
	i = 0;
	sum = 0;
	while (i < 50)
	{
		if (i % 4 == 0) {
			sum += i;
		}
		i++;
	}
	cout << "Sum numbers : " << sum << endl;
	i = 0;
	sum = 0;
	do
	{
		if (i % 4 == 0) {
			sum += i;
		}
		i++;
	} while (i < 50);
	cout << "Sum numbers : " << sum << endl;
	// Eigth task
	cout << "Enter number range: ";
	cin >> Num;
	for (int i = 0; i <= Num; i++)
	{
		cout << i << " ";
	}
	// Nineth task
	int Num2;
	cout << "Enter first number range: ";
	cin >> Num;
	cout << "Enter second number range: ";
	cin >> Num2;
	if (Num > Num2) {
		cout << "\nAll Even numbers:" << endl;
		for (int i = Num2; i <= Num; i++)
		{
			if (i % 2 == 0) {
				cout << i << " ";
			}
		}
		cout << "\nAll Odd numbers:" << endl;
		for (int i = Num2; i <= Num; i++)
		{
			if (i % 2 != 0) {
				cout << i << " ";
			}
		}
		cout << endl;
		cout << "\nAll numbers multiply 7:" << endl;
		for (int i = Num2; i <= Num; i++)
		{
			if (i % 7 == 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	else if (Num < Num2) {
		cout << "\nAll Even numbers:" << endl;
		for (int i = Num; i <= Num2; i++)
		{
			if (i % 2 == 0) {
				cout << i << " ";
			}
		}
		cout << "\nAll Odd numbers:" << endl;
		for (int i = Num; i <= Num2; i++)
		{
			if (i % 2 != 0) {
				cout << i << " ";
			}
		}
		cout << endl;
		cout << "\nAll numbers multiply 7:" << endl;
		for (int i = Num; i <= Num2; i++)
		{
			if (i % 7 == 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	// Twelveth task
	Num = 0, Num2 = 0, sum = 0;
	cout << "Enter first number range: ";
	cin >> Num;
	cout << "Enter second number range: ";
	cin >> Num2;
	if (Num > Num2) {
		cout << "\nSum all numbers: ";
		for (int i = Num2; i <= Num; i++)
		{
			sum += i;
		}
	}
	else if (Num < Num2) {
		cout << "\nSum all numbers: ";
		for (int i = Num; i <= Num2; i++)
		{
			sum += i;
		}
	}
	cout << sum << endl;
	// Thitdtenth task
	sum = 0;
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
