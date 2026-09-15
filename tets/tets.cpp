#include <iostream>
using namespace std;
void Max(int a, int b) {
    if (a > b)
    {
        cout << "Number: " << a << " is bigger" << endl;
    }
    else if (a < b) {
        cout << "Number: " << b << " is bigger" << endl;
    }
    else {
        cout << "Numbers are equal" << endl;
    }
}
int main()
{
    Max(20, 20);
}
