#include <iostream>
using namespace std;

// function prototype
void EvenOrODD(int num);
void Greetings() {  
    cout << "This is the Even or ODD detection program\n";
}

int main(){
    Greetings();
    int val;
    cout << "Enter a number to find wheater the number is Even or ODD: ";
    cin >> val;
    EvenOrODD(val);
    return 0;
}

void EvenOrODD(int num){
    
    if( num % 2 == 0){
        cout << num << " is Even";
    }
    else if ( num % 2 == 1) {
        cout << num << " is ODD";
    }
    else {
        cout << " Invalid Number";
    }
}