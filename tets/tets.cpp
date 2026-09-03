#include <iostream>
using namespace std;

int main()
{
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
    cout << "Price all fruits and vegetables: " << (CountApples * apples) + (CountBananas * bananas) + (CountPeaches * peaches) + (CountCucumbers * cucumbers) << endl;

}
