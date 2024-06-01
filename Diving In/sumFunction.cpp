#include <iostream> 
using namespace std;

int sumFunction(int first_num, int second_num){
    int sum = first_num + second_num;
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
    return 0;
}