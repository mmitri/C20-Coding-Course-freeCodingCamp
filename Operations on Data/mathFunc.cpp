#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double weight = 5.6;
    double savings = -9012;
    double expo = exp(10);

    cout << "=============floor=============" << endl;
    cout << "Weight floor is: " << floor(weight) << endl;
    cout << "Weight ceil is: " << ceil(weight) << endl;

    cout << "==============abs==============" << endl;
    cout << "Weight abs is: " << abs(weight) << endl;
    cout << "Savings abs is: " << abs(savings) << endl;

    // exp: f(x) = e ^ x, where e = 2.71828
    cout << "==============exp==============" << endl;
    cout << "The exponential of 10 is: " << expo << endl;

    cout << "==============pow==============" << endl;
    cout << "3 ^ 4 is: " << pow(3,4) << endl;
    cout << "9 ^ 3 is: " << pow(9,3) << endl;

    cout << "=============sqrt==============" << endl;
    cout << "The square root of 81 is: " << sqrt(81) << endl;

    cout << "=============round=============" << endl;
    cout << "3.654 rounded is: " << round(3.654) << endl;
    return 0;
}