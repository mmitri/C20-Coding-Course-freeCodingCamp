#include <iostream>

using namespace std;

int main(){
    bool val1 = true;
    bool val2 = false;
    bool val3 = true;
    
    cout << boolalpha;
    cout << "val 1: " << val1 << endl;
    cout << "val 2: " << val2 << endl;
    cout << "val 3: " << val3 << endl;

    cout << "============AND==============" << endl;
    cout << "val 1 AND val 2: " << (val1 && val2) << endl;
    cout << "val 2 AND val 3: " << (val2 && val3) << endl;
    cout << "val 1 AND val 3: " << (val1 && val3) << endl;
    cout << "val 1 AND val 2 AND val 3: " << (val1 && val2 && val3) << endl;

    cout << "=============OR==============" << endl;
    cout << "val 1 OR val 2: " << (val1 || val2) << endl;
    cout << "val 2 OR val 3: " << (val2 || val3) << endl;
    cout << "val 1 OR val 3: " << (val1 || val3) << endl;
    cout << "val 1 OR val 2 OR val 3: " << (val1 || val2 || val3) << endl;

    cout << "=============NOT==============" << endl;
    cout << "NOT val 1: " << (!val1) << endl;
    cout << "NOT val 2: " << (!val2) << endl;
    cout << "NOT val 3: " << (!val3) << endl;

    cout << "======Logical Expression======" << endl;
    cout << "!(val1 && val2) || (val3 || val2 && val1): " << (!(val1 && val2) || (val3 || val2 && val1)) << endl;

    int d = 34;
    int e = 21;
    int f = 8;
    cout << "==========Combination==========" << endl;
    cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << endl;
    cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f)) << endl;
    cout << "(d < e) && (d > f): " << ((d < e) && (d > f)) << endl;
    cout << "(f > e) || (d < f): " << ((f > e) && (d < f)) << endl;
    cout << "(d > f) && (d <= f): " << ((d > f) && (d <= f)) << endl;
    cout << "(!val1) && (d ==e): " << ((!val1) && (d == e)) << endl;
    return 0;
}