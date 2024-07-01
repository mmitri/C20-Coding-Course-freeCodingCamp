#include <iostream>
using namespace std;

int main(){
    char messFixed [10] {'H','E','L','L','O','W','O','R','L','D'};
    char messTerm [] {'H','E','L','L','O','W','O','R','L','D','\0'};
    char messAuto [11] {'H','E','L','L','O','W','O','R','L','D'};
    char messLiteral [] {"HELLOWORLD"};
    cout << "==============Fixed size char array==============" << endl;
    cout << "message: "; 
    for (auto element : messFixed){
        cout << element;
    } cout << endl;
    cout << "size(messageFixed): " << size(messFixed) << endl;

    cout << "===============Change an element=================" << endl;
    messFixed[1] = 'x';
    cout << "message: "; 
    for (auto element : messFixed){
        cout << element;
    } cout << endl;
    messFixed[1] = 'E';

    cout << "=============Printing using cout=================" << endl;
    cout << "message: " << messFixed << endl;
    cout << "message after null char: " << messTerm << endl; 
    cout << "size(messageTerm): " << size(messTerm) << endl;

    cout << "================Auto C-String====================" << endl;
    cout << "- Letting the compiler add the null terminated string" << endl;
    cout << "  by setting the size of the array to n+1" << endl;
    cout << "message: " << messAuto << endl;
    cout << "size(messageAuto): " << size(messAuto) << endl;

    cout << "===============String Literals===================" << endl;
    cout << "message: " << messLiteral << endl;
    cout << "size(messageLiteral): " << size(messLiteral) << endl;

    return 0;
}