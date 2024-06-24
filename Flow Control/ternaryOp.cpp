#include <iostream>
using namespace std;

int main(){
    // result = (condition) ? option1 : option2;
    // /\ These are equivalent \/
    /*
    if(condition){
        result = option1;
    }else{
        result = option2;
    }
    */

    int max;
    int a = 35;
    int b = 20;

    cout << "==================Regular if statement==================" << endl;
    if(a > b){
        max = a;
    }else{
        max = b;
    }
    cout << "max: " << max << endl;
    cout << "===================Ternary Operation====================" << endl;
    max = (a > b) ? a : b;
    cout << "max: " << max << endl;
    return 0;
}