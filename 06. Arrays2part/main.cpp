#include <iostream>

using namespace std;

bool LeapYear(int year){
    if(year % 4 == 0 || year % 100 == 0 || year % 400 == 0){
        return true;
    }
    else {
        return false;
    }
}

int DateDifference(int d1, int m1, int y1, int d2, int m2, int y2){

    bool leap_y1 = LeapYear(y1);
    bool leap_y2 = LeapYear(y2);

    for (int i = 0; i < m1; i++)
    {
        if(i % 2 != 0){
            d1 += 31;
        }
        else if(i % 2 == 0){
            d1 += 30;
        }
        else if(i == 2 && leap_y1 == false){
            d1 += 28;
        }
        else if(i == 2 && leap_y1 == true){
            d1 += 29;
        }
    }
    
    for (int i = 0; i < m2; i++)
    {
        if(i % 2 != 0){
            d2 += 31;
        }
        else if(i % 2 == 0){
            d2 += 30;
        }
        else if(i == 2 && leap_y2 == false){
            d2 += 28;
        }
        else if(i == 2 && leap_y2 == true){
            d2 += 29;
        }
    }
    
    int diff = y2 - y1;
    int year_iterator = y2;
    if(diff >= 1){
        for (int i = 0; i < diff; i++)
        {
            bool leap_check = LeapYear(year_iterator);
            if(leap_check == false)
            {
                d2+= 365;
            }
            else if(leap_check == true)
            {
                d2+= 366;
            }
            year_iterator++;
        }
    }
    
    if(leap_y1 == true){
        d1 += 366;
    }
    else if(leap_y1 == false){
        d1 += 365;
    }
    if(leap_y2 == true){
        d2 += 366;
    }
    else if(leap_y2 == false){
        d2 += 365;
    }

    return d2 - d1;

}

int ArrayAverage(int arr[], int size){
    int avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg+= arr[i];
    }
    avg = avg/size;
    return avg;
}

void CheckArrayElements(int arr[], int size){
    int plus = 0;
    int minus = 0;
    int null = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > 0){
            plus++;
        }
        if(arr[i] < 0){
            minus++;
        } 
        if(arr[i] == 0){
            null++;
        }
    }
    cout << "Plus elements: " << plus << endl;
    cout << "Minus elements: " << minus << endl;
    cout << "Null elements: " << null << endl;

}

int main(){
    /*Завдання 1. Написати функцію, яка приймає дві дати
    (тобто функція приймає шість параметрів) та обчислює
    різницю в днях між цими датами. Для виконання цього
    завдання необхідно також написати функцію, яка визна-
    чає, чи є рік високосним.*/


    // int d1; int m1; int y1;
    // int d2; int m2; int y2;

    // cout << "Enter the first day: " << endl;
    // cin >> d1 >> m1 >> y1;
    // cout << "Enter the second day: " << endl;
    // cin >> d2 >> m2 >> y2;
    // cout << "Day difference: " << DateDifference(d1, m1, y1, d2, m2, y2) << endl;

    // ----------------------------------------

    /*Завдання 2. Написати функцію, що визначає середнє
    арифметичне елементів переданого їй масиву.*/

    // const int size = 5;
    // int arr[size] = {5,7,2,1,8};

    // cout << "Average of array: " << ArrayAverage(arr,size) << endl;

    // -----------------------------------------

    /*Завдання 3. Написати функцію, що визначає кількість
    додатних, від'ємних і нульових елементів переданого їй
    масиву.*/

    // const int size = 5;
    // int arr[size] = {-5,7,2,0,-8};

    // CheckArrayElements(arr, size);

    // -----------------------------------------

    /*Завдання 4. Написати перевантажені функції (int, double,
    char) для виконання таких завдань:
    ■ Ініціалізація квадратної матриці;
    ■ Вивід матриці на екран;
    ■ Визначення максимального й мінімального елемента
    на головній діагоналі матриці;
    ■ Сортування елементів за зростанням окремо для
    кожного рядка матриці.*/

    


    return 0;
}