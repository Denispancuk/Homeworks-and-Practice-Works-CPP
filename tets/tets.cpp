#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
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
