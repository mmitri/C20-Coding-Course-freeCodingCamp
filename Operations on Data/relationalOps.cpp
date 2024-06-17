#include <iostream>

using namespace std;

int main(){
    int num1 = 90;
    int num2 = 2;

    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "==============Comparing===============" << endl;
    cout << boolalpha;
    cout << "num1 < num2 is: " << (num1 < num2) << endl;
    cout << "num1 > num2 is: " << (num1 > num2) << endl;
    cout << "num1 == num2 is: " << (num1 == num2) << endl;
    cout << "num1 != num2 is: " << (num1 != num2) << endl;
    cout << "num1 >= num2 is: " << (num1 >= num2) << endl;
    cout << "num1 <= num2 is: " << (num1 <= num2) << endl;
    cout << "==============Storing===============" << endl;
    bool result = (num1 == num2);
    cout << num1 << " == " << num2 << " : " << result << endl;
    return 0;
}