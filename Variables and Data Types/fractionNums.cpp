#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Declare variables
    float number1 = 1.12345678901234567890f; // precision = 7
    double number2 = 1.12345678901234567890; // precision = 17
    long double number3 = 1.12345678901234567890L; // precision = 20

    // Size of types
    cout << "sizeof float: " << sizeof(number1) << endl;
    cout << "sizeof double: " << sizeof(number2) << endl;
    cout << "sizeof long double: " << sizeof(number3) << endl;
    cout << "==============Size of types==============" << endl;

    // Precision
    cout << setprecision(20); // control the precision from std::cout
    cout << "number1 is: " << number1 << endl;
    cout << "number2 is: " << number2 << endl;
    cout << "number3 is: " << number3 << endl;
    cout << "==============Float Problems==============" << endl;

    // Float problems
    float num4 = 192400023.0f; // Error with narroring conversion because 
    // value is bigger than the size alloted for a float type
    double num5 = 192400023.0; // no error
    cout << "num4: " << num4 << endl;
    cout << "num5: " << num5 << endl;
    cout << "==============Scientific Notation==============" << endl;

    // Scientific Notation
    double number6 = 192400023;
    double number7 = 1.92400023e8; // multiply the number by 10^8
    double number8 = 1.924e8; // multiply the number by 10^8
    double number9 = 0.00000000003498;
    double number10 = 3.498e-11; // multiply the number by 10^-11
    cout << "number6: " << number6 << " sizeof is: " << sizeof(number6) << endl;
    cout << "number7: " << number7 << " sizeof is: " << sizeof(number7) << endl;
    cout << "number8: " << number8 << " sizeof is: " << sizeof(number8) << endl;
    cout << "number9: " << number9 << " sizeof is: " << sizeof(number9) << endl;
    cout << "number10: " << number10 << " sizeof is: " << sizeof(number10) << endl;
    cout << "==============Infinity and Nan==============" << endl;

    // Infinity and NaN
    double number11 = 5.6;
    double number12{};
    double number13{};
    double result1 = number11/number12;
    cout << number11 << " / " << number12 << " = " << result1 << endl;
    cout << result1 << " + " << number11 << " = " << result1 + number11 << endl;
    double result2 = number12 / number13;
    cout << number12 << " / " << number13 << " = " << result2 << endl;
    return 0;
}