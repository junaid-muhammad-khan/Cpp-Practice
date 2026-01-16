#include <iostream>
using namespace std;

// function prototype
void Average(double num1, double num2);
void Greetings() {  
    cout << "This is the average number program\n";
}

int main(){
    double val1 , val2;
    Greetings();
    cout << "Enter first Number: ";
    cin >> val1;
    cout << "Enter second Number: ";
    cin >> val2;
    Average(val1 , val2);
    return 0;
}

void Average(double num1, double num2){
    
    double sum = num1 + num2;
    double aveNum = sum/2;
    cout << "This is the average of the two number " << aveNum;
    
    
}