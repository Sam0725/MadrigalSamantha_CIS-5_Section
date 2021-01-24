/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Temperature
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    float F,
          C;
    //Declare Variables
    cin>>F;
    
    C=(F-32)*5/9;
            
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<setprecision(1)<<fixed<<F<<" Degrees Fahrenheit = "
        <<setprecision(1)<<fixed<<C<<" Degrees Centigrade";
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


