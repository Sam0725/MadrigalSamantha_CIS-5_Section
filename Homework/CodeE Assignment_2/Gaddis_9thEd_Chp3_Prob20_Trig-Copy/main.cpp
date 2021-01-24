/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 14, 2021, 2:55 PM
 * Purpose:  Trig.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //sin(), cos(), tan()
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare Variables
    float angle,
          radian;
          
         
          
         
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<< endl;
    cout<<"Input the angle in degrees."<< endl;
    
    //Map inputs -> outputs
     cin>>angle;
    radian=angle*CNVRAD;

    //Display the outputs
    
    cout<<"sin("<<angle<<") = "<<setprecision(4)<<fixed<<sin(radian)<<endl;
    cout<<setprecision(0)<<"cos("<<angle<<") = "<<setprecision(4)<<fixed<<cos(radian)<<endl;
    cout<<setprecision(0)<<"tan("<<angle<<") = "<<setprecision(4)<<fixed<<tan(radian);

   
    
    //Exit stage right or left!
    return 0;
}


