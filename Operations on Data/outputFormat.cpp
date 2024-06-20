#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main(){
    // std::endl places a new line character on the output stream
    // which is identical to using '\n'.
    cout << "================endl====================" << endl;
    cout << "Hello World! with endl" << endl;
    cout << "Hello World! with \\n\n";

    // std::flush forcefully empties the output buffer.
    // Helpful to make sure a message has been sent to the screen.
    cout << "================flush====================" << endl;
    cout << "Flushing buffer..." << endl << flush;

    // std::setw() adjusts the field witdth for the item printed.
    cout << "================setw====================" << endl;
    int name_width = 10;
    int age_width = 5;
    cout << setw(name_width) <<  "Lastname"  << setw(name_width) << "Firstname" << setw(age_width) << "Age" << endl;
    cout << setw(name_width) << "Daniel"  << setw(name_width) << "Gray" << setw(age_width) << "25" << endl;
    cout << setw(name_width) << "Stanley" << setw(name_width)  << "Woods" << setw(age_width) <<  "33" << endl;
    cout << setw(name_width) <<  "Jordan" << setw(name_width)  << "Parker" << setw(age_width) << "45" << endl;
    cout << setw(name_width) <<  "Joe" << setw(name_width) << "Ball" << setw(age_width) << "21" << endl;
    cout << setw(name_width) << "Josh" << setw(name_width) << "Carr" << setw(age_width) <<"27" << endl;
    cout << setw(name_width) << "Izaiah" << setw(name_width) << "Robinson" << setw(age_width) << "29" << endl;

    // Justify: Value to manipulate justification of text, either left, right, or internal.
    // right justified table
    cout << "===========right justified===============" << endl;
    int col_width = 20;
    cout << right;
    cout << setw(col_width) <<  "Lastname"  << setw(col_width) << "Firstname" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width) <<  "33" << endl;
    cout << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width) <<"27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;

    cout << "============left justified===============" << endl;
    cout << left;
    cout << setw(col_width) <<  "Lastname"  << setw(col_width) << "Firstname" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width) <<  "33" << endl;
    cout << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width) <<"27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;

    cout << "==========internal justified=============" << endl;
    cout << right;
    cout << setw(10) << -123.45 << "(right) "<< endl;
    cout << internal;
    cout << setw(10) << -123.45 << "(internal)"<< endl;

    cout << "================setfill==================" << endl;
    cout << left;
    cout << setfill('-');
    cout << setw(col_width) <<  "Lastname"  << setw(col_width) << "Firstname" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Daniel"  << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width)  << "Woods" << setw(col_width) <<  "33" << endl;
    cout << setw(col_width) <<  "Jordan" << setw(col_width)  << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) <<  "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width) <<"27" << endl;
    cout << setw(col_width) << "Izaiah" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;

    // showpos/noshowpos: shows or hides the positive (+) sign for numbers
    cout << "================showpos==================" << endl;
    int pos_num = 34;
    int neg_num = -21;
    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl;
    cout << showpos << "std::showpos" << endl;
    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl;
    cout << noshowpos;

    // base number systems: dec, hex, oct
    cout << "==============dec, hex, oct==============" << endl;
    int pos_int = 717273;
    int neg_int = -9212;
    double double_var = 1412.88;
    cout << dec << "std::dec" << endl;
    cout << "pos_int: " << pos_int << endl;
    cout << "neg_int: " << neg_int << endl;
    cout << "double_var: " << double_var << endl;
    cout << hex << "std::hex" << endl;
    cout << "pos_int: " << pos_int << endl;
    cout << "neg_int: " << neg_int << endl;
    cout << "double_var: " << double_var << endl;
    cout << oct << "std::oct" << endl;
    cout << "pos_int: " << pos_int << endl;
    cout << "neg_int: " << neg_int << endl;
    cout << "double_var: " << double_var << endl;

    // uppercase format
    cout << "=============uppercase=============" << endl;
    cout << uppercase;
    cout << "pos_int: " << dec << pos_int << endl;
    cout << "neg_int: " << hex << neg_int << endl;
    cout << "double_var: " << oct << double_var << endl;
    return 0;
}