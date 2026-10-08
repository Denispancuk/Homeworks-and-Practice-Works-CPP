#include <iostream>
#include <cstring>
using namespace std;

struct WashingMashine {
    char firma[20];
    char color[30];
    int width;
    int height;
    int power;
    int SpeedVidgym;
    int temperature;
};

void ShowMashineWash(WashingMashine AnyData) {
    cout << "Brand: " << AnyData.firma << endl;
    cout << "Color: " << AnyData.color << endl;
    cout << "Width: " << AnyData.width << endl;
    cout << "Height: " << AnyData.height << endl;
    cout << "Power: " << AnyData.power << endl;
    cout << "Speed Vidgym: " << AnyData.SpeedVidgym << endl;
    cout << "Temperature: " << AnyData.temperature << endl;
}

WashingMashine InitMashineWash(WashingMashine AnyData) {
    cout << "Brand: ";
    cin >> AnyData.firma;
    cout << "Color: ";
    cin >> AnyData.color;
    cout << "Width: ";
    cin >> AnyData.width;
    cout << "Height: ";
    cin >> AnyData.height;
    cout << "Power: ";
    cin >> AnyData.power;
    cout << "Speed Vidgym: ";
    cin >> AnyData.SpeedVidgym;
    cout << "Temperature: ";
    cin >> AnyData.temperature;
    return AnyData;
}

struct Iron {
    char firma[20];
    char model[50];
    char color[30];
    int mintemp;
    int maxtemp;
    bool Mistgiving;
    int power;
};

void ShowIron(Iron AnyData) {
    cout << "Brand: " << AnyData.firma << endl;
    cout << "Model: " << AnyData.model << endl;
    cout << "Color: " << AnyData.color << endl;
    cout << "Power: " << AnyData.power << endl;
    cout << "Max temperature: " << AnyData.maxtemp << endl;
    cout << "Min temperature: " << AnyData.mintemp << endl;
    cout << "Mistgiving: " << AnyData.Mistgiving << endl;
}

Iron InitIron(Iron AnyData) {
    cout << "Brand: ";
    cin >> AnyData.firma;
    cout << "Model: ";
    cin >> AnyData.model;
    cout << "Color: ";
    cin >> AnyData.color;
    cout << "Min Temperature: ";
    cin >> AnyData.mintemp;
    cout << "Max Temperature: ";
    cin >> AnyData.maxtemp;
    cout << "Power: ";
    cin >> AnyData.power;
    cout << "Mistgiving: ";
    cin >> AnyData.Mistgiving;
    return AnyData;
}

struct Boiler {
    char firma[20];
    char color[30];
    int power;
    int litrage;
    int temperature;
};

void ShowBoiler(Boiler AnyData) {
    cout << "Brand: " << AnyData.firma << endl;
    cout << "Color: " << AnyData.color << endl;
    cout << "Power: " << AnyData.power << endl;
    cout << "Litrage: " << AnyData.litrage << endl;
    cout << "Temperature: " << AnyData.temperature << endl;
}

Boiler InitBoiler(Boiler AnyData) {
    cout << "Brand: ";
    cin >> AnyData.firma;
    cout << "Color: ";
    cin >> AnyData.color;
    cout << "Power: ";
    cin >> AnyData.power;
    cout << "Litrage: ";
    cin >> AnyData.litrage;
    cout << "Temperature: ";
    cin >> AnyData.temperature;
    return AnyData;
}

struct Automobile {
    int type;
    char color[20];
    char model[20];

    union {
        int number;
        char word[9];
    };
};

Automobile InitAutomobile(Automobile AnyData) {
    cout << "Color: ";
    cin >> AnyData.color;

    cout << "Model: ";
    cin >> AnyData.model;

    cout << "Type Number\n5-Digit Number\nWord(Up to 8 characters)\nYou answer[1-2]: ";
    cin >> AnyData.type;

    if (AnyData.type == 1) {
        cout << "Enter 5-Digit Number: ";
        cin >> AnyData.number;
    }
    else if (AnyData.type == 2) {
        cout << "Enter Word(Up to 8 characters): ";
        cin >> AnyData.word;
    }

    return AnyData;
}

void ShowAutomobile(Automobile AnyData) {
    cout << "Color: " << AnyData.color << endl;
    cout << "Model: " << AnyData.model << endl;

    if (AnyData.type == 1)
        cout << "Number: " << AnyData.number << endl;
    else if (AnyData.type == 2)
        cout << "Word: " << AnyData.word << endl;
}

void ShowAllAutomobile(Automobile AnyData[], int size) {
    for (int i = 0; i < size; i++) {
        ShowAutomobile(AnyData[i]);
        cout << endl;
    }
}

void SearchAutomobile(Automobile AnyData[], int size) {
    int type;
    int number;
    char word[9];

    cout << "Type Number\n5-Digit Number\nWord(Up to 8 characters)\nYou answer[1-2]: ";
    cin >> type;

    if (type == 1) {
        cout << "Enter number: ";
        cin >> number;

        for (int i = 0; i < size; i++) {
            if (AnyData[i].type == 1 && AnyData[i].number == number) {
                ShowAutomobile(AnyData[i]);
            }
        }
    }
    else if (type == 2) {
        cout << "Enter word: ";
        cin >> word;

        for (int i = 0; i < size; i++) {
            if (AnyData[i].type == 2 && strcmp(AnyData[i].word, word) == 0) {
                ShowAutomobile(AnyData[i]);
            }
        }
    }
}

void ChangeAuto(Automobile AnyData[], int size) {
    int type;
    int number;
    char word[9];

    cout << "Type Number\n5-Digit Number\nWord(Up to 8 characters)\nYou answer[1-2]: ";
    cin >> type;

    if (type == 1) {
        cout << "Enter number: ";
        cin >> number;

        for (int i = 0; i < size; i++) {
            if (AnyData[i].type == 1 and AnyData[i].number == number) {
                AnyData[i] = InitAutomobile(AnyData[i]);
                break;
            }
        }
    }
    else if (type == 2) {
        cout << "Enter word: ";
        cin >> word;

        for (int i = 0; i < size; i++) {
            if (AnyData[i].type == 2 and strcmp(AnyData[i].word, word) == 0) {
                AnyData[i] = InitAutomobile(AnyData[i]);
                break;
            }
        }
    }
}

int main() {
    WashingMashine Epsilon{ "Epsilon", "white", 100, 100, 1200, 120, 50 };
    ShowMashineWash(Epsilon);
    cout << endl;

    WashingMashine LG = {};
    LG = InitMashineWash(LG);
    ShowMashineWash(LG);
    cout << endl;

    Iron LGG{ "LG", "Blade", "UltraMarine", 10, 100, true, 1000 };
    ShowIron(LGG);
    cout << endl;

    Iron Bosch = {};
    Bosch = InitIron(Bosch);
    ShowIron(Bosch);
    cout << endl;

    Boiler myBoiler = { "Ariston", "Matt Black", 2000, 80, 75 };
    ShowBoiler(myBoiler);
    cout << endl;

    Boiler Myboiler2 = {};
    Myboiler2 = InitBoiler(Myboiler2);
    ShowBoiler(Myboiler2);
    cout << endl;

    const int size = 5;

    Automobile AllAutomobile[size] = {
        {1, "Red", "Sedan"},
        {2, "Black", "SUV"},
        {1, "White", "Coupe"},
        {2, "Silver", "Crossover"},
        {1, "Blue", "Hatchback"}
    };

    AllAutomobile[0].number = 54321;
    strcpy_s(AllAutomobile[1].word, 9, "BOSS");
    AllAutomobile[2].number = 77777;
    strcpy_s(AllAutomobile[3].word, 9, "VIP");
    AllAutomobile[4].number = 10293;

    ShowAllAutomobile(AllAutomobile, size);
    SearchAutomobile(AllAutomobile, size);
    ChangeAuto(AllAutomobile, size);
}