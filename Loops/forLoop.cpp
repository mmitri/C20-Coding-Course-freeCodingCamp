#include <iostream>
using namespace std;

int main(){
    // size_t: A representation of some unsigned int for positive numbers [sizes]
    /*
        Using size_t as a loop variable is generally beneficial when dealing 
        with sizes or indices returned by the standard library, as it ensures 
        type consistency and avoids sign mismatch issues. However, it is important 
        to be aware of the potential pitfalls of unsigned arithmetic and the need 
        for careful handling of loop conditions to avoid unexpected behavior.
    */
    const size_t singleLoopCOUNT = 1;
    const size_t learnCppCOUNT = 10;
    unsigned int integer = 0;
    size_t i = 0;
    for(integer;integer<singleLoopCOUNT;++integer)
        cout << "Single statement in body of for loop, so no need for {}" << endl;

    for(i;i<learnCppCOUNT;++i){
        cout << boolalpha << "I love learning about C++ | i = " << i << " < 10?: " << (i < 10) << endl;
    }    
    cout << boolalpha << "i = " << i << " < 10?: " << (i < 10) << endl; 
    // We can print this statement because the iterator i has been declared outside the for loop
    return 0;
}