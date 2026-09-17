#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
    const int N = 11;
    int array2[N][N];  
    cout << "First task" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array2[i][j] = rand() % 90 + 10;
        }
    }
    int max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i > j) {
                cout << "   ";
            }
            else {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Second task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i < j) {
                cout << "   ";
            }
            else {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Third task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i <= j and i + j < N) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Fourth task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j and i + j >= N-1) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Fiveth task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j and i + j >= N or i < j and i + j < N) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Sixth task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i > j and i + j < N or i <= j and i + j >= N) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Seventh task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j and i + j < N) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Eighth task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i <= j and i + j >= N) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "Nineth task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j < N) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;
    cout << "tenth task" << endl;
    max = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j >= N-1) {
                cout << array2[i][j] << " ";
                if (array2[i][j] > max) {
                    max = array2[i][j];
                }
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max number in area: " << max << endl;

}