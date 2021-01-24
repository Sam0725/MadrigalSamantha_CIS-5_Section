/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Diet Coke
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVGRMS=453.592;// Lbs to Grams 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float wDsrd, //Desired Weight in lbs
          mMouse,//Mass of the mouse in grams
          mKmse, //Mass of chemicals that result in termination
          mSoda, //Mass of Liquid in Soda Can
          cnSint8;//Concentration of Chemical in Soda Can
    int   nCans;//The limit of the number of cans of coke to drink
    
    //Initialize or input i.e. set variable values
    mMouse=35;    //35 grams
    mKmse=5;      //5 grams
    mSoda=350;    //350 grams
    cnSint8=1e-3f;//.001 Concentration
    
    //Map inputs -> outputs
    cin>>wDsrd,
    nCans=wDsrd*CNVGRMS*mKmse/(mMouse*mSoda*cnSint8);
    
    //Display the outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "
        <<nCans<<" cans";
    
    //Exit stage right or left!
    return 0;
}