#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(int argc, char** argv){
    // std is like a highway to the terminal/console
    char val;
    cout << "This message is printed to the console" << endl;
    cout << "Inputing data... ";
    cin >> val;
    cout << val << endl;
    cerr << "std::cerr output : This message is an error!" << endl;
    clog << "std::clog output : This message is a log ;)" << endl;

    // Clear the input buffer after reading `val`
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int age;
    string name;
    cout << "Please type in your full name: " << endl;
    // Data with spaces
    getline(cin, name);
    cout << "Please type your age: " << endl;
    cin >> age;
    cout << "Hello " << name << "! You are " << age << " years old." << endl;
    return 0;
}