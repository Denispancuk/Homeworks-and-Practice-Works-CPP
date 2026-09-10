#include <iostream>
using namespace std;
int main()
{
    // First task
    const int size = 10;
    /*int masive[size];
    int dobutok = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> masive[i];
    }
    cout << "Masive numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << masive[i] << " ";
    }
    cout << endl;
    cout << "Product number:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (i == 0) {
            dobutok += masive[i];
        }
        else {
            dobutok *= masive[i];
        }
    }
    cout << dobutok << endl;
    cout << endl;*/
    // Second task
    const int SIZE = 7;
    int positive = 0, negative = 0;
    int numbers[SIZE] = { -10,-2,0,12,47,24,-3 };
    cout << "Masive numbers:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] > 0) {
            positive++;
        }
        else if (numbers[i] < 0) {
            negative++;
        }
        cout << numbers[i] << " ";
    }
    cout << "\nPositive: " << positive << "\nNegative: " << negative << endl;
    // Third task
    long number[SIZE] = { -10,-2,0,12,4237,24,-3 };
    positive = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] % 2 == 0) {
            positive += numbers[i];
        }
    }
    cout << "Sum Even numbers: " << positive;
    cout << endl;
    cout << endl;
    cout << endl;
    // Fourth task
    int FoutrhNumbers[size];
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (i == 0) {
            FoutrhNumbers[i] = 2;
        }
        else {
            FoutrhNumbers[i] = FoutrhNumbers[i - 1] * 2;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << FoutrhNumbers[i] << " ";
    }
    cout << endl;
    cout << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << FoutrhNumbers[i] << " ";
    }
    // Fiveth task
    int arr[SIZE] = { -10,-2,0,-12,-47,-24,-3 };
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i < 0]) {
            arr[i] = arr[i] * -1;
        }
    }
    cout << "List but not negative numbers: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}