#include <iostream>
#include <limits>
using namespace std;

int main(){
    cout << "Range for short is: " << numeric_limits<short>::lowest() << " to " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "Range for long is: " << numeric_limits<long>::lowest() << " to " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "Range for int is: " << numeric_limits<int>::lowest() << " to " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Range for double is: " << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    cout << "Range for float is: " << numeric_limits<float>::lowest() << " to " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "Range for unsigned short is: " << numeric_limits<unsigned short>::lowest() << " to "<< numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << endl;
    cout << "Range for unsigned long is: " << numeric_limits<unsigned long>::lowest() << " to " << numeric_limits<unsigned long>::min() << " to " << numeric_limits<unsigned long>::max() << endl;
    cout << "Range for unsigned int is: " << numeric_limits<unsigned int>::lowest() << " to " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;
    cout << "Range for long double is: " << numeric_limits<long double>::lowest() << " to " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;
    return 0;
}