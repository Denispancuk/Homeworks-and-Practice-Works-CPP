#include <iostream>
using namespace std;

int main()
{
    // !!! Перше завдання
    int Diagonal;
    const float floatInCM = 2.54;
    float result;
    cout << "Enter a number inch in TV: ";
    cin >> Diagonal;
    result = Diagonal * floatInCM;
    cout << "Result: " << result << endl;
    // !!! Друге завдання
    int hamsterFood;
    float resultSecond;
    cout << "Enter a grams food hamster: ";
    cin >> hamsterFood;
    resultSecond = (hamsterFood * 30) / 1000;
    cout << "Result: " << resultSecond << endl;
    // !!! Третє завдання
    int a, b, c;
    cout << "Enter a first num: " << endl;
    cin >> a;
    cout << "Enter a second num: " << endl;
    cin >> b;
    cout << "Enter a third num: " << endl;
    cin >> c;
    cout << "You enter: " << a << ", " << b << ", " << c << endl;
    cout << "Sum all numbers: " << a + b + c << endl;
    // !!! Четверте завдання
    float firstNum, SecondNum;
    cout << "Enter a first num: " << endl;
    cin >> firstNum;
    cout << "Enter a second num: " << endl;
    cin >> SecondNum;
    cout << "Average two numbers: " << (firstNum + SecondNum) / 2;
    // !!! П'яте завдання
    float kilometers;
    cout << "Enter a count kilometers: " << endl;
    cin >> kilometers;
    cout << "Kilometers in meters: " << (kilometers)*1000;
    // !!! Шосте завдання
    const float apples = 5.5;
    const float bananas = 7.99;
    const float peaches = 14.78;
    const float cucumbers = 11;
    int CountApples, CountBananas, CountPeaches, CountCucumbers;
    cout << "Enter a count apples: " << endl;
    cin >> CountApples;
    cout << "Enter a count bananas: " << endl;
    cin >> CountBananas;
    cout << "Enter a count peaches: " << endl;
    cin >> CountPeaches;
    cout << "Enter a count cucumbers: " << endl;
    cin >> CountCucumbers;
    cout << "Price all fruits and vegetables: " << (CountApples * apples) + (CountBananas * bananas) + (CountPeaches * peaches) + (CountCucumbers * cucumbers);

}