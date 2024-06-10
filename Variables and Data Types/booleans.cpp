#include <iostream>

using namespace std;

int main(){
    bool red_light = true;
    bool green_light = false;

    if(red_light){
        cout << "Stop!" << endl;
    }else{
        cout << "Go!" << endl;
    }

    if(green_light == false){
        cout << "Green light is not on!" << endl;
    }else{
        cout << "Green light is on!" << endl;
    }

    cout << "sizeof(bool): " << sizeof(red_light) << " byte." << endl;
    cout << "red_light: " << red_light << endl;
    cout << "green_light: " << green_light << endl; 
    cout << boolalpha << "red_light: " << red_light << endl;
    cout << boolalpha << "green_light: " << green_light << endl; 
    return 0;
}