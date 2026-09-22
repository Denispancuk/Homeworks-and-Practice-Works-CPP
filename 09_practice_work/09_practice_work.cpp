#include <iostream>
using namespace std;
int MaxNumbers(int a, int b) {
    return (a > b) ? a : b;
}
double MaxNumbers(double a, double b) {
    return (a > b) ? a : b;
}
float MaxNumbers(float a, float b) {
    return (a > b) ? a : b;
}

int MaxNumber3(int a, int b, int c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else {
        return c;
    }
}
float MaxNumber3(float a, float b, float c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else {
        return c;
    }
}
double MaxNumber3(double a, double b, int c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else {
        return c;
    }
}



int MinNumber3(int a, int b, int c) {
    if (a < b and a < c)
    {
        return a;
    }
    else if (b < a and b < c)
    {
        return b;
    }
    else {
        return c;
    }
}
float MinNumber3(float a, float b, float c) {
    if (a < b and a < c)
    {
        return a;
    }
    else if (b < a and b < c)
    {
        return b;
    }
    else {
        return c;
    }
}
double MinNumber3(double a, double b, double c) {
    if (a < b and a < c)
    {
        return a;
    }
    else if (b < a and b < c)
    {
        return b;
    }
    else {
        return c;
    }
}

int MinNumbers(int a, int b) {
    return (a < b) ? a : b;
}
double MinNumbers(double a, double b) {
    return (a < b) ? a : b;
}
float MinNumbers(float a, float b) {
    return (a < b) ? a : b;
}

template < typename Universal>
Universal Average(Universal arr[], int size) {
    int count = 0;
    Universal Sum = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        Sum += arr[i];
    }
    return Sum / count;
}
template < typename Universal>
Universal MaxOneArr(Universal arr[], int size) {
    Universal max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

template < typename Universal>
Universal MaxTwoArr(Universal arr[5][5], int size1, int size2) {
    Universal max = arr[0][0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        
    }
    return max;
}

void InitMatrix(int arr[10][10], int size1, int size2) {
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                arr[i][j] = 10 + rand() % 90;
            }
        }
}
void InitMatrix(double arr[10][10], int size1, int size2) {
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                arr[i][j] = 10 + rand() % 90;
            }
        }
}
void InitMatrix(char arr[10][10], int size1, int size2) {
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                arr[i][j] = 10 + rand() % 90;
            }
        }
}


void ShowMatrix(int arr[10][10], int size1, int size2) {
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void ShowMatrix(double arr[10][10], int size1, int size2) {
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void ShowMatrix(char arr[10][10], int size1, int size2) {
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void MaxAndMinMatrix(int arr[10][10], int size1, int size2) {
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (i == j)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
            
        }
    }
    cout << "Max element in diagonal: " << max << endl;
    cout << "Min element in diagonal: " << min << endl;
}
void MaxAndMinMatrix(double arr[10][10], int size1, int size2) {
    double max = arr[0][0];
    double min = arr[0][0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (i == j)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
            
        }
    }
    cout << "Max element in diagonal: " << max << endl;
    cout << "Min element in diagonal: " << min << endl;
}
void MaxAndMinMatrix(char arr[10][10], int size1, int size2) {
    char max = arr[0][0];
    char min = arr[0][0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (i == j)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
            
        }
    }
    cout << "Max element in diagonal: " << max << endl;
    cout << "Min element in diagonal: " << min << endl;
}
int main()
{
    srand(time(0));
    // First Task
    int a = 1, b = 4;
    float a1 = 0.1, b1 = 0.4;
    double a2 = 123453, b2 = 745395;
    int c = 12;
    float c1 = 0.111;
    double c2 = 43987;


    cout << "Maximum number: " << MaxNumbers(a, b) << endl;
    cout << "Maximum number: " << MaxNumbers(a1, b1) << endl;
    cout << "Maximum number: " << MaxNumbers(a2, b2) << endl;
    cout << endl;
    cout << "Minimum number: " << MinNumbers(a, b) << endl;
    cout << "Minimum number: " << MinNumbers(a1, b1) << endl;
    cout << "Minimum number: " << MinNumbers(a2, b2) << endl;
    cout << endl;
    cout << "Maximum of 3 numbers: " << MaxNumber3(a, b, c) << endl;
    cout << "Maximum of 3 numbers: " << MaxNumber3(a1, b1, c1) << endl;
    cout << "Maximum of 3 numbers: " << MaxNumber3(a2, b2, c2) << endl;
    cout << endl;
    cout << "Minimum of 3 numbers: " << MinNumber3(a, b, c) << endl;
    cout << "Minimum of 3 numbers: " << MinNumber3(a1, b1, c1) << endl;
    cout << "Minimum of 3 numbers: " << MinNumber3(a2, b2, c2) << endl;
    cout << endl;
    // Second Task
    const int size = 7;
    int arr[size] = { 1,2,3,4,5,6,7 };
    float arr1[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7 };
    double arr2[size] = { 345435,453453,43234,567567,876568,45645,435453 };
    cout << "Average: " << Average(arr, size) << endl;
    cout << "Average: " << Average(arr1, size) << endl;
    cout << "Average: " << Average(arr2, size) << endl;
    cout << endl;
    // Third Task
    int arr3[size] = { 1,2,3,4,5,6,7 };
    float arr4[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7 };
    double arr5[size] = { 345435,453453,43234,567567,876568,45645,435453 };
    const int rows = 5, cols = 5;
    cout << "Max number: " << MaxOneArr(arr3, size) << endl;
    cout << "Max number: " << MaxOneArr(arr4, size) << endl;
    cout << "Max number: " << MaxOneArr(arr5, size) << endl;
    cout << endl;
    int arr6[rows][cols] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
    float arr7[rows][cols] = { {0.1,0.2,0.3,0.4,0.5},{0.6,0.7,0.8,0.9,1.0},{1.1,1.2,1.3,1.4,1.5},{1.6,1.7,1.8,1.9,2.0},{2.1,2.2,2.3,2.4,2.5} };
    double arr8[rows][cols] = { {345435,453453,43234,567567,876568},{45645,435453,123456,654321,234567},{765432,345678,876543,456789,987654},{234567,765432,345123,567890,123789},{654321,432109,789456,345678,901234} };
    cout << "Max number: " << MaxTwoArr(arr6, rows,cols) << endl;
    cout << "Max number: " << MaxTwoArr(arr7, rows,cols) << endl;
    cout << "Max number: " << MaxTwoArr(arr8, rows,cols) << endl;
    cout << endl;
    // Fourth Task
    int arr9[10][10];
    double arr10[10][10];
    char arr11[10][10];
    InitMatrix(arr9, 10, 10);
    ShowMatrix(arr9, 10, 10);
    cout << endl;
    InitMatrix(arr10, 10, 10);
    ShowMatrix(arr10, 10, 10);
    cout << endl;
    InitMatrix(arr11, 10, 10);
    ShowMatrix(arr11, 10, 10);
    cout << endl;
    MaxAndMinMatrix(arr9, 10, 10);
    cout << endl;
    MaxAndMinMatrix(arr10, 10, 10);
    cout << endl;
    MaxAndMinMatrix(arr11, 10, 10);
    cout << endl;
}