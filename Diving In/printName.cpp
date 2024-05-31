#include <iostream>

consteval const char* name(){
    return "Mark Mitri";
    // because this return type is a const char, the function must match the type
}

int main(){
    constexpr const char* myName = name(); 
    // saving the result from the function must match the return type
    for(int i=1;i<11;i++){ // for loop to print name 10 times
        std::cout << "i: " << i << " " << myName << std::endl; // iostream print
    }
    return 0;
}