/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 14, 2021, 1:59 PM
 * Purpose:  Average 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float x,avg;
    
    //Initialize Variables
     x=0;
    avg=0;
    
    //Map Inputs to Outputs -> Process
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<avg/5;
    
    //Exit the Program - Cleanup
    return 0;
}


