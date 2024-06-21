#include <iostream>
using namespace std;

int main(){
    int num1 {55};
    int num2 {66};
    bool result = (num1 < num2);

    cout << "===============single if statement===================" << endl;
    cout << boolalpha << "result (" << num1 << " < " << num2 << "): " << result << endl;
    if(result == true){
        cout << num1 << " is less than " << num2 << endl;
    }
    
    if(result == false){
        cout << num1 << " is greater than " << num2 << endl;
    }

    cout << "================if else statement====================" << endl;
    num1 = 77;
    result = (num1 < num2);
    cout << boolalpha << "result (" << num1 << " < " << num2 << "): " << result << endl;
    if(result == true){
        cout << num1 << " is less than " << num2 << endl;
    }else{
        cout << num1 << " is greater than " << num2 << endl;
    }

    cout << "==============expression as condition================" << endl;
    num1 = 77;
    num2 = 124;
    if(num1 < num2){
        cout << num1 << " is less than " << num2 << endl;
    }else{
        cout << num1 << " is greater than " << num2 << endl;
    }

    cout << "===============Nesting if statements=================" << endl;
    bool red = false;
    bool green = true;
    bool yellow = false;
    bool police = true;
    if(red || yellow || (green && police)){
        cout << "STOP" << endl;
    }else if(green){
        cout << "GO" << endl;
    }
    cout << "Police officer (verbose)" << endl;
    if(green){
        if(police){
            cout << "STOP" << endl;
        }else{
            cout << "GO" << endl;
        }
    }
    return 0;
}