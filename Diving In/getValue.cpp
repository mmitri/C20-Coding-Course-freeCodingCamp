#include <iostream> 
// iostream is a library that makes it easy to print to the console

consteval int get_value(){
    return 3;
}

int main(){ // starting point of the program, ran from top to bottom
    constexpr int value = get_value();
    std::cout << "Number 1.";
    std::cout << "value: " << value << std::endl; // endl prints a new line
    std::cout << "Number 2.";
    return 0; // sends information to OS of if program is successful
}