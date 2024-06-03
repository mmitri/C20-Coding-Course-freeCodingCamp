#include <iostream>

using namespace std;

int main(){
    int num1 = 14; // Decimal
    int num2 = 014; // Octal
    int num3 = 0x14; // Hexadecimal
    int num4 = 0b001010; // Binary

    cout << "This number is: " << num1 << endl;
    cout << "This number is: " << num2 << endl;
    cout << "This number is: " << num3 << endl;
    cout << "This number is: " << num4 << endl;

    cout << "The size of number1 is: " << sizeof(num1) << endl;
    cout << "The size of number2 is: " << sizeof(num2) << endl;
    cout << "The size of number3 is: " << sizeof(num3) << endl;
    cout << "The size of number4 is: " << sizeof(num4) << endl;
    return 0;
}