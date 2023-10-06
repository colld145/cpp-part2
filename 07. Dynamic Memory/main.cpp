#include <iostream>

using namespace std;

float Multiply(int a, float b, double c) {
    return a * b * c;
}

// --------------------------------------


int* Init(int size) {
    int* temp = new int[size];
    for (int i = 0; i < size; i++) {
        temp[i] = rand() % 100;
    }
    return temp;
}

void Print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* Append(int* arr, int& size, int element) {
    int* temp = new int[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    temp[size] = element;
    size++;
    delete[] arr;
    return temp;
}

int* DeleteLastElement(int* arr, int& size) {
    int* temp = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        temp[i] = arr[i];
    }
    size--;
    delete[] arr;
    return temp;
}

int* DeleteElementByIndex(int* arr, int& size, int index) {
    int* temp = new int[size - 1];
    for (int i = 0, j = 0; i < size; i++) {
        if (i != index) {
            temp[j] = arr[i];
            j++;
        }
    }
    size--;
    delete[] arr;
    return temp;
}

int* AppendElementByIndex(int* arr, int& size, int index, int element) {
    int* temp = new int[size + 1];
    for (int i = 0, j = 0; i < size + 1; i++) {
        if (i == index) {
            temp[i] = element;
        } else {
            temp[i] = arr[j];
            j++;
        }
    }
    size++;
    delete[] arr;
    return temp;
}

int main() {

    /*1.Створити 3 динамічних змінних різного типу.
    Заповнити їх деякими значеннями. Обчислити і вивести
     на екран їх добуток,
    а також самі значення динамічних змінних.*/

//    int int_var = 7;
//    float float_var = 10.554;
//    double double_var = 15.98;
//    int* int_ptr = &int_var;
//    float* float_ptr = &float_var;
//    double* double_ptr = &double_var;
//
//    cout << "Int_var: " << *int_ptr << endl;
//    cout << "Float_var: " << *float_ptr << endl;
//    cout << "Int_var: " << *double_ptr << endl;
//
//    cout << "Multiply of all numbers: " << Multiply(*int_ptr, *float_ptr, *double_ptr) << endl;

// -----------------------------------------------------------------

/*2.Написати функції для роботи з динамічним одновимірним масивом:
Функція створення динамічного масиву вказаного розміру і
його заповнення випадковими числами.
Функція повертає адресу створеного масиву.
Виводу масиву
Доповнення масиву одним елементом.
Функція отримує адресу масиву, розмір та елемент для доповнення.
Видалення елемента з кінця.
Видалення елемента  за індексом.
Вставка нового елемента у довільну допустиму позицію у масиві
Меню
*/

    srand(time(0));

    int size = 0;
    int* arr = new int[size];
    bool exit = false;

    while (!exit) {
        int choice = 0;
        int element = 0;
        int index = 0;
        cout << "1. Create an array\n2. Print an array\n3. Append an element\n4. Delete the last element\n5. Delete an element by index\n6. Append an element by index\n\n0. Exit\n\nEnter a choice:" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a size of the array: ";
                cin >> size;
                arr = Init(size);
                break;
            case 2:
                Print(arr, size);
                break;
            case 3:
                cout << "Enter an element to append: ";
                cin >> element;
                arr = Append(arr, size, element);
                break;
            case 4:
                arr = DeleteLastElement(arr, size);
                break;
            case 5:
                cout << "Enter an index to delete: ";
                cin >> index;
                arr = DeleteElementByIndex(arr, size, index);
                break;
            case 6:
                cout << "Enter an index to append ";
                cin >> index;
                cout << "Enter an element to append: ";
                cin >> element;
                arr = AppendElementByIndex(arr, size, index, element);
                break;
            case 0:
                cout << "Bye!" << endl;
                exit = true;
                break;
            default:
                cout << "Incorrect choice! Try again." << endl;
        }
    }

    delete[] arr;


    return 0;
}
