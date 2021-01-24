/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 18, 2021, 12:05 PM
 * Purpose:  Books
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
       const int point1=5,
                 point2=15,
                 point3=30,
                 point4=60;
             int books;  //Books Read
    
    //Declare Variables
     cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
   
    
    cin>>books;
    cout<<"Books purchased =  "<<books<<endl;
   
    if (books == 1)
         cout<<"Points earned   = "<<point1;
    
     else if (books == 2) 
         cout<<"Points earned   = "<<point2;
         
     else if (books == 3)
         cout<<"Points earned   = "<<point3;
         
     else if (books >= 4)
         cout<<"Points earned   = "<<point4;
     
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


