#include <iostream>

using namespace std;

int InitArray_20_20(int arr[], int size){
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = -20 + rand() % 40;
    }
}

int InitArray1_20(int arr[], int size){
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 20;
    }
}

int PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Sort1(int arr[], int size, bool metod = 1){
    int temp = 0;
    if(metod = 0)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
    else if(metod = 1)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if(arr[i] < arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
    
    
}

int FindMinusElements(int arr[], int size){
    int left = 0, right = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0){
            left = i;
            break;
        }
    }
    for (int i = size - 1; i > 0; i--)
    {
        if(arr[i] < 0){
            right = i;
            break;
        }
    }
    cout << left << " = left , right = " << right << endl;
    int temp = 0;
    for (int i = left; i <= right; i++)
        {
            for (int j = i + 1; j <= right; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    
}

int FindRandomArray(int arr[], int size){
    int random_number = 0;
    for (int i = 0; i < 100; i++)
    {
        random_number = 1 + rand() % 20;
    }
    
    cout << "Random number: " << random_number << endl;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == random_number){
            cout << "Random number position = " << i << endl;
            break;
        }
    }
    
}

int main()
{
    
    const int size = 10;
    int arr[size];

    // InitArray_20_20(arr, size);
    // PrintArray(arr, size);


    /*1. Дан масив чисел розмірністю 10 елементів. Написа-
    ти функцію, яка сортує масив за зростанням або за
    спаданням, залежно від третього параметра функції.
    Якщо він дорівнює 1, сортування йде за спаданням,
    якщо 0, то за зростанням. Перші 2 параметри функ-
    ції — це масив і його розмір, третій параметр за за-
    мовчуванням дорівнює 1.*/

    // Sort1(arr, size);
    // PrintArray(arr, size);

    // ---------------------------------------------------

    /*2. Дан масив випадкових чисел у діапазоні від -20 до
    +20. Необхідно знайти позиції крайніх від'ємних еле-
    ментів (найлівішого від'ємного елемента і найправі-
    шого від'ємного елемента) і впорядкувати елементи,
    що знаходяться між ними.*/
    
    // InitArray_20_20(arr, size);
    // PrintArray(arr, size);

    // FindMinusElements(arr, size);
    // PrintArray(arr, size);

    // ---------------------------------------------------

    /*3. Дан масив із 20 цілих чисел зі значеннями від 1 до 20.
    Необхідно:
    ■ написати функцію, що розкидає елементи масиву
    довільним чином;
    ■ створити випадкове число з того ж діапазону і знайти
    позицію цього випадкового числа в масиві;
    ■ *** відсортувати елементи масиву, що знаходяться зліва
    від знайденої позиції за спаданням, а елементи ма-
    сиву, що знаходяться справа від знайденої позиції,
    за зростанням.*/

    InitArray1_20(arr, size);
    PrintArray(arr,size);
    FindRandomArray(arr, size);


    
    return 0;
}