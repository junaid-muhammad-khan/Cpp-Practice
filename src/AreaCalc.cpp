#include <iostream>
using namespace std;

// function prototypes
int calcArea(int, int);
void countDimensions(int&, int&);

int main() {
    int lengthRec, widthRec, area;
    
    countDimensions(lengthRec, widthRec);
    
    cout << "Length of Rectangle: " << lengthRec << endl;
    cout << "Width of Rectangle: " << widthRec << endl;
    
    area = calcArea(lengthRec, widthRec);
    cout << "Area of Rectangle is " << area << " square units\n";
    
    return 0;
}

// function definitions
void countDimensions(int& length, int& width) {
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
}

int calcArea(int length, int width) {
    return length * width;
}
