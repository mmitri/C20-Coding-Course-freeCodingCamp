#include <iostream>

using namespace std;

int main(){
    auto var1 = 12;
    auto var2 = 13.0;
    auto var3 = 14.0f;
    auto var4 = 15.0l;
    auto var5 = 'e';
    auto var6 = 123u;
    auto var7 = 123ul;
    auto var8 = 123ll;

    cout << "sizeof(var1): " << sizeof(var1) << " bytes" << endl;
    cout << "sizeof(var2): " << sizeof(var2) << " bytes" << endl;
    cout << "sizeof(var3): " << sizeof(var3) << " bytes" << endl;
    cout << "sizeof(var4): " << sizeof(var4) << " bytes" << endl;
    cout << "sizeof(var5): " << sizeof(var5) << " bytes" << endl;
    cout << "sizeof(var6): " << sizeof(var6) << " bytes" << endl;
    cout << "sizeof(var7): " << sizeof(var7) << " bytes" << endl;
    cout << "sizeof(var8): " << sizeof(var8) << " bytes" << endl;

    return 0;
}