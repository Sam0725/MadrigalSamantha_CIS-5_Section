/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 19, 2021, 11:33 AM
 * Purpose:  ISP
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
     unsigned short hours;
             float mBill; //Monthly bill
             char pckage; //Subscription
             
    //Declare Variables
     cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pckage>>hours;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    if ((pckage== 'A'  || pckage == 'B' || pckage == 'C') && hours <=744){
         
         if(pckage == 'A'){
             if(hours <= 10){
                 mBill = 9.95f;
                 
             }else {
                 mBill = 9.95f + ((hours - 10)* 2.00f);
             }
             
             }else if (pckage == 'B'){
                 if (hours <= 20){
                     mBill = 14.95f;
                    
                 }else {  
                 mBill = 14.95f + ((hours - 20) * 1.00f);
             }
         } else {
             mBill = 19.95f;
         }
    }
    //Display Inputs/Outputs
    cout<<"Bill = $"<<setw(6)<<mBill;
    //Exit the Program - Cleanup
    return 0;
}


