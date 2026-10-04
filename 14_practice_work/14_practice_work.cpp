#include <iostream>
#include <iomanip>
using namespace std;
void InitArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int** AddRowStart(int** arr, int& rows, int cols) {
    int** temp = new int* [rows + 1];
    temp[0] = new int[cols];
    for (int i = 0; i < cols; i++)
    {
        temp[0][i] = 10;
    }
    for (int i = 0; i < rows; i++)
    {
        temp[i + 1] = arr[i];
    }
    rows++;
    delete[]arr;
    return temp;

}
int** DelRowStart(int** arr, int& rows, int cols) {
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows - 1; i++)
    {
        temp[i] = arr[i + 1];
    }
    rows--;
    delete[]arr;
    return temp;

}
int** DelRowToPos(int** arr, int& rows, int cols, int pos) {
    int** temp = new int* [rows - 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = pos; i < rows - 1; i++)
    {
        temp[i] = arr[i + 1];
    }
    rows--;
    delete[]arr;
    return temp;

}
int** AddColToStart(int** arr, int rows, int& cols) {
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols + 1];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols+1; j++)
        {
            temp[i][j] = arr[i][j - 1];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        temp[i][0] = 20;
    }
    cols++;
    delete[]arr;
    return temp;
}
int** AddColToPos(int** arr, int rows, int& cols, int pos) {
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols + 1];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < pos; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = pos; j < cols+1; j++)
        {
            temp[i][j] = arr[i][j-1];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        temp[i][pos] = 12;
    }
    cols++;
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[]arr;
    return temp;
}
int** AddRowByPos(int** arr, int& rows, int cols, int pos)
{
    int** temp = new int* [rows + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = new int[cols];
    for (int i = 0; i < cols; i++)
    {
        temp[pos][i] = 20;
    }
    for (int i = pos + 1; i < rows + 1; i++)
    {
        temp[i] = arr[i - 1];
    }
    delete[]arr;
    rows++;
    return temp;
}
int** AddDelRowToPos(int** arr, int& rows, int& cols,int choice) {
    int position;
    if (choice == 1)
    {
        cout << "Enter a position to delete: "; cin >> position;
        return DelRowToPos(arr, rows, cols, position);
    }
    else if (choice == 2)
    {
        cout << "Enter a position to add: "; cin >> position;
        return AddRowByPos(arr, rows, cols, position);
    }
    else {
        cout << "Wrong num choice" << endl;
        return arr;
    }
}
//int ** 
int main()
{
    int rows = 3;
    int cols = 4;
    cout << "Enter count rows: "; cin >> rows;
    cout << "Enter count cols: "; cin >> cols;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    InitArray(arr, rows, cols);
    cout << "Original masive:" << endl;
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //First task
    cout << "Add masive row to start:" << endl;
    arr = AddRowStart(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Second task
    cout << "Del masive row to start:" << endl;
    arr = DelRowStart(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Third task
    int pos;
    cout << "Enter a position to delete: "; cin >> pos;
    arr = DelRowToPos(arr, rows, cols, pos);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Fourth task
    arr = AddColToStart(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Fiveth task
    cout << "Enter a position to add column: "; cin >> pos;
    arr = AddColToPos(arr,rows,cols,pos);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Sixth task
    int choice;
    cout << "1 - Delete row by pos\n2 - Add row by pos\nEnter your choice[1-2]: "; cin >> choice;
    arr = AddDelRowToPos(arr, rows, cols, choice);
    ShowArray(arr, rows, cols);


    

}