#include <iostream>

using namespace std;

int main(){

    signed int val1 = 10;
    signed int val2 = -300;  
    cout << "singed value 1: " << val1 << endl;
    cout << "signed value 2: " << val2 << endl;
    cout << "sizeof(value 1): " << sizeof(val1) << endl;
    cout << "sizeof(value 2): " << sizeof(val2) << endl;
    cout << "===========================================" << endl;

    unsigned int val3 = 4;
    //unsigned int val4 = -5;
    // not valid because storing a negative number as unsigned will give a compiler error
    cout << "unsigned value 3: " << val3 << endl;
    cout << "sizeof(value 3): " << sizeof(val3) << endl;
    cout << "===========================================" << endl;

    short int short_int = 455;
    unsigned int unsigned_int = 77;
    signed long int signed_long_int = 44;
    long long int long_long_int = 999;
    cout << "short_int: " << short_int << endl;
    cout << "unsigned_int: " << unsigned_int << endl;
    cout << "signed_long_int: " << signed_long_int << endl;
    cout << "long_long_int: " << long_long_int << endl;
    cout << "sizeof(short_int): " << sizeof(short_int) << endl;
    cout << "sizeof(unsigned_int): " << sizeof(unsigned_int) << endl;
    cout << "sizeof(signed_long_int): " << sizeof(signed_long_int) << endl;
    cout << "sizeof(long_long_int): " << sizeof(long_long_int) << endl;
    cout << "===========================================" << endl;
    return 0;
}