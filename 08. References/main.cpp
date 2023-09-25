#include <iostream>
#include <iomanip>

using namespace std;


void InitArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ChangeValue(int* arr, int size){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

int main(){
    // int a = 5;
    // int* pa = &a;

    // int b = 10;
    // int& lb = b;
    

    // cout << "*pa = " << pa << endl;
    // cout << "&lb = " << lb << endl;

    srand((unsigned)time(NULL));


    // const int size = 5;
    // int* arr = new int[size];

    // InitArray(arr, size);
    // PrintArray(arr, size);

    // ChangeValue(arr, size);
    // PrintArray(arr, size);

    // cout << endl;

    // const int row = 5;
    // const int col = 5;

    // int arr_2d[row][col];

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         arr_2d[i][j] = -500 + rand() % 1500;
    //     }
    // }
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << setw(5) << arr_2d[i][j];
    //     }
    //     cout << endl;
    // }
    
    cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(209);

    return 0;
}