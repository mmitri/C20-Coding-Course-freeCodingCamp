#include <iostream>
using namespace std;

int main(){
    // Declare an array of ints
    int score[10]; // Junk Data

    cout << "===================Printing (junk) Empty Array===================" << endl;
    for(size_t i=0;i<10;i++){
        cout << "score[" << i << "]: "<< score[i] << endl;
    }
    cout << "================Assigning Data Manually to Array=================" << endl;
    score[4] = 45;
    score[2] = 12;
    score[1] = 22;
    // Printing Data out
    for(size_t i=0;i<10;i++){
        cout << "score[" << i << "]: "<< score[i] << endl;
    }
    cout << "=====================Assigning Data to Array=====================" << endl;
    // Assigning Data to array
    for(size_t i=0;i<10;i++){
        score[i] = i * 12;
        cout << "score[" << i << "]: "<< score[i] << endl;
    }
    cout << "=================Printing outside array boundary=================" << endl;
    cout << "score[11]?: " << score[11] << endl;
    cout << "====================Declaring and Assigning======================" << endl;
    double salaries[5] = {12.7,7.5,13.2,8.1,9.3};
    for(size_t i=0;i<5;i++){
        cout << "salaries[" << i << "]: "<< salaries[i] << endl;
    }
    cout << "=================Initializing some elements======================" << endl;
    int families[5] = {12, 4, 5};
    for(size_t i=0;i<5;i++){
        cout << "families[" << i << "]: "<< families[i] << endl;
    }
    cout << "====================Omiting size of array========================" << endl;
    int class_size[] = {10,12,14,15,12,11};int i=0;
    for(auto value : class_size){ // range-based loop
        cout << "class_size[" << i << "]: "<< value << endl;
        i++;
    }
    cout << "=====================Summing array values========================" << endl;
    int sum = 0;
    for(int element : score){
        sum += element;
    }
    cout << "score array sum: " << sum << endl;

    return 0;
}