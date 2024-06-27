#include <iostream>
using namespace std;

int main(){
    const size_t COUNT = 10;
    size_t integer = 0;

    // Main difference: do while loops run the body and then check the test condition.
    do{
        cout << boolalpha << "I love learning about C++ | i = " << integer << " < 10?: " << (integer < COUNT) << endl;
        ++integer;
    }while(integer < COUNT);
    cout << "do while loop completed." << endl;

    return 0;
}