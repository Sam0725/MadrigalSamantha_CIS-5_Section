/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 17, 2021, 12:47 PM
 * Purpose:  Pay Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float rtrPay,  //Retroactive Pay
          nwAnSlr, //New Annual Pay
          nwMthSl, //New Monthly Pay
          payIncr, // Percent Pay Increase
          epPreSl; //Employee Previous Salary
    
    //Initialize Variables
    cin>>epPreSl;
    
    payIncr=0.076;
    
    //Map Inputs to Outputs -> Process
    rtrPay=payIncr*(epPreSl/2);
    nwAnSlr=epPreSl+(epPreSl*payIncr);
    nwMthSl=nwAnSlr/12;
    
    nwMthSl=nwAnSlr/12;
    
    //Display Inputs/Outputs
    cout<<"Input previous annual salary."<<endl;
    cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<fixed<<rtrPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<setprecision(2)<<fixed<<nwAnSlr<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<fixed<<nwMthSl;
    //Exit the Program - Cleanup
    return 0;
}


