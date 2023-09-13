#include <iostream>

using namespace std;

int main(){
    
    // TASK 1

    // int seconds_in_day = 86400;
	// int passed_seconds = 0;
	// cout << "Enter a passed seconds: ";
	// cin >> passed_seconds;
	// int hours = passed_seconds % seconds_in_day / 3600;
	// int minutes = passed_seconds / 60 % 60;
	// int seconds = passed_seconds % 60;
	// cout << hours << ":" << minutes << ":" << seconds << endl;

    // TASK 2

    // float input_number = 0;

    // cout << "Enter a float number: ";
    // cin >> input_number;
    // float first_number = int(input_number);
    // float second_number = input_number - first_number;
    // second_number = (second_number * 100) + 0.1;
    // second_number = int(second_number);
    // cout << input_number << " = " << first_number << " grn. " << second_number << " kop." << endl;

    // TASK 3

    // int distance = 0; float time = 0; float speed = 0;

    // cout << "Enter a distance: ";
    // cin >> distance;
    // cout << "Enter a time: ";
    // cin >> time;
    // float minutes = int(time);
    // float seconds = time - minutes;
    // seconds = (seconds * 100) + 0.1;
    // seconds = int(seconds);
    // minutes = minutes * 60;
    // time = minutes + seconds;

    // speed = (distance / 1000) / (time / 3600);
    // cout << "Distance: " << distance << endl;
    // cout << "Time: " << time << " seconds" << endl;
    // cout << "Speed: " << speed << " km/h" << endl;

    // TASK 4

    int days = 0; int weeks = 0;
    cout << "Enter days: ";
    cin >> days;
    while (true)
    {
        if(days >= 7){
            weeks+=1;
            days-=7;
        }
        else if(days < 7){
            break;
        }
    }
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0; 
}