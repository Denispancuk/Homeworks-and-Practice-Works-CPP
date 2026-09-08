#include <iostream>
using namespace std;
int main()
{
    // First Task
    float a, b, c;
    cout << "Enter first side rectangle: ";
    cin >> a;
    cout << "Enter parallel side rectangle: ";
    cin >> b;
    if (a == b)
    {
        cout << "Its Square!" << endl;
    }
    else {
        cout << "Its Rectangle!" << endl;
    }
    // Second Task
    // The solution is whether a child can be admitted to kindergarten or school
    int babyAge;
    cout << "Enter Baby Age: ";
    cin >> babyAge;
    if (babyAge > 0 and babyAge < 6)
    {
        cout << "the child can attend kindergarten" << endl;
    }
    else if(babyAge == 6 or babyAge == 7) {
        cout << "The child can attend school" << endl;
    }
    else {
        cout << "The child cannot study anywhere" << endl;
    }
    // Third Task
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a < 0 and b < 0 and c > 0 or b < 0 and c < 0 and a > 0 or a < 0 and c < 0 and b > 0)
    {
        cout << "Two negative numbers" << endl;
    }
    else {
        cout << "Not two negative numbers" << endl;
    }
    // Fourth Task
    cout << "Enter number: ";
    cin >> a;
    if (a >= 2 and a <= 5 or a >= -1 and a <= 1) {
        cout << "The number belongs to the interval" << endl;
    }
    else {
        cout << "The number does not belongs to the interval" << endl;
    }
    // Fiveth Task
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a == b and c != a or b == c and b != a or a == c and a != b)
    {
        cout << "Only two numbers are equal to each other" << endl;
    }
    else {
        cout << "Not only two numbers are equal to each other" << endl;
    }
    // Sixth Task
    int a1, b1, c1;
    cout << "Enter first number: ";
    cin >> a1;
    cout << "Enter second number: ";
    cin >> b1;
    cout << "Enter third number: ";
    cin >> c1;
    if (a1 % 2 != 0 and b1 % 2 != 0 and c1 % 2 != 0)
    {
        cout << "all numbers odd" << endl;
    }
    else {
        cout << "not all numbers odd" << endl;
    }
    // Seventh Task
    cout << "Enter first number: ";
    cin >> a1;
    cout << "Enter second number: ";
    cin >> b1;
    if (a1 != b1)
    {
        a1 = a1 + b1;
        b1 = a1 - b1;
        a1 = a1 - b1;
        cout << "Successful change" << endl;
    }
    // Eighth Task
    cout << "Enter number[a > 99 and a < 1000]: ";
    cin >> a1;
    int a1num1, a1num2, a1num3;
    a1num1 = a1 / 100;
    a1num2 = (a1 / 10) % 10;
    a1num3 = a1 % 10;
    cout << a1 << " = 3 numbers , summ = " << a1num1 + a1num2 + a1num3 << ", " << a1num1 << "  " << a1num3 << endl;
    // Nineth Task
    int hours, minutes, seconds;
    cout << "Enter a hour: ";
    cin >> hours;
    cout << "Enter a minute: ";
    cin >> minutes;
    cout << "Enter a second: ";
    cin >> seconds;
    if ((hours >= 0 and hours <= 23) and (minutes > 0 and minutes <= 59) and (seconds > 0 and seconds <= 59))
    {
        cout << "correct entry" << endl;
    }
    else {
        cout << "not correct entry" << endl;
    }
    // Tenth Task
    cout << "Enter a hour: ";
    cin >> hours;
    if (hours >= 4 and hours <= 11)
    {
        cout << "Good morning" << endl;
    }
    else if (hours >= 12 and hours <= 17)
    {
        cout << "Good day" << endl;
    }
    else if (hours >= 18 and hours <= 22)
    {
        cout << "Good evening" << endl;
    }
    else if (hours >= 23 and hours < 24 or hours >= 0 and hours <= 3)
    {
        cout << "Good night" << endl;
    }
    else {
        cout << "Not correct hour" << endl;
    }
    // Eleventh Task
    cout << "Enter first number: ";
    cin >> a1;
    cout << "Enter second number: ";
    cin >> b1;
    cout << "Enter third number: ";
    cin >> c1;
    if (a1 < b1 and a1 < c1) {
        cout << "Minimal number: " << a1 << endl;
    }
    else if (b1 < a1 and b1 < c1) {
        cout << "Minimal number: " << b1 << endl;
    }
    else if (c1 < a1 and c1 < b1) {
        cout << "Minimal number: " << c1 << endl;
    }
    else {
        cout << "cannot be determined" << endl;
    }
}
