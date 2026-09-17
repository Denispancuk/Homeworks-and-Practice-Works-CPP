#include <iostream>
using namespace std;

int LeapYear(int Year1, int Year2) {
    // Year1 - Year2
    int count = 0;
    if (Year1 > Year2)
    {
        for (Year2; Year2 < Year1; Year2++)
        {
            if ((Year2 % 4 == 0 and Year2 % 100 != 0) or Year2 % 400 == 0) {
                count++;
            }
        }
    }
    else {
        for (Year1; Year1 < Year2; Year1++)
        {
            if ((Year1 % 4 == 0 and Year1 % 100 != 0) or Year1 % 400 == 0) {
                count++;
            }
        }
    }
    return count;
}
void DaysInDate(int day1, int month1, int year1, int day2, int month2, int year2) {
    int listDaysNormal[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int listDaysLeap[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int CountLeap = LeapYear(year1, year2);
    int CountNoLeap = 0;
    int MonthDays1 = 0;
    int MonthDays2 = 0;
    if ((year1 % 4 == 0 and year1 % 100 != 0) or year1 % 400 == 0)
    {
        for (int i = 0; i < month1 - 1; i++)
        {
            MonthDays1 += listDaysLeap[i];
        }
    }
    else {
        for (int i = 0; i < month1 - 1; i++)
        {
            MonthDays1 += listDaysNormal[i];
        }
    }
    if ((year2 % 4 == 0 and year2 % 100 != 0) or year2 % 400 == 0)
    {
        for (int i = 0; i < month2 - 1; i++)
        {
            MonthDays2 += listDaysLeap[i];
        }
    }
    else {
        for (int i = 0; i < month2 - 1; i++)
        {
            MonthDays2 += listDaysNormal[i];
        }
    }




    if (year1 > year2)
    {
        CountNoLeap = year1 - year2 - CountLeap;
        cout << "Distance with day: " << (day1)+(MonthDays1)+(CountLeap * 366) + (CountNoLeap * 365) - (day2 + MonthDays2) << endl;
    }
    else {
        CountNoLeap = year2 - year1 - CountLeap;
        cout << "Distance with day: " << (day2)+(MonthDays2)+(CountLeap * 366) + (CountNoLeap * 365) - (day1 + MonthDays1) << endl;
    }
}
int Average(float masive[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += masive[i];
    }
    return sum / size;
}
void Type3Masive(float masive[], int size) {
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (masive[i] > 0)
        {
            positive++;
        }
        else if (masive[i] < 0)
        {
            negative++;
        }
        else {
            zero++;
        }
    }
    cout << "Count positive numbers: " << positive << endl;
    cout << "Count negative numbers: " << negative << endl;
    cout << "Count zero: " << zero << endl;
}
int main()
{
    srand(time(0));
    // First Task
    int day1 = 1, month1 = 1, year1 = 1, day2 = 1, month2 = 1, year2 = 1;
    

    cout << "Enter first date day: ";
    cin >> day1;
    cout << "Enter first date month: ";
    cin >> month1;
    cout << "Enter first date year: ";
    cin >> year1;
    cout << "Enter second date day: ";
    cin >> day2;
    cout << "Enter second date month: ";
    cin >> month2;
    cout << "Enter second date year: ";
    cin >> year2;
    DaysInDate(day1, month1, year1, day2, month2, year2);

    // Second Task
    const int size = 10;
    float masive[size];
    for (int i = 0; i < size; i++)
    {
        masive[i] = rand() % 20;
    }
    cout << "Average number masive: " << Average(masive, size) << endl;
    // Third Task
    for (int i = 0; i < size; i++)
    {
        masive[i] = rand() % 100 - 50;
    }
    Type3Masive(masive, size);
}
