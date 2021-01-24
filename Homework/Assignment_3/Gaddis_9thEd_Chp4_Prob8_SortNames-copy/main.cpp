/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 18, 2021, 10:50 AM
 * Purpose:  Sort Names
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//System Libraries

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here

    //Initialize the Random Number Seed


int main() {
   string name1, name2, name3;

    //Declare Variables
     cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    
    getline(cin, name1);
   
    getline(cin, name2);
   
    getline(cin, name3);
    
    //Initialize Variables
     if (name1 <= name2 && name1 <= name3 && name2 <= name3) {
        cout << name1 << endl;
        cout << name2 << endl;
        cout << name3;
        
    } else if (name1 <= name2 && name1 <= name3 && name3 <= name2) {
        cout << name1 << endl;
        cout << name3 << endl;
        cout << name2;
        
    } else if (name2 <= name1 && name2 <= name3 && name1 <= name3) {
        cout << name2 << endl;
        cout << name1 << endl;
        cout << name3;
        
    } else if (name2 <= name1 && name2 <= name3 && name3 <= name1) {
        cout << name2 << endl;
        cout << name3 << endl;
        cout << name1;
        
    } else if (name3 <= name1 && name3 <= name2 && name1 <= name2) {
        cout << name3 << endl;
        cout << name1 << endl;
        cout << name2;
        
    } else {
        cout << name3 << endl;
        cout << name2 << endl;
        cout << name1;
    }
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


