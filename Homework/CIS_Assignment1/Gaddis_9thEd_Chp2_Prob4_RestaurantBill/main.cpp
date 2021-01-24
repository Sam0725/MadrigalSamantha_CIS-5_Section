/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 10, 2021, 4:30 AM
 * Purpose:  Restaurant Bill
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
    float   tax,    //Tax on meal
            tip,    //Tip for meal
            meal,   //Cost of meal
            addTax, //Amount it cost with tax
            addTip, //Amount it cost with tip
            mealTax,//Meal price plus tax
            total;  //Total all added up
    
    //Initialize Variables
    tax=0.0675;
    tip=0.20;
    meal=88.67;
    
    //Map Inputs to Outputs -> Process
    int iaddTax=(meal*tax+0.005)*100;
    addTax=iaddTax/100.0f;
    mealTax=meal+addTax;
    addTip=mealTax*tip;
    total=meal+addTax+addTip;
    
    //Display Inputs/Outputs
    cout<<" Tax total = $"<<addTax<<endl;
    cout<<" Tip total = $"<<addTip<<endl;        
    cout<<" Total = $"<<total<<" dollar "<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}


