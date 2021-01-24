/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 12, 2021, 1:09 PM
 * Purpose:  Budget/Percent 
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    float milBdgt, //Military Budget = 700 Billion
          fedBdgt, //Federal  Budget = 4.1 Trillion
          mlPrcnt; //Military Budget as a Percent of the Federal Budget 
            
    //Declare Variables
    
    //Initialize Variables
    milBdgt=7.0e11f; 
    fedBdgt=4.1e12f; 
    
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=(milBdgt/fedBdgt)*100;
    
    //Display Inputs/Outputs
    cout<<"Military Budget = 700 Billion"<<endl;
    cout<<"Federal Budget = 4.1 Trillion"<<endl;
    cout<<"Military Budget as a Percent of the Federal Budget = "
        <<mlPrcnt<<"%"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}


