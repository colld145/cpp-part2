#include <iostream>

using namespace std;

void Hello(string name){
    cout << "Hello, " << name << endl;
} 

int main(){
    string name;
    cout << "Enter a name: ";
    cin >> name;
    Hello(name);
    return 0;
}