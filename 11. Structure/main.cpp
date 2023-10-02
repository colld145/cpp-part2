#include <iostream>

using namespace std;

/*Завдання 1. Реалізувати структуру «Пральна машинка»
(фірма, колір, ширина, довжина, висота, потужність, швид-
кість віджиму, температура нагріву). Створіть екземпляр
структури і проілюструйте роботу з ним.*/


struct Washing_machine{
    string mark;
    string color;
    float width;
    float length;
    float height;
    int power;
    float dry_speed;
    float temperature;
};

void Init(Washing_machine wm){
    cout << "Enter a mark: ";
    cin >> wm.mark;
    cout << "Enter a color: ";
    cin >> wm.color;
    cout << "Enter a width: ";
    cin >> wm.width;
    cout << "Enter a length: ";
    cin >> wm.length;
    cout << "Enter a height: ";
    cin >> wm.height;
    cout << "Enter a power: ";
    cin >> wm.power;
    cout << "Enter a dry speed: ";
    cin >> wm.dry_speed;
    cout << "Enter a temperature: ";
    cin >> wm.temperature;
}

void Print(Washing_machine wm){
    cout << "Mark: " << wm.mark << endl;
    cout << "Color: " << wm.color << endl;
    cout << "Width: " << wm.width << endl;
    cout << "Length: " << wm.length << endl;
    cout << "Height: " << wm.height << endl;
    cout << "Power: " << wm.power << endl;
    cout << "Dry speed: " << wm.dry_speed << endl;
    cout << "Temperature: " << wm.temperature << endl;
}

/*Завдання 2. Реалізувати структуру «Праска» (фірма,
модель, колір, мінімальна температура, максимальна
температура, подача пари так/ні, потужність). Створіть
екземпляр структури і проілюструйте роботу з ним.*/

struct Iron{
    string mark;
    string model;
    string color;
    float min_temp;
    float max_temp;
    bool steam_supply;
    int power;
};


void Init(Iron& iron){
    cout << "Enter a mark: ";
    cin >> iron.mark;
    cout << "Enter a model: ";
    cin >> iron.model;
    cout << "Enter a color: ";
    cin >> iron.color;
    cout << "Enter a min temp: ";
    cin >> iron.min_temp;
    cout << "Enter a max temp: ";
    cin >> iron.max_temp;
    cout << "Steam supply 0/1: ";
    cin >> iron.steam_supply;
    cout << "Enter a power: ";
    cin >> iron.power;
}

void Print(Iron iron){
    cout << "Mark: " << iron.mark << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Min temp: " << iron.min_temp << endl;
    cout << "Max temp: " << iron.max_temp << endl;
    cout << "Steam supply: " << iron.steam_supply << endl;
    cout << "Power: " << iron.power << endl;
}

/*Завдання 3. Реалізувати структуру «Бойлер» (фірма,
колір, потужність, обсяг, температура нагріву). Створіть
екземпляр структури і проілюструйте роботу з ним.*/

struct Boiler{
    string mark;
    string color;
    int power;
    float amount;
    float temp;
};

void Init(Boiler& boiler){
    cout << "Enter a mark: ";
    cin >> boiler.mark;
    cout << "Enter a color: ";
    cin >> boiler.color;
    cout << "Enter a power: ";
    cin >> boiler.power;
    cout << "Enter an amount: ";
    cin >> boiler.amount;
    cout << "Enter a temperature: ";
    cin >> boiler.temp;
}

void Print(Boiler boiler){
    cout << "Mark: " << boiler.mark << endl;
    cout << "Color: " << boiler.color << endl;
    cout << "Power: " << boiler.power << endl;
    cout << "Amount: " << boiler.amount << endl;
    cout << "Temperature: " << boiler.temp << endl;

}


/*Додаткове завдання на додаткові 12 балів
Завдання 4
Реалізувати структуру "Машина" (колір, модель, номер).
 Номер машини може бути
або п'ятизначним номером, або словом до 8 символів.
Рекомендації: номер реалізувати як об'єднання.
Створити екземпляр структури "Машина" і реалізувати для нього такі
 функції:
Заповнення машини;
Друк машини.
Створити масив із 10 екземплярів структури "Машина" і реалізувати
 для нього такі функції:
Редагувати машину;
Друк усіх машин;
Пошук машини за номером.*/

struct CarNumber{
    string region;
    int number;
    string chars;
};


struct Car{
    string model;
    string color;
    CarNumber number;
};

void Init(Car& car){
    cout << "Enter a model: ";
    cin >> car.model;
    cout << "Enter a color: ";
    cin >> car.color;
    cout << "Enter a number: ";
    cin >> car.CarNumber;

}


int main() {
    // Task 1
//    Washing_machine bosch1;
//    bosch1 = InitWashingMachine();
//    Print(bosch1);

    // Task 2
//    Iron philips;
//    Init(philips);
//    Print(philips);

    // Task 3
//    Boiler bolik;
//    Init(bolik);
//    Print(bolik);

    return 0;
}
