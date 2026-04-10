#include <iostream>

using namespace std;

int main(){
    // auto to deduce the type of the variable
    auto var1 = 12;
    auto var2 = 13.0;
    auto var3 = 14.0f;
    auto var4 = 15.0l;
    auto var5 = 'e';
    auto var6 = 123u;
    auto var7 = 123ul;
    auto var8 = 123ll;

    cout << "sizeof(" << var1 << ")  int:           " << sizeof(var1) << " bytes" << endl;
    cout << "sizeof(" << var2 << ")  double:        " << sizeof(var2) << " bytes" << endl;
    cout << "sizeof(" << var3 << ")  float:         " << sizeof(var3) << " bytes" << endl;
    cout << "sizeof(" << var4 << ")   long double:   " << sizeof(var4) << " bytes" << endl;
    cout << "sizeof(" << var5 << ") char:          " << sizeof(var5) << " bytes" << endl;
    cout << "sizeof(" << var6 << ") unsigned int:  " << sizeof(var6) << " bytes" << endl;
    cout << "sizeof(" << var7 << ") unsigned long: " << sizeof(var7) << " bytes" << endl;
    cout << "sizeof(" << var8 << ") long long:     " << sizeof(var8) << " bytes" << endl;

    return 0;
}