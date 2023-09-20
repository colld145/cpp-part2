#include <iostream>

using namespace std;


int Pow(int a, int power){
    if(power == 0){
        return 1;
    }

    return a * Pow(a, power - 1);
}

int PrintStar(int a){
    if(a == 0){
        return 1;
    }

    cout << "*";
    PrintStar(a - 1);
}

int SumRange(int a, int b){
    if(a == b){
        return 1;
    }

    return a + SumRange(a + 1, b);
}


int main()
{
    /*Завдання 1. Рекурсивна функція знаходження ступеня числа*/

    // int number = 0; int power = 0;
    // cout << "Enter a number: ";
    // cin >> number;
    // cout << "Enter a power: ";
    // cin >> power;
    // cout << Pow(number, power) << endl;

    // -------------------------------

    /*Завдання 2. Функція виводить n зірочок*/

    // int number = 0;
    // cout << "Enter a number: ";
    // cin >> number;
    // PrintStar(number);

    /*Завдання 3. Написати рекурсивну функцію, яка обчислює суму
    всіх чисел у діапазоні від a до b. Користувач вводить
    a і b. Проілюструйте роботу функції прикладом.*/

    int a = 0; int b = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << SumRange(a, b) << endl;

    return 0;
}