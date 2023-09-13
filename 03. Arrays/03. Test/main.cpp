#include <iostream>

using namespace std;

int main() {

	/*bool exit = false;
	int size = 10;

	while (!exit)
	{
		int choice = 0;
		cout << "Enter a choice (1-9): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j) {
						cout << "   ";
					}
					else {
						cout << " * ";
					}
				}
				cout << endl;
			}
			break;
		case 2:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j <= i; j++)
				{
					cout << " * ";
				}
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && i + j <= size - 1)
					{
						cout << " * ";
					}
					else
						cout << "   ";
				}
				cout << endl;
			}
			break;
		case 4:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j && i + j >= size - 1)
					{
						cout << " * ";
					}
					else
						cout << "   ";
				}
				cout << endl;
			}
			break;
		case 5:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && i + j <= size - 1)
					{
						cout << " * ";
					}
					else if (i >= j && i + j >= size - 1) {
						cout << " * ";
					}
					else
						cout << "   ";
				}
				cout << endl;
			}
			break;
		case 6:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i < j && i + j < size - 1)
					{
						cout << "   ";
					}
					else if (i > j && i + j > size - 1) {
						cout << "   ";
					}
					else
						cout << " * ";
				}
				cout << endl;
			}
			break;
		case 7:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i < j && i + j < size - 1)
					{
						cout << "   ";
					}
					else if (i > j && i + j > size - 1) {
						cout << "   ";
					}
					else if(j < size/2)
						cout << " * ";
				}
				cout << endl;
			}
			break;
		case 8:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && i + j < size - 1)
					{
						cout << "   ";
					}
					else if (i > j ) {
						cout << "   ";
					}
					else if (j >= size / 2)
						cout << " * ";
				}
				cout << endl;
			}
			break;
		case 9:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i + j <= size - 1)
					{
						cout << " * ";
					}
					else
						cout << "   ";
				}
				cout << endl;
			}
			break;
		case 10:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i + j >= size - 1)
					{
						cout << " * ";
					}
					else
						cout << "   ";
				}
				cout << endl;
			}
			break;
		case 0:
			cout << "Bye!" << endl;
			exit++;
			break;
		default:
			cout << "Error choice! Try again." << endl;
			break;
		}
	}*/
	

	// TASK 1
	// 
	//const int SIZE = 10;
	//int arr[SIZE] = { 5,-6,67,-435,8,2,-6,52,-45,213 };
	//int result = 0;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr[i] < 0) {
	//		result += arr[i];
	//	}
	//}
	//cout << "Sum of minus numbers: " << result << endl;
	
	// ----------------------------------------------------

	//TASK 2
	// 
	//const int SIZE = 10;
	//int arr[SIZE] = { 521,-6,67,-50,8,2,-6,52,-45,213 };
	//int min = 0;
	//int min_addr = 0;
	//int max = 0;
	//int max_addr = 0;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr[i] >= max) {
	//		max = arr[i];
	//		max_addr = i;
	//	} 

	//	if (arr[i] <= min) {
	//		min = arr[i];
	//		min_addr = i;
	//	} 
	//}
	//cout << "Max number = " << arr[max_addr] << "[" << max_addr << "]";
	//cout << "Min number = " << arr[min_addr] << "[" << min_addr << "]";

	// ---------------------------------------------------------------------
	
	//TASK 3

	//const int SIZE = 10;
	//int arr[SIZE] = { 521,-6,67,-50,8,2,-6,52,-45,213 };
	//int first_minus = 0;
	//bool is_first = false;
	//int last_plus = 0;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr[i] < 0 && is_first == false) {
	//		first_minus = i;
	//		is_first++;
	//	}
	//	if (arr[i] > 0) {
	//		last_plus = i;
	//	}
	//}
	//cout << "First minus = " << arr[first_minus] << endl;
	//cout << "Last plus = " << arr[last_plus] << endl;

	// --------------------------------------------------------

	// TASK 4
	
	srand((unsigned)time(NULL));

	//const int SIZE = 100;
	//int arr[SIZE]{};

	//for (int i = 0; i < SIZE; i++)
	//{
	//	arr[i] = 1 + rand() % 50;
	//	cout << arr[i] << ", ";
	//}
	//cout << endl;

	//int sum = 0;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	sum += arr[i];
	//}

	//cout << "Sum of array = " << sum << endl;

	// ------------------------------------------------

	// TASK 5

	const int SIZE = 20;
	float arr[SIZE];
	float sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 1 + rand() % 50;
		cout << arr[i] << ", ";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0 || i == 0) {
			sum += arr[i];
		}
	}

	cout << "Sum of array (% / 2 == 0) = " << sum << endl;



	return 0;
}