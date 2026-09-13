#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int N = 10;
    cout << "First task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i > j) {
                cout << "  ";
            }
            else {
                cout << " +";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Second task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i < j) {
                cout << "  ";
            }
            else {
                cout << " +";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Third task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i < j and i + j < N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Fourth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i > j and i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Fiveth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i > j and i + j > N or i <= j and i + j <= N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sixth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i >= j and i + j <= N or i < j and i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Seventh task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i >= j and i + j <= N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Eighth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i < j and i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Nineth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i + j < N + 1) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "tenth task" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i + j > N) {
                cout << " +";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Eleventh task" << endl;
    int n;
    cout << "Enter a n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        N = n;
        for (int j = 0; j < i * n; j++)
        {
            cout << i;

        }
        cout << endl;
    }
    cout << endl;
    cout << "Thirhtenth task" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j or i + j == 10 - 1) {
                cout << "0 ";
            }
            else {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Fourthtenth task" << endl;
    N = 0;
    for (int i = 10; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            N += i;
            cout << i;

        }
        cout << endl;
    }
    cout << "Sum all numbers: " << N << endl;
    cout << endl;
    cout << "Fivetenth task" << endl;
    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i % 2 == 0) {
                if (j == 8)
                {
                    break;
                }
                else
                {
                    cout << left << setw(2) << i << " ";
                }
            }
            else {
                cout << left << setw(2) << "1 ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sixtenth task" << endl;
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0) {
                cout << left << setw(2) << "11111";
                break;
            }
            else {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    cout << "Sevententh task" << endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "\n______________________________\n" << endl;
    }
    cout << "Eightenth task" << endl;
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    for (a; a <= b; a++)
    {
        if (a % 12 == 0)
        {
            cout << a << " " << endl;
        }
    }
    cout << endl;
    cout << "Ninetenth task" << endl;
    int number;
    cout << "Enter integer number: ";
    cin >> number;
    if (number < 0)
    {
        number = number * -1;
    }
    int sum = 0, count = 0,zeros = 0, numbers = 0;
    while (number > 0)
    {
        numbers = number % 10;
        count++;
        sum += numbers;
        if (numbers == 0)
        {
            zeros++;
        }
        number = number / 10;
    }
    cout << "Count Zero: " << zeros << endl;
    cout << "Summ number: " << sum << endl;
    cout << "Count digit: " << count << endl;
    cout << "Average numbers: " << sum / count << endl;

    cout << "Twentyth task" << endl;
    cout << "Enter integer number: ";
    cin >> number;
    if (number < 0)
    {
        number = number * -1;
    }
    for (number; number > 0; number--)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (number % 2 == 0) {
                if (j % 2 != 0)
                {
                    cout << "***";
                }
                else {
                    cout << "___";
                }
            }
            else {
                if (j % 2 != 0)
                {
                    cout << "___";
                }
                else {
                    cout << "***";
                }
            }
        }
        cout << endl;
    }
}