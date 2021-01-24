/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 19, 2021, 12:36 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    char Player1, Player2;
    
    //Declare Variables
    cout <<"Rock Paper Scissors Game"<<endl;
    cout <<"Input Player 1 and Player 2 Choices"<<endl;
   
    cin >> Player1;
    cin >> Player2;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    {
      

       //checking if player1 wins the game
       if ((Player1 =='R' ||Player1== 'r') && (Player2 =='S' || Player2=='s'))
       {
           cout << "Rock breaks scissors.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='S' ||Player1=='s') && (Player2 =='R' ||Player2=='r'))
       {
           cout << "Rock breaks scissors.";
       }
       //checking if player1 wins the game
       else if ((Player1 =='P' ||Player1== 'p') && (Player2 =='R' || Player2=='r'))
       {
           cout << "Paper covers rock.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='R' ||Player1=='r') && (Player2 =='P' ||Player2=='p'))
       {
           cout << "Paper covers rock.";
       }
       //checking if player1 wins the game
       else if ((Player1 == 'S' ||Player1== 's') && (Player2 =='P' ||Player2=='p'))
       {
           cout << "Scissors cuts paper.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='P' || Player1=='p') && (Player2 =='S' || Player2=='s'))
       {
           cout << "Scissors cuts paper.";
       }
       //checking if game is draw
       else if ((Player1 =='R' ||Player2== 'r') ||
           (Player1 =='S' ||Player2== 's')||
           (Player1 =='P' ||Player2== 'p'))
           {    
            cout << "Nobody wins";
            }
           //print its draw
   
   }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


