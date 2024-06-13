#include <iostream>

using namespace std;

int main(){
    int value = 5;

    value = value + 1;
    cout << "The value is: " << value << endl;

    value = 5;

    value = value - 1;
    cout << "The value is: " << value << endl;
    
    cout << "==============Post Increment/Decrement================" << endl;
    value = 5;
    cout << value << endl;
    cout << "The value is incrementing post: " << value++ << endl;
    cout << "The value is: " << value << endl;
    value = 5;
    cout << value << endl;
    cout << "The value is decrementing post: " << value-- << endl;
    cout << "The value is: " << value << endl;

    cout << "===============Pre Increment/Decrement================" << endl;
    value = 5;
    cout << value << endl;
    cout << "The value is incrementing pre: " << ++value << endl;
    cout << "The value is: " << value << endl;
    value = 5;
    cout << value << endl;
    cout << "The value is decrementing pre: " << --value << endl;
    cout << "The value is: " << value << endl;

    return 0;
}