/* 
 *File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 13, 2021, 6:30 PM
 * Purpose:  Savitch +- Sums and Averages
 *           Note: Using the Ternary Operator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float number, //10 Numbers to Input into the program
          totSum, //tot represent total
          totAvg,
          negSum, //neg represents the negative
          negAvg,
          posSum, //pos represents the positive
          posAvg;
          
    //Initialize or input i.e. set variable values
    totSum=totAvg=negAvg=posAvg=0; //Important Initialization
    
    //Important Initialization
    
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
   
    
     //Final Calculation
    totSum=posSum+negSum;
    totAvg=totSum/10.0f;
    posAvg=posSum/10.0f;
    negAvg=negSum/10.0f;
    
    //Display the outputs
     cout<<fixed<<setprecision(0);
     cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
     cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
     cout<<"Total sum    ="<<setw(4)<<totSum;

    //Exit stage right or left!
    return 0;
}
