#include <iostream>

using namespace std;

int main(){
    char char1 = 'a';
    char char2 = 'r';
    char char3 = 'r';
    char char4 = 'o';
    char char5 = 'w';

    cout << char1 << char2 << char3 << char4 << char5 << endl;
    cout << "sizeof(char): " << sizeof(char1) << " byte" << endl;

    char value = 74; // ASCII code for 'J'
    cout << "value: " << value << endl;
    cout << "value(int): " << static_cast<int>(value) << endl;

    return 0;
}