/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 13, 2021, 11:36 PM
 * Purpose:  Cookie Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float bagCk, //Bag of 40 Cookies
          srvBg, //10 Servings in Bag
          clrie, //Calories
          clPerCk, //Calories per Cookie
          totCl, //Total Calories
          ckAte; //Cookies he or she Ate
          
          
    //Initialize or input i.e. set variable values
    bagCk=40;
    srvBg=10;
    clrie=300;
    
    //How many cookies were eaten
   clPerCk=clrie/(bagCk/srvBg);
    
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    
    cin>>ckAte; //Cookies
    totCl=ckAte*clPerCk;
    
    //Display the outputs
    
    cout<<"You consumed "<<totCl<<" calories.";

    //Exit stage right or left!
    return 0;
}

