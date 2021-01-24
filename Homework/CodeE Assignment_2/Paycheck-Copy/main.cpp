/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Payment
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main()
{
    float payRate, hours, gross, ovrHrs, ovrPay;
          
    //Set the random number seed
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hours;
    
     if(hours<=40)
     {
         gross=payRate*hours;
     }
     if (hours>40)
     {
         ovrHrs=hours-40;
         ovrPay=(payRate*ovrHrs)*2;
         gross=(payRate*40)+ovrPay;
         
     }
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

cout<<fixed<<setprecision(2)<<"Paycheck = $"<<setw(7)<<gross;

    //Exit stage right or left!
    return 0;
}


