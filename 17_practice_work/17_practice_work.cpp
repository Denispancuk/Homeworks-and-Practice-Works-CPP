#include <iostream>
#include <conio.h>
using namespace std;
struct Book
{
    int id;
    char name[50];
    char autor[50];
    char publishing_house[100];
    char genre[50];
    int year;
    float price;
};
void ShowBook(Book* arr) {
    cout << "ID: " << arr->id << endl;
    cout << "Name book: " << arr->name << endl;
    cout << "Autor book: " << arr->autor << endl;
    cout << "Publishing house book: " << arr->publishing_house << endl;
    cout << "Genre book: " << arr->genre << endl;
    cout << "Year book: " << arr->year << endl;
    cout << "Price book: " << arr->price << endl << endl;
}
void ShowBooks(Book* arr, int size) {
    cout << (char)218
        << (char)196 << (char)196 << (char)196 << (char)196
        << (char)194
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196
        << (char)194
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196
        << (char)194
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)194
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)194
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)194
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)191 << endl;

    cout << (char)179 << " ID "
        << (char)179 << " Name" << "                           "
        << (char)179 << " Autor" << "                  "
        << (char)179 << " Publishing house" << "   "
        << (char)179 << " Genre" << "              "
        << (char)179 << " Year" << " "
        << (char)179 << " Price" << "   "
        << (char)179 << endl;

    cout << (char)195
        << (char)196 << (char)196 << (char)196 << (char)196
        << (char)197
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196
        << (char)197
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196
        << (char)197
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)197
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)197
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)197
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)180 << endl;

    for (int i = 0; i < size; i++)
    {
        int k;

        cout << (char)179 << " " << arr[i].id << " ";
        if (arr[i].id < 10) cout << " ";

        cout << (char)179 << " " << arr[i].name;
        k = 0;
        while (arr[i].name[k] != '\0') k++;
        for (k; k < 31; k++) cout << " ";

        cout << (char)179 << " " << arr[i].autor;
        k = 0;
        while (arr[i].autor[k] != '\0') k++;
        for (k; k < 23; k++) cout << " ";

        cout << (char)179 << " " << arr[i].publishing_house;
        k = 0;
        while (arr[i].publishing_house[k] != '\0') k++;
        for (k; k < 19; k++) cout << " ";

        cout << (char)179 << " " << arr[i].genre;
        k = 0;
        while (arr[i].genre[k] != '\0') k++;
        for (k; k < 19; k++) cout << " ";

        cout << (char)179 << " " << arr[i].year << " ";

        cout << (char)179 << " " << (int)arr[i].price << "     " << (char)179 << endl;
    }

    cout << (char)192
        << (char)196 << (char)196 << (char)196 << (char)196
        << (char)193
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196
        << (char)193
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196
        << (char)193
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)193
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)193
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)193
        << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
        << (char)217 << endl << endl;
}

void SearchBookByAutor(Book* arr, int size, char autor[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].autor, autor) == 0)
        {
            ShowBook(&arr[i]);
        }
    }
}
void SearchBookByName(Book* arr, int size, char name[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            ShowBook(&arr[i]);
        }
    }
}
void SearchBookByHouse(Book* arr, int size, char publishing_house[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].publishing_house, publishing_house) == 0)
        {
            ShowBook(&arr[i]);
        }
    }
}
void SearchBookByGenre(Book* arr, int size, char genre[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].genre, genre) == 0)
        {
            ShowBook(&arr[i]);
        }
    }
}
void ChangePrice(Book* arr, int size) {
    int id;
    float price;
    ShowBooks(arr, size);
    cout << endl;
    cout << "Enter id to change price: ";
    cin >> id;
    cout << "Enter new price: ";
    cin >> price;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].id == id)
        {
            arr[i].price = price;
        }
    }
}
void InitBook(Book* arr) {
    cout << "ID: "; cin >> arr->id;
    cin.ignore();
    cout << "Name book: "; cin.getline(arr->name, 50);
    cout << "Autor book: "; cin.getline(arr->autor, 50);
    cout << "Publishing house book: "; cin.getline(arr->publishing_house, 100);
    cout << "Genre book: "; cin.getline(arr->genre, 50);
    cout << "Year book: "; cin >> arr->year;
    cout << "Price book: "; cin >> arr->price;
}
Book* AddNewBook(Book* arr, int& size) {
    Book* temp = new Book[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    InitBook(&temp[size]);

    delete[] arr;
    arr = temp;
    size++;
    return temp;

}
Book* DeleteBookById(Book* arr, int& size, int id) {
    Book* temp = new Book[size - 1];
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].id == id) {
            continue;
        }
        temp[k] = arr[i];
        k++;
    }
    delete[] arr;
    size--;
    return temp;
}
int main()
{
    char name[50];
    int size = 10;
    Book* arr = new Book[size]{
        {1, "Kobzar", "Taras Shevchenko", "Publishing House 1", "Poetry", 1840, 250.50},
        {2, "Tigrolovy", "Ivan Bagriany", "Publishing House 2", "Adventure", 1944, 180.00},
        {3, "Kaidasheva Simia", "Ivan Nechuy-Levytsky", "Publishing House 3", "Realism", 1878, 150.00},
        {4, "Zahar Berkut", "Ivan Franko", "Publishing House 4", "Historical novel", 1883, 195.40},
        {5, "Lisova Pisnia", "Lesya Ukrainka", "Publishing House 5", "Drama-extravaganza", 1911, 210.00},
        {6, "Misto", "Valerian Pidmohylny", "Publishing House 1", "Urban novel", 1928, 220.00},
        {7, "Chorna Rada", "Panteleimon Kulish", "Publishing House 2", "Historical novel", 1857, 175.50},
        {8, "Intermezzo", "Mykhailo Kotsiubynsky", "Publishing House 3", "Impressionism", 1908, 130.00},
        {9, "Marusia Churai", "Lina Kostenko", "Publishing House 4", "Novel in verse", 1979, 290.00},
        {10, "Shadows of Forgotten Ancestors", "Mykhailo Kotsiubynsky", "Publishing House 5", "Novella", 1911, 165.00}
    };
    int choice;
    do
    {
        system("cls");
        cout << "---------------------- Menu ----------------" << endl;
        cout << "Change book                             [1]" << endl;
        cout << "Print all books                         [2]" << endl;
        cout << "Search book by autor                    [3]" << endl;
        cout << "Search book by name                     [4]" << endl;
        cout << "Search book by publishing house         [5]" << endl;
        cout << "Search book by genre                    [6]" << endl;
        cout << "Change price book                       [7]" << endl;
        cout << "Add new book                            [8]" << endl;
        cout << "Delete book                             [9]" << endl;
        cout << "Exit                                    [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a nice day! Goodbye!!!!" << endl;
            break;
        case 1:
            break;
        case 2:
            ShowBooks(arr, size);
            break;
        case 3:
            cout << "Enter name autor book: ";
            cin.getline(name, 50);
            SearchBookByAutor(arr, size, name);
            break;
        case 4:
            cout << "Enter name book: ";
            cin.getline(name, 50);
            SearchBookByName(arr, size, name);
            break;
        case 5:
            cout << "Enter book by publication house: ";
            cin.getline(name, 50);
            SearchBookByHouse(arr, size, name);
            break;
        case 6:
            cout << "Enter book by genre: ";
            cin.getline(name, 50);
            SearchBookByGenre(arr, size, name);
            break;
        case 7:
            ChangePrice(arr, size);
            break;
        case 8:
            arr = AddNewBook(arr, size);
            break;
        case 9:
            int Id;
            cout << "Enter ID to delete: "; cin >> Id;
            cin.ignore();
            arr = DeleteBookById(arr, size, Id);
            break;
        default:
            cout << "Error choice" << endl;
            break;

        }
        if (choice != 0)
        {
            cout << "Press any key......" << endl;
            _getch();
        }


    } while (choice != 0);
}