/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 7, 2021, 10:50 AM
 * Purpose:  Stock Commission
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
    unsigned short   shares,  //The number of shares
                     stock,  //The price paid for all stocks
                     stckPrc,//The price paid per stock
                     cmsn,   //The total of commission fee
                     cmsnRt, //The rate of commission fee
                     total;  //Total amount paid for the shares
     
    //Initialize Variables
    shares=750;
    stckPrc=35;
    cmsnRt=2;
    
    //Map Inputs to Outputs -> Process
    stock=shares*stckPrc;
    cmsn= stock*cmsnRt/100;
    total= stock+ cmsn;
            
    //Display Inputs/Outputs
    cout<<"The total price paid for shares before commission = $"<<stock<<endl;
    cout<<"The total commission fee paid for the transaction = $"<<cmsn<<endl;
    cout<<"The total cost of shares including commission fees paid for the transaction =$"<<total<<endl;
    //Exit the Program - Cleanup
    return 0;
}


