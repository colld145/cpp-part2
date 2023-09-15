#include <iostream>

using namespace std;

int main(){

    /*Завдання 1. Вивести на екран фігури, заповнені зірочками.
    Діалог з користувачем реалізувати за допомогою меню.*/

    // bool exit = false;
	// int size = 10;

	// while (!exit)
	// {
	// 	int choice = 0;
	// 	cout << "Enter a choice (1-9): ";
	// 	cin >> choice;
	// 	switch (choice)
	// 	{
	// 	case 1:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i >= j) {
	// 					cout << "   ";
	// 				}
	// 				else {
	// 					cout << " * ";
	// 				}
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 2:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j <= i; j++)
	// 			{
	// 				cout << " * ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 3:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i <= j && i + j <= size - 1)
	// 				{
	// 					cout << " * ";
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 4:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i >= j && i + j >= size - 1)
	// 				{
	// 					cout << " * ";
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 5:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i <= j && i + j <= size - 1)
	// 				{
	// 					cout << " * ";
	// 				}
	// 				else if (i >= j && i + j >= size - 1) {
	// 					cout << " * ";
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 6:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i < j && i + j < size - 1)
	// 				{
	// 					cout << "   ";
	// 				}
	// 				else if (i > j && i + j > size - 1) {
	// 					cout << "   ";
	// 				}
	// 				else
	// 					cout << " * ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 7:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i < j && i + j < size - 1)
	// 				{
	// 					cout << "   ";
	// 				}
	// 				else if (i > j && i + j > size - 1) {
	// 					cout << "   ";
	// 				}
	// 				else if(j < size/2)
	// 					cout << " * ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 8:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i <= j && i + j < size - 1)
	// 				{
	// 					cout << "   ";
	// 				}
	// 				else if (i > j ) {
	// 					cout << "   ";
	// 				}
	// 				else if (j >= size / 2)
	// 					cout << " * ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 9:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i + j <= size - 1)
	// 				{
	// 					cout << " * ";
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
	// 		break;
	// 	case 10:
	// 		for (int i = 0; i < size; i++)
	// 		{
	// 			for (int j = 0; j < size; j++)
	// 			{
	// 				if (i + j >= size - 1)
	// 				{
	// 					cout << " * ";
	// 				}
	// 				else
	// 					cout << "   ";
	// 			}
	// 			cout << endl;
	// 		}
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

    // ----------------------------------------------------

    /*Завдання 1. Користувач вводить число. 
    Визначити кількість цифр у цьому числі, порахувати їхню суму та середнє
    арифметичне. Визначити кількість нулів у цьому числі.
    Спілкування з користувачем організувати через меню.*/

    int number = 0; bool exit = false;
    cout << "Enter a number: ";
    cin >> number;

    while (!exit)
	{
		int choice = 0;
		cout << "\n1. Print amount of numbers\n2. Print sum and average\n3. Print amount of nulls\n0. Exit\n\nEnter a choice: ";
		cin >> choice;
        string number_str = to_string(number);
        int amount_of_numbers = 0;
        int amount_of_nulls = 0;
        int temp = 0;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < number_str.length(); i++)
            {
                amount_of_numbers++;
            }
            cout << "Amount of numbers in '" << number << "' : " << amount_of_numbers << endl;
            break;
        case 2:
            
            break;
        case 3:
            for (int i = 0; i < number_str.length(); i++)
            {
                if(number_str[i] == '0'){
                    amount_of_nulls++;
                }
            }
            cout << "Amount of nulls in '" << number << "' : " << amount_of_nulls << endl;
            break;
        case 0:
            cout << "Bye!" << endl;
            exit = true;
            break;
        default:
            cout << "Incorrect choice! Try again." << endl;
            break;
        }
    }

    return 0;
}