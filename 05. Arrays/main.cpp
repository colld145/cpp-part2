#include <iostream>

using namespace std;


void PrintCube(int n, int k);
int Factorial(int n);
bool SimpleNumber(int n);
void MinAndMaxArray(int arr[], int size);


int main(){

    /*Завдання 1. Масив 3х4. Знайти кількість нулів*/

    // int row = 10;
    // int col = 10;
    // int arr[row][col];
    // int null_counter = 0;

    // srand((unsigned)time(NULL));
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         arr[i][j] = -50 + rand() % 100;
    //         cout << arr[i][j] << ", ";
    //         if(arr[i][j] == 0){
    //             null_counter++;
    //         } 
    //     }
    //     cout << endl;
    // }
    // cout << "Amount of nulls: " << null_counter << endl;



    /*Завдання 2. Дана квадратна матриця... */

    // bool exit = false;
	// int size = 10;
    // int row = 10;
    // int col = 10;
    // int arr[row][col];

    // srand((unsigned)time(NULL));
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         arr[i][j] = 10 + rand() % 90;
    //     }
    // }

	// while (!exit)
	// {
    //     int max = 0;
	// 	int choice = 0;
	// 	cout << "Enter a choice (1-10): ";
	// 	cin >> choice;
	// 	switch (choice)
	// 	{
	// 	case 1:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i >= j) {
    //                     cout << "   ";
						
	// 				}
	// 				else {
	// 					cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 2:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j <= i; j++)
	// 			{
    //                 cout << " " << arr[i][j];
    //                 if(arr[i][j] >= max){
    //                    max = arr[i][j];
    //                 }
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 3:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i <= j && i + j <= row - 1)
	// 				{
    //                     cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 4:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i >= j && i + j >= row - 1)
	// 				{
    //                     cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 5:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i <= j && i + j <= row - 1)
	// 				{
    //                     cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 				else if (i >= j && i + j >= row - 1) {
    //                     cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 6:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i < j && i + j < row - 1)
	// 				{
	// 					cout << "   ";
	// 				}
	// 				else if (i > j && i + j > row - 1) {
	// 					cout << "   ";
	// 				}
	// 				else
    //                     cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 7:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i < j && i + j < row - 1)
	// 				{
	// 					cout << "   ";
	// 				}
	// 				else if (i > j && i + j > row - 1) {
	// 					cout << "   ";
	// 				}
	// 				else if(j < row/2)
	// 					cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 8:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i <= j && i + j < row - 1)
	// 				{
	// 					cout << "   ";
	// 				}
	// 				else if (i > j ) {
	// 					cout << "   ";
	// 				}
	// 				else if (j >= row / 2)
	// 					cout << " " << arr[i][j];
    //                     if(arr[i][j] > max){
    //                         max = arr[i][j];
    //                     }
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 9:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i + j <= row - 1)
	// 				{
	// 					cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 10:
	// 		max = arr[0][0];
	// 		for (int i = 0; i < row; i++)
	// 		{
	// 			for (int j = 0; j < col; j++)
	// 			{
	// 				if (i + j >= row - 1)
	// 				{
	// 					cout << " " << arr[i][j];
    //                     if(arr[i][j] >= max){
    //                         max = arr[i][j];
    //                     }
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
    //         cout << "Max number: " << max << endl;
	// 		break;
	// 	case 0:
	// 		cout << "Bye!" << endl;
	// 		exit = true;
	// 		break;
	// 	default:
	// 		cout << "Error choice! Try again." << endl;
	// 		break;
	// 	}
	// }

    // -------------------------------------------------------



    /*1.Написати функцію, що виводить на екран прямокут-
    ник з висотою N і шириною K.*/

    // int n = 0; int k = 0;
    // cout << "Enter N and K: " << endl;
    // cin >> n >> k;
    // PrintCube(n, k);

    // -------------------------------

    /*2. Написати функцію, яка обчислює факторіал переда-
    ного їй числа. 5! = 1*2*3*4*5*/

    // int number = 0;
    // cout << "Enter a number: " << endl;
    // cin >> number;

    // cout << "Factorial '" << number << "' = " << Factorial(number) << endl;

    // --------------------------------

    /*3***. Написати функцію, яка перевіряє, чи є передане їй
    число простим. Число називається простим, якщо воно
    ділиться без залишку тільки на себе та на одиницю.*/

	// int number = 0;
	// cout << "Enter a number: ";
	// cin >> number;

	// cout << SimpleNumber(number) << endl;


	/*4. Написати функцію, що визначає мінімум і максимум
	(значення й номер) елементів переданого їй масиву.*/

	const int size = 5;
	int arr[size] = {5, 2, 10, 4, 1};

	MinAndMaxArray(arr, size);
    

    return 0;
}

void PrintCube(int n, int k){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int Factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * Factorial(n - 1);
}


bool SimpleNumber(int n){
	if(n % 1 != 0){
		return false;
	}
	
	for (int i = 2; i < n; i++)
	{
		if(n % i == 0){
			return false;
			break;
		}
	}
	return true;
}


void MinAndMaxArray(int arr[], int size){
	int max = arr[0];
	int max_i = 0;
	int min = arr[0];
	int min_i = 0;

	for (int i = 0; i < size; i++)
	{
		if(arr[i] > max){
			max = arr[i];
			max_i = i;
		}
		if(arr[i] < min){
			min = arr[i];
			min_i = i;
		}
	}
	cout << "Min element: " << arr[min_i] << endl;
	cout << "Max element: " << arr[max_i] << endl;
}