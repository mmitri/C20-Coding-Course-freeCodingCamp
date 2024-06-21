#include <iostream>
using namespace std;

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

void selectTool(int tool){
    switch (tool){
        case Pen: {
            cout << "Active tool is Pen" << endl;
        }break;
        case Marker: {
            cout << "Active tool is Marker" << endl;
        }break;
        case Eraser: {
            cout << "Active tool is Eraser" << endl;
        }break;
        case Rectangle: {
            cout << "Active tool is Rectangle" << endl;
        }break;
        case Circle: {
            cout << "Active tool is Circle" << endl;
        }break;
        case Ellipse: {
            cout << "Active tool is Ellipse" << endl;
        }break;
        default: {
            cout << "No tool selected" << endl;
        }
    }
}

int main(){
    int tool {Eraser};
    cout << "==================First tool==================" << endl;
    selectTool(tool);
    cout << "=================Second tool==================" << endl;
    tool = Ellipse;
    selectTool(tool);
    cout << "==================Third tool==================" << endl;
    tool = Circle;
    selectTool(tool);
    cout << "=================Fourth tool==================" << endl;
    bool validTool = false;
    while(!validTool){
        cout << "Select a tool (10 for Pen, 20 for Marker, 30 for Eraser, 40 for Rectangle, 50 for Circle, 60 for Ellipse): " ;
        cin >> tool;
        validTool = (tool == Pen || tool == Marker || tool == Eraser || tool == Rectangle || tool == Circle || tool == Ellipse);
        if (!validTool) {
            cout << "Invalid tool selected. Please try again." << endl;
        }
    }selectTool(tool);
    return 0;
}