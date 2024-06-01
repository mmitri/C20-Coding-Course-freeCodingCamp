#include <iostream> 
using namespace std;

int sumFunction(int first_num, int second_num){
    int sum = first_num + second_num;
    return sum;
}

// challenge from video
int multiplyFunction(int first_num, int second_num){
    int sum = first_num * second_num;
    return sum;
}

int main(){
    int first_num = 10;
    int second_num = 34;
    int sum = sumFunction(first_num,second_num);
    cout << "First Num: " << first_num << endl;
    cout << "Second Num: " << second_num << endl;
    cout << "1. Sum of two numbers is: " << sum << endl;
    cout << "2. Sum of two numbers is: " << sumFunction(99,23) << endl;
    cout << "3. Product of two numbers is: " << multiplyFunction(first_num,second_num) << endl;
    return 0;
}