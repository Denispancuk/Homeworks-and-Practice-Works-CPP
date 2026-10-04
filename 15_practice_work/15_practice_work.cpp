#include <iostream>
using namespace std;
void AorO(char any_word[]) {
    int a = 0;
    int o = 0;
    for (int i = 0; i < strnlen(any_word, 255); i++)
    {
        if (any_word[i] == 'a' or any_word[i] == 'A') {
            a++;
        }
        if (any_word[i] == 'o' or any_word[i] == 'O') {
            o++;
        }
    }
    if (a > o) {
        cout << "letter \"a\" more than letter \"o\"" << endl;
    }
    else if (a < o) {
        cout << "letter \"o\" more than letter \"a\"" << endl;
    }
    else {
        cout << "letter count same" << endl;
    }
}
void countsletters(char any_word[]) {
    int digitCount = 0;
    int AlphaCount = 0;
    int WhitespacesCount = 0;
    for (int i = 0; i < strnlen(any_word, 255); i++) {
        if ((bool)isdigit(any_word[i]) == true)
        {
            digitCount++;
        }
        if ((bool)isalpha(any_word[i]) == true)
        {
            AlphaCount++;
        }
        if (any_word[i] == ' ')
        {
            WhitespacesCount++;
        }
    }
    cout << "Count digits: " << digitCount << endl;
    cout << "Count alphas: " << AlphaCount << endl;
    cout << "Count whitespaces: " << WhitespacesCount << endl;
}
void SmallBig_BigSmall(char any_word[]) {
    for (int i = 0; i < strnlen(any_word, 255); i++) {
        if ((bool)islower(any_word[i]) == true)
        {
            any_word[i] = toupper(any_word[i]);
        }
        else if ((bool)isupper(any_word[i]) == true)
        {
            any_word[i] = tolower(any_word[i]);
        }
    }
    cout << any_word << endl;
}
void LenRow(char any_word[]){
    int count = 0;
    while (any_word[count] != '\0')
    {
        count++;
    }
    cout << "In your rows " << count << " symbols" << endl;
    }
void NewRow(char any_word[],const int size_row, char symbol) {
    int j = 0;
    char New_row[500] = "";
    int i = 0;
    while (any_word[i] != '\0')
    {
        
        if (any_word[i] != symbol)
        {
            New_row[j] = any_word[i];
            j++;
        }
        i++;
    }
    New_row[j + 1] == '\0';
    cout << New_row << endl;

}
void CountAll(char any_word[]) {
    int GolosCount = 0;
    int NoGolosCount = 0;
    int WhitespacesCount = 0;
    int punctuation = 0;
    for (int i = 0; i < strnlen(any_word, 255); i++) {
        if (any_word[i] == 'a' or any_word[i] == 'e' or any_word[i] == 'i' or any_word[i] == 'o' or any_word[i] == 'u' or any_word[i] == 'A' or any_word[i] == 'E' or any_word[i] == 'I' or any_word[i] == 'O' or any_word[i] == 'U')
        {
            GolosCount++;
        }
        if (any_word[i] == 'b' or any_word[i] == 'c' or any_word[i] == 'd' or any_word[i] == 'f' or any_word[i] == 'g' or any_word[i] == 'h' or any_word[i] == 'j' or any_word[i] == 'k' or any_word[i] == 'l' or any_word[i] == 'm' or any_word[i] == 'n' or any_word[i] == 'p' or any_word[i] == 'q' or any_word[i] == 'r' or any_word[i] == 's' or any_word[i] == 't' or any_word[i] == 'v' or any_word[i] == 'w' or any_word[i] == 'x' or any_word[i] == 'y' or any_word[i] == 'z' or any_word[i] == 'B' or any_word[i] == 'C' or any_word[i] == 'D' or any_word[i] == 'F' or any_word[i] == 'G' or any_word[i] == 'H' or any_word[i] == 'J' or any_word[i] == 'K' or any_word[i] == 'L' or any_word[i] == 'M' or any_word[i] == 'N' or any_word[i] == 'P' or any_word[i] == 'Q' or any_word[i] == 'R' or any_word[i] == 'S' or any_word[i] == 'T' or any_word[i] == 'V' or any_word[i] == 'W' or any_word[i] == 'X' or any_word[i] == 'Y' or any_word[i] == 'Z')
        {
            NoGolosCount++;
        }
        if (any_word[i] == ' ')
        {
            WhitespacesCount++;
        }
        if (any_word[i] == '.' or any_word[i] == '?' or any_word[i] == '!' or any_word[i] == ',' or any_word[i] == ';' or any_word[i] == ':' or any_word[i] == '-' or any_word[i] == '/' or any_word[i] == '*' or any_word[i] == '(' or any_word[i] == ')' or any_word[i] == '"')
        {
            punctuation++;
        }
    }
    cout << "Whitespaces count: " << WhitespacesCount << endl;
    cout << "Vowels count: " << GolosCount << endl;
    cout << "Consonants count: " << NoGolosCount << endl;
    cout << "Punctuation marks count: " << punctuation << endl;

}
int main()
{
    char any_word[255] = "123";
    char Copy[255] = "";
    
    cout << "Enter any word[255 symbols]: ";
    cin.getline(any_word, 255);
    strcpy_s(Copy, any_word);
    //First task
    AorO(any_word);
    //Second task
    countsletters(any_word);
    //Third task
    SmallBig_BigSmall(any_word);
    //Fourth task
    LenRow(any_word);
    //Fiveth task 
    cout << "Original row: " << Copy << endl;
    char symbol;
    cout << "enter 1 symbol to delete: "; cin >> symbol;
    NewRow(Copy, 255, symbol);
    //Sixth task 
    char any_word2[255] = "123";
    cout << "Enter any word[255 symbols]: ";
    cin.ignore();
    cin.getline(any_word2, 255);
    CountAll(any_word2);
}