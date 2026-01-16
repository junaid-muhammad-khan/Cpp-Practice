// this file let user to enter a file name
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile;
    string filename;
    int number;
    //get file name from the user
    cout << "Enter the filename: ";
    cin >> filename;
    
    //open the file
    inputFile.open(filename);
    // if the file successfully opens
    if(inputFile){
        //read number from the file and display them
        while(inputFile >> number){
            cout << number << endl;
        }
        //close the file
        inputFile.close();
    }
    else{
        // display an error message
        cout << "Error opening the file.\n";
    }
    return 0;
}