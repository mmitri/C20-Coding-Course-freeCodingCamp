#include <iostream>

using namespace std;

int main(){
    int val = 123;

    cout << "The value is: " << val << endl;
    cout << endl;
    val += 5; // value = value + 5;
    cout << "=================+=5==================" << endl;
    cout << "The value is now: " << val << endl;

    cout << "=================-=5==================" << endl;
    val -= 5; // value = value - 5;
    cout << "The value is now: " << val << endl;

    cout << "=================*=5==================" << endl;
    val *= 5; // value = value * 5;
    cout << "The value is now: " << val << endl;

    cout << "=================/=5==================" << endl;
    val /= 5; // value = value / 5;
    cout << "The value is now: " << val << endl;

    cout << "=================%=5==================" << endl;
    val %= 5; // value = value % 5;
    cout << "The value is now: " << val << endl;
    return 0;
}