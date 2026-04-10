#include <iostream>
using namespace std;

int main(){
    const std::size_t COUNT = 10;
    std::size_t integer = 0;

    while(integer < COUNT){
        cout << boolalpha << "I love learning about C++ | i = " << integer << " < 10?: " << (integer < COUNT) << endl;
        ++integer;
    }
    cout << "While loop completed." << endl;

    return 0;
}