#include <iostream>
using namespace std;

int main(){
    int scores [] {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << "==================Printing array with set size==================" << endl;
    for(size_t i=0;i<10;i++){
        cout << "scores[" << i << "]: " << scores[i] << endl;
    }

    cout << "=================Printing array with size < C++17===============" << endl;
    cout << "sizeof(scores): " << sizeof(scores) << endl;
    cout << "sizeof(scores[0]): " << sizeof(scores[0]) << endl;
    cout << "Number of elements = (sizeof(scores)/sizeof(scores[0])): " << sizeof(scores)/sizeof(scores[0]) << endl;

    cout << "=================Printing array with size > C++17===============" << endl;
    int count {size(scores)}; // from C++17 with std::size()
    cout << "size(scores): " << count << endl;
    for(size_t i=0;i<count;i++){
        cout << "scores[" << i << "]: " << scores[i] << endl;
    }

    cout << "======================Range-based for loop======================" << endl;
    for (auto element : scores){
        cout << "scores[" << element << "]: " << element << endl;
    }
    return 0;
}