/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 14, 2021, 2:36 PM
 * Purpose:  Bank Charges
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
     float balance,
        checks,  //Checks written
        chkFee,  //Check chkFee
        mthFee,  //Monthly mthFee
        lwBlnc,  //Low Balance Fee
        nwBlnc;  //New Balance

    //prompt user to enter number of checks
    //then read from keyboard
     cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;

    cin>>balance;
    cin>>checks;
    
    mthFee=10;
    
    //validate input immediately, and continue only if
    //input for checks number is valid
     {
        
    if(balance < 400)
         lwBlnc = 15;
        
    if(checks < 20)
                chkFee += (checks * 0.1);
                
    else if(checks < 40)
                chkFee += (checks * 0.08);
                
    else if(checks < 60)
                chkFee += (checks * 0.06);
                
    else if(checks >= 60)
                chkFee += (checks * 0.04);
    //Declare Variables
   
    //Initialize Variables
      nwBlnc = balance - (chkFee + mthFee + lwBlnc);
    //Map Inputs to Outputs -> Process
   
    //Display Inputs/Outputs
    cout<<"Balance     $"<<setw(9)<<setprecision(5)<<showpoint<<balance<<endl;
    cout<<"Check Fee   $"<<setw(9)<<setprecision(3)<<showpoint<<chkFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<setprecision(4)<<showpoint<<mthFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<setprecision(4)<<showpoint<<lwBlnc<<endl;
    cout<<"New Balance $"<<setw(9)<<setprecision(4)<<showpoint<<nwBlnc;
    
    }
    
   
    //Exit the Program - Cleanup
    return 0;
}


