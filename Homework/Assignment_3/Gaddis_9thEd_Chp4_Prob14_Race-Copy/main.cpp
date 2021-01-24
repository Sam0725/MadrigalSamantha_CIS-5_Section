/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 19, 2021, 10:31 PM
 * Purpose:  Race
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    string name1,
           name2,
           name3,
           time1,
           time2,
           time3;
    
    //Declare Variables
    
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
    //Map Inputs to Outputs -> Process
     cin>>name1;
    getline(cin,time1);
    
    cin>>name2;
    getline(cin,time2);
    
    cin>>name3;
    getline(cin,time3);
    
    //Display Inputs/Outputs
     if (time1 <= time2 && time1 <= time3 && time2 <= time3) {
        cout << name1 << setw(3) << time1 << endl;
        cout << name2 << setw(3) << time2 << endl;
        cout << name3 << setw(3) << time3;
        
    } else if (time1 <= time2 && time1 <= time3 && time3 <= time2) {
        cout << name1 << setw(3) << time1 << endl;
        cout << name3 << setw(3) << time3 << endl;
        cout << name2 << setw(3) << time2;
        
    } else if (time2 <= time1 && time2 <= time3 && time1 <= time3) {
        cout << name2 << setw(3) << time2 <<endl;
        cout << name1 << setw(3) << time1 <<endl;
        cout << name3 << setw(3) << time3;
        
    } else if (time2 <= time1 && time2 <= time3 && time3 <= time1) {
        cout << name2 << setw(3) << time2 << endl;
        cout << name3 << setw(3) << time3 << endl;
        cout << name1 << setw(3) << time1;
        
    } else if (time3 <= time1 && time3 <= time2 && time1 <= time2) {
        cout << name3 << setw(3) << time3 << endl;
        cout << name1 << setw(3) << time1 << endl;
        cout << name2 << setw(3) << time2;
        
    } else {
        cout << name3 << setw(3) << time3 << endl;
        cout << name2 << setw(3) << time2 << endl;
        cout << name1 << setw(3) << time1;
    }
    
    //Exit the Program - Cleanup
    return 0;
}


