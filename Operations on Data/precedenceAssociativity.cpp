#include <iostream>

using namespace std;

int main(){
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c - d / e - f + g;
    // 6 + 3 * 8 - 9 / 3 - 2 + 5
    // 6 + 24 - 9 / 3 - 2 + 5
    // 6 + 24 - 3 - 2 + 5
    // 30 - 3 - 2 + 5
    // 27 - 2 + 5
    // 25 + 5
    // 30
    cout << "result: " << result << endl;

    result = a / b * c + d - e + f;
    // 6 / 3 * 8 + 9 - 3 + 2
    // 2 * 8 + 9 - 3 + 2
    // 16 + 9 - 3 + 2
    // 25 - 3 + 2
    // 22 + 2
    // 24
    cout << "result: " << result << endl;

    result = a + (b * c) - (d / e) - f + g;
    cout << "result (): " << result << endl;

    int result1 = (a + b) * c - d / e - f + g;
    // (6 + 3) * 8 - 9 / 3 - 2 + 5
    // 9 * 8 - 9 / 3 - 2 + 5
    // 72 - 9 / 3 - 2 + 5
    // 72 - 3 - 2 + 5
    // 69 - 2 + 5
    // 67 + 5
    // 72
    cout << "result (): " << result1 << endl;

    return 0;
}