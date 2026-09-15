#include <iostream>
using namespace std;
void rectangle(int rows, int cols) {
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void factorial(int num) {
    int temp = 1;
    for (int i = 1; i <= num; i++)
    {
        temp *= i;
    }
    cout << "Factorial number: " << temp << endl;
}
void SimpleNumber(int num) {
    int temp = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
    if (temp == 2) {
        cout << "Number simple" << endl;
    }
    else {
        cout << "Number not simple" << endl;
    }
}
int Cube(int num) {
    return (num * num * num);
}
void Max(int a, int b) {
    if (a > b)
    {
        cout << "Number: " << a << " is bigger" << endl;
    }
    else if (a < b){
        cout << "Number: " << b << " is bigger" << endl;
    }
    else {
        cout << "Numbers are equal" << endl;
    }
}
bool TryNum(int num) {
    if (num > 0)
    {
        return true;
    }
    else if (num < 0)
    {
        return false;
    }
}
void MinMaxMasive(int masive[], int size) {
    int max = masive[0];
    int min = masive[0];
    cout << "Numbers masive: ";
    for (int i = 0; i < size; i++)
    {
        cout << masive[i] << " ";
        if (max < masive[i])
        {
            max = masive[i];
        }
        if (min > masive[i]) {
            min = masive[i];
        }
        
    }
    cout << endl;
    cout << "Max number in list: " << max << endl;
    cout << "Min number in list: " << min << endl;
}
void Replace(int masive[], int size) {
    cout << "Original masive: ";
    for (int i = 0; i < size; i++)
    {
        cout << masive[i] << " ";
    }
    cout << endl;
    cout << "Reverse masive: ";
    for (int i = size-1; i >= 0; i--)
    {
        cout << masive[i] << " ";
    }
    cout << endl;

}
int SimpleNumbersMasive(int masive[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = 1; j <= masive[i]; j++)
        {
            if (masive[i] % j == 0)
            {
                temp++;
            }
        }
        if (temp == 2) {
            count++;
        }
    }
    return count;

}
int main()
{
    srand(time(0));
    // First task
    int rows = 0;
    int cols = 0;
    cout << "Enter number rows: ";
    cin >> rows;
    cout << "Enter number column: ";
    cin >> cols;
    rectangle(rows, cols);
    // Second task
    int num = 0;
    int num2 = 0;
    cout << "Enter number factorial: ";
    cin >> num;
    factorial(num);
    // Third task
    cout << "Enter number: ";
    cin >> num;
    SimpleNumber(num);
    // Fourth task
    cout << "Enter number: ";
    cin >> num;
    cout << "Cube number: " << Cube(num) << endl;
    // Fiveth task
    cout << "Enter first number: ";
    cin >> num;
    cout << "Enter second number: ";
    cin >> num2;
    Max(num, num2);
    // Sixth task
    cout << "Enter number: ";
    cin >> num;
    cout << "\n1 - True\n0 - False:\n" << endl;
    cout << TryNum(num) << endl;
    // Seventh task
    const int size = 8;
    int masive[size];
    for (int i = 0; i < size; i++)
    {
        masive[i] = rand() % 99;
    }
    MinMaxMasive(masive, size);
    // Eighth task
    int masive2[size];
    for (int i = 0; i < size; i++)
    {
        masive2[i] = rand() % 99;
    }
    Replace(masive2, size);
    // Nineth task
    int masive3[size];
    cout << "Numbers masive: ";
    for (int i = 0; i < size; i++)
    {
        masive3[i] = rand() % 10 + 1;
        cout << masive3[i] << " ";
    }
    cout << endl;
    cout << "Simple numbers in list: " << SimpleNumbersMasive(masive3, size) << endl;

}