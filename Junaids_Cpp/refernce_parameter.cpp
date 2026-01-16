#include <iostream>
using namespace std;

//function prototype
void countDimensions(int&,int&);

int main() {
    int lengthRec, // lenth of rectangle
        widthRec; // width of rectangle
        
    countDimensions(lengthRec,widthRec);
    
    cout << "Length of Rectangle " << lengthRec << endl;
    cout << "Width of Rectangle " << widthRec << endl;
    
    return 0;
}
// function Definiation
void countDimensions(int& length , int& width){
    cout << "Enter the length : ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    
}