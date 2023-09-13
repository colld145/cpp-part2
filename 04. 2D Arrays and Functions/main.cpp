#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    srand((unsigned)time(NULL));
    // const int rows = 5;
    // const int cols = 5;
    // int arr[rows][cols];
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = 1 + rand() % 50;
    //         cout << setw(5) << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "----------" << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << addressof(arr[i][j]) << " ";
    //     }
    //     cout << endl;
    // }
    
    // ---------------------------------------------

    // TASK 1

    // const int rows = 4;
    // const int cols = 3;
    // int arr[rows][cols];
    // int counter = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = -10 + rand() % 20;
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] != 0){
    //             counter++;
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << "Numbers not 0 = " << counter << endl;

    // TASK 2


    // const int rows = 3;
    // const int cols = 3;
    // int arr[rows][cols];
    // int counter = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = -10 + rand() % 20;
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] == 0){
    //             counter++;
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << "Numbers equal 0 = " << counter << endl;

    // TASK 3

    // const int rows = 7;
    // const int cols = 3;
    // int arr[rows][cols];
    // int counter = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = -20 + rand() % 40;
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] >= -12 && arr[i][j] <= 12){
    //                 counter++;
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "Modul 12: " << counter << endl;

    // TASK 4


    // const int rows = 4;
    // const int cols = 5;
    // int arr[rows][cols];
    // int counter = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = -20 + rand() % 40;
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] > 0){
    //                 counter++;
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "Positive numbers: " << counter << endl;

    // TASK 5

    // const int rows = 5;
    // const int cols = 4;
    // float arr[rows][cols];
    // float sum = 1;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = (rand() % 10) + rand() / static_cast<float>(RAND_MAX);
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] > 0){
    //                 sum = sum * arr[i][j];
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "Multiply of all positive numbers: " << sum << endl;

    // TASK 6

    // const int rows = 5;
    // const int cols = 4;
    // float arr[rows][cols];
    // float sum = 1;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = (-10 + rand() % 20) + rand() / static_cast<float>(RAND_MAX);
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] < 0){
    //                 sum = sum * arr[i][j];
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "Multiply of all negative numbers: " << sum << endl;

    // TASK 7

    // const int rows = 4;
    // const int cols = 4;
    // int arr[rows][cols];
    // int counter = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = (-10 + rand() % 20) + rand() / static_cast<float>(RAND_MAX);
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] / 6 == 1){
    //                 counter++;
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "number / 6 = 1: " << counter << endl;

    // TASK 8

    // const int rows = 5;
    // const int cols = 6;
    // int arr[rows][cols];
    // int min = 0;
    // int min_index_i = 0;
    // int min_index_j = 0;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = (-10 + rand() % 20) + rand() / static_cast<float>(RAND_MAX);
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] < min){
    //                 min = arr[i][j];
    //                 min_index_i = i;
    //                 min_index_j = j;
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "min number: " << arr[min_index_i][min_index_j] << endl;

    // TASK 9

    // const int rows = 5;
    // const int cols = 6;
    // int arr[rows][cols];
    // int min = 0;
    // int max_index_i = 0;
    // int max_index_j = 0;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = (-10 + rand() % 20) + rand() / static_cast<float>(RAND_MAX);
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] > min){
    //                 min = arr[i][j];
    //                 max_index_i = i;
    //                 max_index_j = j;
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "max number: " << arr[max_index_i][max_index_j] << endl;


    // TASK 10

    // const int rows = 5;
    // const int cols = 4;
    // float arr[rows][cols];
    // float sum = 1;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         arr[i][j] = (-10 + rand() % 20) + rand() / static_cast<float>(RAND_MAX);
    //         cout << setw(5) << arr[i][j] << " ";
    //         if(arr[i][j] < 0){
    //                 sum = sum + arr[i][j];
    //             }
    //     }
    //     cout << endl;
    // }
    // cout << "Sum of all negative numbers: " << sum << endl;


    // --------------------------------------------------------

    

    return 0;
}