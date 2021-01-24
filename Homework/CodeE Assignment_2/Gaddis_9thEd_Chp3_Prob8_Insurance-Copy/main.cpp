/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 17, 2021, 11:27 AM
 * Purpose:  Insurance 
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
    
    //Declare Variables
    float hsWrth,  //House Worth
          homeIns, //Home Insurance
          prcCst;  //Percent Cost to replace the structure
    
    //Initialize Variables
    homeIns=0.8;
    
    //Map Inputs to Outputs -> Process
    cin>>hsWrth;
    
    prcCst=hsWrth*homeIns;
    
    //Display Inputs/Outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<prcCst<<" of insurance.";
    
    
    //Exit the Program - Cleanup
    return 0;
}


