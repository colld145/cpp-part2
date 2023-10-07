#include <iostream>
#include <cstring>
using namespace std;

void CountLetters(char line[]) {
    int count_a = 0;
    int count_o = 0;

    for (int i = 0; i < strlen(line); i++) {
        if (line[i] == 'a' || line[i] == 'A') {
            count_a++;
        } else if (line[i] == 'o' || line[i] == 'O') {
            count_o++;
        }
    }
    if (count_a > count_o) {
        cout << "Letters 'A' more than 'O' in the line." << endl;
    } else if (count_o > count_a) {
        cout << "Letters 'O' more than 'A' in the line." << endl;
    } else {
        cout << "Letters equal in the line" << endl;
    }
}

void CountChars(char line[]) {
    int latin_сount = 0;
    int digit_сount = 0;
    int space_сount = 0;

    for (int i = 0; i < strlen(line); i++) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            latin_сount++;
        } else if (line[i] >= '0' && line[i] <= '9') {
            digit_сount++;
        } else if (line[i] == ' ') {
            space_сount++;
        }
    }
    cout << "Amount of:" << endl;
    cout << "Latin characters: " << latin_сount << endl;
    cout << "Digits: " << digit_сount << endl;
    cout << "Spaces: " << space_сount << endl;
}

int CountLineSize(char line[]) {
    int length = 0;

    while (line[length] != '\0') {
        length++;
    }
    return length;
}

int main() {

    /*1.Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?*/

//    int size = 50;
//    char line[size];
//    cout << "Enter a line: ";
//    cin.getline(line, size);
//    CountLetters(line);

    /*2.Вводиться рядок. Порахувати кількість латинських букв, цифр
    та пробілів у рядку.*/

//    int size = 50;
//    char line[size];
//    cout << "Enter a line: ";
//    cin.getline(line, size);
//    CountChars(line);

    /*3.Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.*/

//    int size = 50;
//    char line[size];
//    cout << "Enter a line: ";
//    cin.getline(line, size);
//    _strlwr_s(line);
//    _strupr_s(line);
//    for (int i = 0; i < strlen(line); ++i) {
//        cout << line[i];
//    }
//    cout << endl;

    /*4.Написати функцію, яка отримує рядок і повертає довжину рядка.
    Без використання функції strlen()*/

//    int size = 50;
//    char line[size];
//    cout << "Enter a line: ";
//    cin.getline(line, size);
//    cout << "Length: " << CountLineSize(line);


    /*6.Розробити програму, яка зчитує з екрану рядок,
    а потім видає статистику:
    кількість пробільних символів (whitespaces),
    голосних, приголосних, знаків пунктуації.
    Введення передбачається англомовним.*/

    int size = 50;
    char line[size];
    cout << "Enter a line: ";
    cin.getline(line, size);



    return 0;
}
