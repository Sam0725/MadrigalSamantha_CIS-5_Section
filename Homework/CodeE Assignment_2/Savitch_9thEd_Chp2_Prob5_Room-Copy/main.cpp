/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 17, 2021, 2:46 PM
 * Purpose:  Room Problem
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
    float mxRmCap,// Maximum Room Capacity
          nbrPpl, //Number of People attending meeting 
          pplExcl;//Number of People that have to be excluded to meet fire regulations
    //Initialize Variables
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>mxRmCap;
    cin>>nbrPpl;
    
    //Map Inputs to Outputs -> Process
    if(mxRmCap<nbrPpl)
    {
         cout<<"Meeting cannot be held."<<endl;
         
    pplExcl=nbrPpl-mxRmCap;     
    cout<<"Reduce number of people by "<<pplExcl<<" to avoid fire violation.";
    }
    
    
    if(mxRmCap>nbrPpl)
    {
         cout<<"Meeting can be held."<<endl;
    
    pplExcl=mxRmCap-nbrPpl;     
    cout<<"Increase number of people by "<<pplExcl<<" will be allowed without violation.";
    }
    //Exit the Program - Cleanup
    return 0;
}


