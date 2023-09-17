#include <iostream>

using namespace std;

int main()
{
    /*1.Вивести на екран n одиниць, потім 2n двійок, 
    потім 3n трійок. Число n вводить користувач.*/

    // int number = 0;
    // cout << "Enter a number: ";
    // cin >> number;

    // for (int i = 1; i <= 3; i++)
    // {
    //     if(i == 1){
    //         for (int j = 1; j <= number; j++)
    //         {
    //             cout << i;
    //         }
    //         cout << endl;
    //     }
    //     else if(i == 2){
    //         for (int j = 1; j <= number * 2; j++)
    //         {
    //             cout << i;
    //         }
    //         cout << endl;
    //     }
    //     else if(i == 3){
    //         for (int j = 1; j <= number * 3; j++)
    //         {
    //             cout << i;
    //         }
    //         cout << endl;
    //     }
    // }
    
    // -----------------------------

    /*2..Виведіть на екран квадрат з нулів і одиниць, 
    причому нулі знаходяться тільки на діагоналі квадрата. 
    Всього в квадраті сто цифр.*/

    // for (int i = 0; i <= 10; i++)
    // {
    //     for (int j = 0; j <= 10; j++)
    //     {
    //         if(i == j){
    //             cout << "0 ";
    //         }
    //         else{
    //             cout << "1 ";
    //         }
    //     }
    //     cout << endl;
        
    // }
    
    // ----------------------------------

    /*3.Вивести ряд чисел: десять десяток, дев'ять дев'яток, 
    вісім вісімок, ..., одну одиницю. 
    Знайти суму всіх цих чисел.*/
    // int sum = 0;
    // for (int i = 10; i >= 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i;
    //         sum += i;
    //     }
    //     cout << endl;
    // }
    // cout << "Sum = " << sum << endl;

    // ---------------------------------------

    /*4.Вивести на екран 15 рядків. У рядках з парними номерами 
    вивести по 8 чисел, рівних номеру рядка. У рядках з 
    непарними номерами вивести десять одиниць.*/

    // for (int i = 0; i <= 15; i++)
    // {
    //     if(i % 2 == 0){
    //         for (int j = 0; j <= 8; j++)
    //         {
    //             cout << i;
    //         }
    //         cout << endl;
    //     }
    //     else if(i % 2 != 0){
    //         for (int j = 0; j <= 10; j++)
    //         {
    //             cout << "1";
    //         }
    //         cout << endl;
    //     }
    // }
    
    // --------------------------------------

    /*5. Вивести 30 рядків. Непарні рядки містять натуральні числа 
    від 1 до номера поточного рядка включно з кроком 1, 
    парні рядки складаються з п'яти одиниць.*/

    // for (int i = 1; i <= 30; i++)
    // {
    //     if(i % 2 != 0){
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << j;
    //         }
    //         cout << endl;
    //     }
    //     else if(i % 2 == 0){
    //         for (int j = 0; j <= 5; j++)
    //         {
    //             cout << "1";
    //         }
    //         cout << endl;
    //     }
    // }

    // ----------------------------------

    /*6.Виведіть на екран таблицю множення для чисел від 1 до 10.*/

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    
    // ----------------------------------------------------------

    /*7.Знайдіть кількість цілих чисел від a до b включно, 
    які діляться на 12.*/

    // int a = 0; int b = 0;
    // cout << "Enter a and b: " << endl;
    // cin >> a >> b;
    // for (int i = a; i <= b; i++)
    // {
    //     if(i % 12 == 0){
    //         cout << i << ", ";
    //     }
    // }
    // cout << endl;
    
    // ----------------------------------

    /*8.Завдання 2. Користувач вводить прибуток фірми за рік (12
    місяців). Потім користувач вводить діапазон (наприклад,
    3 і 6 — пошук між третім і шостим місяцем). Необхідно
    визначити місяць, у якому прибуток був максимальним, і
    місяць, у якому прибуток був мінімальним, з урахуванням
    обраного діапазону.*/

    const int size = 12;
    int arr[size]; int start = 0; int finish = 0;
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "'s month income: " << arr[i] << ".000 $" << endl;
    }
    cout << "Enter a start of range of the incomes: ";
    cin >> start;
    cout << "Enter a finish of range of the incomes: ";
    cin >> finish;
    start = start - 1;
    finish = finish - 1;
    int max = arr[start];
    int i_max = 0;
    int min = arr[start];
    int i_min = 0;
    for (int i = start; i <= finish; i++)
    {
        if(arr[i] > max){
            max = arr[i];
            i_max = i;
        }
        if(arr[i] < min){
            min = arr[i];
            i_min = i;
        }
    }
    i_max++;
    i_min++;
    cout << "Max income in " << i_max << "'s month: " << max << ".000 $" << endl;
    cout << "Min income in " << i_min << "'s month: "  << min << ".000 $" << endl;




    return 0;
}