#include <iostream>
using namespace std;
int* CreateArr(int size) {
    int* arr = new int[size];
    return arr;
}
void InitArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* deleteEL(int* arr, int* size) {
    int* temp = new int[*size - 1];
    (*size)--;
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    return arr;

}
int* AddElArr(int* arr, int* size, int UserNum) {
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size] = UserNum;
    (*size)++;
    delete[] arr;
    arr = temp;
    return arr;
}
int* DelElIndex(int* arr, int* size, int Index) {
    int* temp = new int[*size - 1];
    (*size)--;
    for (int i = 0; i < *size+1; i++)
    {
        if (i >= Index) {
            temp[i] = arr[i + 1];
        }
        else {
            temp[i] = arr[i];
        }
    }
    delete[] arr;
    arr = temp;
    return arr;

}

int* AddElIndex(int* arr, int* size, int Index,int UserNum) {
    int* temp = new int[*size + 1];
    (*size)++;
    for (int i = 0; i < *size; i++)
    {
        if (i >= Index) {
            if (Index == i)
            {
                temp[i] = UserNum;
                continue;
            }
            temp[i] = arr[i - 1];
        }
        else {
            
            temp[i] = arr[i];
        }
    }
    delete[] arr;
    arr = temp;
    return arr;

}

int main()
{
    //First Task
    int* NewInt = new int(15);
    float* NewFloat = new float(26.9);
    double* NewDouble = new double(121);
    cout << "Product: " << *NewInt * *NewFloat * *NewDouble << endl;
    delete NewDouble, NewInt, NewFloat;
    //Second Task
    int size;
    int* SizeAdress = &size;
    int NumUser;
    cout << "Enter a size: ";
    cin >> size;
    int* arr = CreateArr(size);
    InitArray(arr, size);
    cout << "Original masive: " << endl;
    ShowArray(arr, size);
    arr = deleteEL(arr, SizeAdress);
    cout << "Delete last element masive: " << endl;
    ShowArray(arr, size);
    cout << "Enter number to add masive: ";
    cin >> NumUser;
    cout << "Original masive: " << endl;
    ShowArray(arr, size);
    arr = AddElArr(arr, SizeAdress, NumUser);
    cout << "Add element in masive: " << endl;
    ShowArray(arr, size);
    int Index;
    cout << "Original masive: " << endl;
    ShowArray(arr, size);
    cout << "Enter index to delete: ";
    cin >> Index;
    arr = DelElIndex(arr, SizeAdress, Index);
    cout << "Delete element masive: " << endl;
    ShowArray(arr, size);
    cout << "Enter index to add element: ";
    cin >> Index;
    cout << "Enter number to add masive: ";
    cin >> NumUser;
    cout << "Original masive: " << endl;
    ShowArray(arr, size);
    arr = AddElIndex(arr, SizeAdress, Index, NumUser);
    cout << "Add element in masive: " << endl;
    ShowArray(arr, size);
    delete[] arr;
}