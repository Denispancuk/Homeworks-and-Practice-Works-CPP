#include <iostream>
using namespace std;

int main()
{
    int a1,b1,c1;
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
