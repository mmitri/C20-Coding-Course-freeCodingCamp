#include <iostream>
using namespace std;

/*
    pointers are just another type of variable.
    they store the memory address (location) of another variable.
    the type of pointer must match the type of variable it points to.
    the size of a pointer is the same regardless of the type it points to.
    standard syntax is placing * after the type to indicate it's a pointer, and before the variable name.
*/
int main(){
    // Declaring pointers
    int* p_number {}; // can only store an address of a variable of type int
    double* p_fractional_number {}; // can only store an address of a variable of type double
    // Explicitly initialize to a null pointer
    int* p_number1 {nullptr};
    double* p_fractional_number1 {nullptr};
    // ^ never use pointers that point to nullptr

    cout << "Size of p_number pointer: " << sizeof(p_number) << " bytes" << endl; // 8
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // 4
    cout << "Size of p_fractional_number pointer: " << sizeof(p_fractional_number) << " bytes" << endl; // 8
    cout << "Size of double: " << sizeof(double) << " bytes" << endl; // 8

    cout << "Size of p_number1 pointer: " << sizeof(p_number1) << " bytes" << endl; // 8
    cout << "Size of int*: " << sizeof(int*) << " bytes" << endl; // 8
    cout << "Size of p_fractional_number1 pointer: " << sizeof(p_fractional_number1) << " bytes" << endl; // 8
    cout << "Size of double: " << sizeof(double) << " bytes" << endl; // 8

    int var {34};
    int* p_int {&var}; // address of operator (&) gives the memory address of the variable
    cout << "Int var: " << var << endl;
    cout << "p_int (Address in memory): " << p_int << endl;
    
    // can't cross assign between pointers of different types
    int* p_int1 {nullptr};
    double double_var {33};

    // p_int1 = &double_var; // invalid, p_int1 is an int pointer and double_var is a double variable

    // Dereferencing a pointer
    int* p_int2 {nullptr};
    int int_data {45};
    p_int2 = &int_data;
    cout << "value: " << *p_int2 << endl; // reading something stored into a pointer
    
    return 0;
}