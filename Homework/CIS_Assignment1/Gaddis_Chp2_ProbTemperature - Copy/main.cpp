/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 7, 2021, 10:50 AM
 * Purpose:  Annual High Temperatures 
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
    float   tmpNY,  //New York Temperature in Fahrenheit
            tmpDen, //Denver Temperature
            tmpPhnx,//Phoenix Temperature
            avgTmp, //Average Temperature 
            perChng;//Percent Change
                   
    
    //Initialize Variables
    tmpNY=85;
    tmpDen=88;
    tmpPhnx=106;
    perChng=1+2.0e-2f;
            
    //Map Inputs to Outputs -> Process
    avgTmp=(tmpNY+tmpDen+tmpPhnx)/3;
                       
    //Display Inputs/Outputs
    cout<<"Temperature before the increase"<<endl; 
    cout<<"New York Temperature = "<<tmpNY<<" Fahrenheit"<<endl;
    cout<<"Denver   Temperature = "<<tmpDen<<" Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<tmpPhnx<<" Fahrenheit"<<endl;
    cout<<"Average  Temperature = "<<avgTmp<<" Fahrenheit"<<endl;
    
    //Multiply by the percent change
    tmpNY*=perChng;
    tmpDen*=perChng;
    tmpPhnx*=perChng;
    
    //Map Inputs to outputs -> Process
    avgTmp=(tmpNY+tmpDen+tmpPhnx)/3;
    
    //Display Input/Outputs
    cout<<endl;
    cout<<"Temperature after the increase"<<endl; 
    cout<<"New York Temperature = "<<tmpNY<<" Fahrenheit"<<endl;
    cout<<"Denver   Temperature = "<<tmpDen<<" Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<tmpPhnx<<" Fahrenheit"<<endl;
    cout<<"Average  Temperature = "<<avgTmp<<" Fahrenheit"<<endl;
    
    //Display the Average Increase
   
    //Exit the Program - Cleanup
    return 0;
}


