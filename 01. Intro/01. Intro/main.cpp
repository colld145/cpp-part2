#include <iostream>

using namespace std;


int Plus(int* a, int* b) {
	return *a + *b;
}


class Person {
private:
	string login;
	string password;
public:
	string name;
	string surname;
	unsigned short int age;

	void Add() {
		cout << "Enter a name: ";
		cin >> name;
		cout << "Enter a surname: ";
		cin >> surname;
		cout << "Enter an age: ";
		cin >> age;
	}

	void Print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}
};


int main() {
	/*int a = 5; int b = 10;
	int* pA = &a; int* pB = &b;
	cout << "pA = " << addressof(pA) << endl << "a = " << addressof(a) << endl;
	cout << a << " + " << b << " = " << Plus(pA, pB) << endl;*/

	/*Person john;
	john.Add();
	john.Print();*/

	/*int number = 0;
	for (; number < 10 ;) {
		cout << number << endl;
		number++;
	}*/

	// ------------------------------------------------------

	/*Task 0. Обчислення відстані між населеними пунктами.
	Введіть вихідні дані:
	Масштаб карти (кількість кілометрів в одному сантиметрі) -> 120.
	Відстань між точками, що зображують населені пункти (см) -> 3.5.
	Відстань між населеними пунктами 420 км.*/

	/*int scale = 0;
	int distance = 0;

	cout << "Enter a scale: ";
	cin >> scale;
	cout << "Enter a distance: ";
	cin >> distance;
	cout << scale * distance << " kilometers" << endl;*/

	// ------------------------------------------------------

	/*Task 1. Користувач вводить із клавіатури час у секундах,
	що минув від початку дня.
	Вивести на екран поточний час у годинах, хвилинах і секундах.
	Порахувати скільки годин, хвилин і секунд залишилося до опівночі.*/

	/*int seconds_in_day = 86400;
	int passed_seconds = 0;
	cout << "Enter a passed seconds: ";
	cin >> passed_seconds;
	int hours = passed_seconds % seconds_in_day / 3600;
	int minutes = passed_seconds / 60 % 60;
	int seconds = passed_seconds % 60;
	cout << hours << ":" << minutes << ":" << seconds << endl;

	int time_to_midnight = seconds_in_day - passed_seconds;
	int temp_hours = time_to_midnight % seconds_in_day / 3600;
	int temp_minutes = time_to_midnight / 60 % 60;
	int temp_seconds = time_to_midnight % 60;
	cout << temp_hours << ":" << temp_minutes << ":" << temp_seconds << endl;*/

	// ------------------------------------------------------

	/*Task 2. Користувач вводить число. Визначити, чи є воно парним.*/

	/*
	int number = 0; cout << "Enter a number: "; cin >> number;
	if (number % 2 == 0) cout << number << " is pair.";
	else cout << number << " is unpair.";
	*/

	// ------------------------------------------------------

	/*Користувач вводить два числа. Вивести на екран менше з цих чисел.*/
	
	/*int a = 0; cout << "Enter a first number: "; cin >> a;
	int b = 0; cout << "Enter a second number: "; cin >> b;

	if (a < b) cout << a << " is less.";
	else if (a > b) cout << b << " is less.";
	else cout << "numbers are equal.";*/

	// ------------------------------------------------------

	/*Завдання 4
	Користувач вводить число. 
	Визначити додатне це число, від'ємне чи дорівнює нулю*/
	
	/*int number = 0; cout << "Enter a number: "; cin >> number;
	if (number > 0) cout << number << " is plus.";
	else if (number < 0) cout << number << " is minus.";
	else if (number == 0) cout << number << " is null.";*/

	// ------------------------------------------------------

	/*Завдання 5 
	Користувач вводить два числа. Визначити, чи рівні ці числа, і якщо ні, 
	вивести їх на екран у порядку зростання.*/

	/*int a = 0; cout << "Enter a first number: "; cin >> a;
	int b = 0; cout << "Enter a second number: "; cin >> b;

	if (a == b) cout << "The numbers are equal.";
	else if (a > b) cout << b << ", " << a;
	else if (a < b) cout << a << ", " << b;*/

	// ------------------------------------------------------

	/*
	Завдання 6

	Користувач із клавіатури вводить 5 оцінок студента. 
	Визначити, чи допущено студента до іспиту. 
	Студент отримує допуск, якщо його середній бал 4 бали і вище.*/


	/*int summary = 0;
	for (int i = 0; i < 5; i++)
	{
		int point = 0; cout << "Enter a point: "; cin >> point;
		summary += point;
	}

	int result = summary / 5;
	if (result >= 4) cout << "Student is admitted.";
	else cout << "Student is denied";*/

	// ------------------------------------------------------

	/*Завдання 7 

	Користувач вводить із клавіатури число. 
	Якщо воно парне, помножити його на три, інакше — поділити на два. 
	Результат вивести на екран.*/

	/*int number = 0; cout << "Enter a number: "; cin >> number;
	if (number % 2 == 0) number = number * 3;
	else number = number / 2;
	cout << "Result: " << number;*/

	// ------------------------------------------------------
	
	/*Завдання 8 

	Написати програму-калькулятор. 
	Користувач вводить два числа і вибирає арифметичну дію. 
	Вивести на екран результат.*/
	int result = 0; 
	int number = 0; cout << "Enter a number: "; cin >> number; 
	int number2 = 0; cout << "Enter a number: "; cin >> number2; 
	char symbol; cout << "Enter a symbol: "; cin >> symbol;
	if (symbol == '+')
	{
		result = number + number2; cout << number << symbol << number2 << " = " << result << endl;
	}
	else if (symbol == '-')
	{
		result = number - number2; cout << number << symbol << number2 << " = " << result << endl;
	}
	else if (symbol == '*')
	{
		result = number * number2; cout << number << symbol << number2 << " = " << result << endl;
	}
	else if (symbol == '/')
	{
		result = number / number2; cout << number << symbol << number2 << " = " << result << endl;
	}


	return 0;
} 