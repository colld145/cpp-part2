#include <iostream>
#include <iomanip>
using namespace std;

/*Завдання 1. Написати функцію, що додає рядок двови-
мірному масиву на початок.*/

/*Завдання 2. Написати функцію, що видаляє рядок двови-
мірному масиву з початку.*/

/*Завдання 3. Написати функцію, що видаляє рядок двови-
мірному масиву з зазначеної позиції.*/

/*Завдання 4. Написати функцію, що додає колонку дво-
вимірного масиву за вказаним номером.*/

/*Завдання 5. Написати функцію, що додає колонку дво-
вимірного масиву на початок.*/


void Fill(int **arr, int row, int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = 10 + rand() % 90;
        }
    }
}

void Fill(int *arr, int col){
    for (int i = 0; i < col; ++i) {
        arr[i] = rand() % 10;
    }
}

void Print(int **arr, int row, int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int** AddRow(int **arr, int &row, int col){
    int **temp = new int*[row + 1];
    for (int i = 0; i < row; ++i) {
        temp[i] = arr[i];
    }

    temp[row] = new int[col];
    Fill(temp[row], col);
    delete [] arr;
    row++;
    return temp;
}


int** AddRowByPos(int **arr, int &row, int col, int pos){
    int **temp = new int*[row + 1];
    for (int i = 0; i < pos; ++i) {
        temp[i] = arr[i];
    }
    temp[pos] = new int[col];
    Fill(temp[pos], col);
    for (int i = pos + 1; i < row + 1; i++) {
        temp[i] = arr[i - 1];
    }
    delete [] arr;
    row++;
    return temp;
}


void DelLastRow(int **&arr, int& row){
    int **temp = new int*[row - 1];
    for (int i = 0; i < row - 1; ++i) {
        temp[i] = arr[i];
    }
    delete[] arr[row - 1];
    delete[]arr;
    row--;
    arr = temp;
}


int** AddRowToStart(int **arr, int &row, int col){
    int **temp = new int*[row + 1];
    for (int i = 0; i < 1; i++) {
        temp[i] = arr[i];
    }
    temp[0] = new int[0];
    Fill(temp[0], col);
    for (int i = 1; i < row + 1; i++) {
        temp[i] = arr[i - 1];
    }
    delete [] arr;
    row++;
    return temp;
}


void DelFirstRow(int **&arr, int& row){
    int **temp = new int*[row - 1];
    for (int i = 0; i < row - 1; i++) {
        temp[i] = arr[i + 1];
    }
    delete[] arr[0];
    delete[]arr;
    row--;
    arr = temp;
}


void DelRowByPos(int **&arr, int& row, int pos){
    int **temp = new int*[row - 1];
    for (int i = 0; i < pos; i++) {
        temp[i] = arr[i];
    }
    delete[] arr[pos];
    for (int i = pos; i < row; i++) {
        temp[i] = arr[i + 1];
    }

    delete[]arr;
    row--;
    arr = temp;
}


int** AddColByPos(int **arr, int &row, int &col, int pos){
    int **temp = new int*[row];
    for (int i = 0; i < row; i++) {
        temp[i] = new int[col + 1];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < pos; j++) {
            temp[i][j] = arr[i][j];
        }
        temp[i][pos] = rand() % 10;
        for (int j = pos + 1; j < col + 1; j++) {
            temp[i][j] = arr[i][j - 1];
        }
    }

    delete[] arr;
    col++;
    return temp;
}


int** AddColToStart(int **arr, int &row, int &col) {
    int **temp = new int *[row];
    for (int i = 0; i < row; i++) {
        temp[i] = new int[col + 1];
    }

    for (int i = 0; i < row; i++) {
        temp[i][0] = rand() % 10;
        for (int j = 1; j < col + 1; j++) {
            temp[i][j] = arr[i][j - 1];
        }
    }

    delete[] arr;
    col++;
    return temp;
}

int main() {
    srand(time(0));
    int row = 5;
    int col = 7;

    int **arr = new int*[row];

    for (int i = 0; i < row; ++i) {
        arr[i] = new int[col];
    }


    Fill(arr, row, col);
    Print(arr, row, col);
    cout << endl;

    // Task 1
//    arr = AddRowToStart(arr, row, col);
//    Print(arr, row, col);
//    cout << endl;


    // Task 2
//    DelFirstRow(arr, row);
//    Print(arr, row, col);
//    cout << endl;


    // Task 3
//    DelRowByPos(arr, row, 2);
//    Print(arr, row, col);
//    cout << endl;


    // Task 4
//    arr = AddColByPos(arr, row, col, 2);
//    Print(arr, row, col);
//    cout << endl;


    // Task 5
    arr = AddColToStart(arr, row, col);
    Print(arr, row, col);
    cout << endl;


//    arr = AddRow(arr, row, col);
//    Print(arr, row, col);
//
//    cout << endl;
//    arr = AddRowByPos(arr, row, col, 2);
//    Print(arr, row, col);


    for (int i = 0; i < row; ++i) {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}
