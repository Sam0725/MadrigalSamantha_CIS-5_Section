/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 *
 * Created on January 23, 2021, 6:59 PM
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Input/Output Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVPRCT=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,      //Present Value in $'s
            fv,             //Future Value in $'s
            intRate=0.06f;  //Interest Rate in Decimal
    int     numCmpd;        //Number of compounding periods in Years
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);//By the Rule of 72
    fv=pv;                    //Initialize future savings
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Calculate and Display the Table as you go
    int count=0,years=2021;
    do{
        float interest=(fv*intRate);
        cout<<setw(3)<<count<<setw(8)<<years
                <<setw(9)<<fv<<setw(9)<<interest<<endl;
        fv=fv*(1+intRate);
        years++;
        count++;
    }while(count<=numCmpd);
  
    //Exit the Program - Cleanup
    return 0;
}
