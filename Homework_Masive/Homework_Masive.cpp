#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "First task" << endl;
    int n;
    int N;
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
    cout << "Second task" << endl;
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
    cout << "Third task" << endl;
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
    cout << "Fourth task" << endl;
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
    cout << "Fiveth task" << endl;
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
    cout << "Sixth task" << endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "\n______________________________\n" << endl;
    }
    cout << "Seventh task" << endl;
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
    cout << "Eighth task" << endl;
    int sum[12];
    for (int i = 0; i <= 11; i++)
    {
        cout << "Enter profit for " << i+1 << " month: ";
        cin >> sum[i];
    }
    int first, second;
    cout << "Enter start diapazone: ";
    cin >> first;
    cout << "Enter end diapazone: ";
    cin >> second;
    int max = sum[first-1];
    int min = sum[first-1];
    int MaxMonth = first;
    int MinMonth = first;
    for (first = first-1; first < second; first++)
    {
        if (sum[first] > max)
        {
            max = sum[first];
            MaxMonth = first + 1;
        }
        if (sum[first] < min)
        {
            min = sum[first];
            MinMonth = first + 1;
        }
    }
    cout << "Max profit month: " << MaxMonth << endl;
    cout << "Max profit: " << max << endl;
    cout << "Min profit month: " << MinMonth << endl;
    cout << "Min profit: " << min << endl;
}
