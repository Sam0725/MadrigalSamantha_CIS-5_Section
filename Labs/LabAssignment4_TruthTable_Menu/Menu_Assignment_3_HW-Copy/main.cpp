/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 14, 2021, 2:36 PM
 * Purpose:  Menu
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Homework"<<endl;
    cout<<"Type 1 for Gaddis  Sort Names Problem"<<endl;
    cout<<"Type 2 for Gaddis  Book Problem"<<endl;
    cout<<"Type 3 for Gaddis  Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gaddis  Race Problem"<<endl;
    cout<<"Type 5 for Gaddis  ISP  Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Signs"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':
            //Declare Variable Data Types and Constants
            string name1, name2, name3;    
           //Declare Variables
           cout<<"Sorting Names"<<endl;
           cout<<"Input 3 names"<<endl;    
           getline(cin, name1);
           getline(cin, name2);
           getline(cin, name3);
            //Initialize or input i.e. set variable values
            if (name1 <= name2 && name1 <= name3 && name2 <= name3) {
            cout << name1 << endl;
            cout << name2 << endl;
            cout << name3;        
            } else if (name1 <= name2 && name1 <= name3 && name3 <= name2) {
            cout << name1 << endl;
            cout << name3 << endl;
            cout << name2;  
            } else if (name2 <= name1 && name2 <= name3 && name1 <= name3) {
            cout << name2 << endl;
            cout << name1 << endl;
            cout << name3;        
            } else if (name2 <= name1 && name2 <= name3 && name3 <= name1) {
            cout << name2 << endl;
            cout << name3 << endl;
            cout << name1;        
            } else if (name3 <= name1 && name3 <= name2 && name1 <= name2) {
            cout << name3 << endl;
            cout << name1 << endl;
            cout << name2;        
            } else {
            cout << name3 << endl;
            cout << name2 << endl;
            cout << name1;
            }
            //Exit stage right!
            break;
        case '2':
            //Declare Variable Data Types and Constants
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
            //Exit stage right!
            break;
        case '3':
            float  balance,
                   checks,  //Checks written
                   chkFee,  //Check chkFee
                   lwBlnc,  //Low Balance Fee
                   nwBlnc;  //New Balance
            const float    mthFee=10;//Monthly mthFee
                   lwBlnc=15;             
            //Declare Variables  
            cout<<"Monthly Bank Fees"<<endl;
            cout<<"Input Current Bank Balance and Number of Checks"<<endl;
            cin>>balance;
            cin>>checks;
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
   
            //Map Inputs to Outputs -> Process
            nwBlnc = balance - (chkFee + mthFee + lwBlnc);       
            //Display Inputs/Outputs
            cout<<"Balance     $"<<setw(9)<<setprecision(5)<<showpoint<<balance<<endl;
            cout<<"Check Fee   $"<<setw(9)<<setprecision(3)<<showpoint<<chkFee<<endl;
            cout<<"Monthly Fee $"<<setw(9)<<setprecision(4)<<showpoint<<mthFee<<endl;
            cout<<"Low Balance $"<<setw(9)<<setprecision(4)<<showpoint<<lwBlnc<<endl;
            cout<<"New Balance $"<<setw(9)<<setprecision(4)<<showpoint<<nwBlnc;
            }
            //Exit stage right!
            break;
        case '4':
               string name1,
                      name2,
                      name3,
                      time1,
                      time2,
                      time3;          
            //Declare Variables
            cout<<"Race Ranking Program"<<endl;
            cout<<"Input 3 Runners"<<endl;
            cout<<"Their names, then their times"<<endl;    
            //Initialize or input i.e. set variable values
            cin>>name1;
            getline(cin,time1);    
            cin>>name2;
            getline(cin,time2);    
            cin>>name3;
            getline(cin,time3);    
             //Map inputs -> outputs
          if (time1 <= time2 && time1 <= time3 && time2 <= time3) {
            cout << name1 << setw(3) << time1 << endl;
            cout << name2 << setw(3) << time2 << endl;
            cout << name3 << setw(3) << time3;        
          } else if (time1 <= time2 && time1 <= time3 && time3 <= time2) {
            cout << name1 << setw(3) << time1 << endl;
            cout << name3 << setw(3) << time3 << endl;
            cout << name2 << setw(3) << time2;        
          } else if (time2 <= time1 && time2 <= time3 && time1 <= time3) {
            cout << name2 << setw(3) << time2 <<endl;
            cout << name1 << setw(3) << time1 <<endl;
            cout << name3 << setw(3) << time3;        
          } else if (time2 <= time1 && time2 <= time3 && time3 <= time1) {
            cout << name2 << setw(3) << time2 << endl;
            cout << name3 << setw(3) << time3 << endl;
            cout << name1 << setw(3) << time1;        
          } else if (time3 <= time1 && time3 <= time2 && time1 <= time2) {
            cout << name3 << setw(3) << time3 << endl;
            cout << name1 << setw(3) << time1 << endl;
            cout << name2 << setw(3) << time2;        
          } else {
            cout << name3 << setw(3) << time3 << endl;
            cout << name2 << setw(3) << time2 << endl;
            cout << name1 << setw(3) << time1;
        }    
            break;
        case '5':
              unsigned short hours;
              float mBill; //Monthly bill
              char pckage; //Subscription
              //Declare Variables    
              //Initialize or input i.e. set variable values
              cout<<"ISP Bill"<<endl;
              cout<<"Input Package and Hours"<<endl;
              cin>>pckage>>hours;    
              //Map inputs -> outputs
              if ((pckage== 'A'  || pckage == 'B' || pckage == 'C') && hours <=744){
              if(pckage == 'A'){
              if(hours <= 10){
              mBill = 9.95f;                 
             }else {
              mBill = 9.95f + ((hours - 10)* 2.00f);
             }             
             }else if (pckage == 'B'){
              if (hours <= 20){
                     mBill = 14.95f;                    
             }else {  
             mBill = 14.95f + ((hours - 20) * 1.00f);
             }
           } else {
             mBill = 19.95f;
             }
             }      
            break;
        case '6':
            char Player1, Player2;    
	    cout <<"Rock Paper Scissors Game"<<endl;
            cout <<"Input Player 1 and Player 2 Choices"<<endl;
	    cin >> Player1;
            cin >> Player2;         
            //Map inputs -> outputs    
            //read player1 and player options   
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
            }
            break;
        case '7':
            unsigned short n2Cnvrt;   
            //Initialize or input i.e. set variable values
            cout<<"Arabic to Roman numeral conversion."<<endl;
            cout<<"Input the integer to convert."<<endl;
            cin>>n2Cnvrt;
            if(n2Cnvrt>=1000 &&n2Cnvrt<=3000){     
            unsigned char n1000s,
                          n100s, 
                          n10s,
                          n1s;                  
            n1000s=n2Cnvrt/1000;
            n100s=(n2Cnvrt-n1000s*1000)/100;
            n10s=(n2Cnvrt-n1000s*1000-n100s*100)/10;
            n1s=n2Cnvrt%10;        
            cout<<n2Cnvrt<<" is equal to ";
            //Output the number of 1000's in Roman Numerals
            switch(n1000s){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
            }        
            //Output the number of 100's
            if(n100s==9)cout<<"CM";
            if(n100s==8)cout<<"DCCC";
            if(n100s==7)cout<<"DCC";
            if(n100s==6)cout<<"DC";
            if(n100s==5)cout<<"D";
            if(n100s==4)cout<<"CD";
            if(n100s==3)cout<<"CCC";
            if(n100s==2)cout<<"CC";
            if(n100s==1)cout<<"C";        
            //Output the number of 10's
            if(n10s==9) cout << "XC";
            if(n10s==8)cout << "LXXX";
            if(n10s==7)cout << "LXX";
            if(n10s==6)cout << "LX";
            if(n10s==5)cout << "L";
            if(n10s==4)cout <<"XL";
            if(n10s==3)cout<<"XXX";
            if(n10s==2)cout<<"XX";
            if(n10s==1)cout<<"X";    
            //Output the number of 1's
            if(n1s==9)cout<<"IX";
            else if(n1s==8)cout<<"VIII";
            else if(n1s==7)cout<<"VII";
            else if(n1s==6)cout<<"VI";
            else if(n1s==5)cout<<"V";
            else if(n1s==4)cout<<"IV";
            else if(n1s==3)cout<<"III";
            else if(n1s==2)cout<<"II";
            else if(n1s==1)cout<<"I";        
            //Reiterate the input value
            } 
            if(n2Cnvrt<=999)    
            cout<<n2Cnvrt<<" is Out of Range!";
            if(n2Cnvrt>=3001)    
            cout<<n2Cnvrt<<" is Out of Range!";        
            {  
            }  
            break;
        case '8': 
            string elmAst1, //Elements in Astrology
                   elmAst2;    
               int horo1,  //Horoscope entry 1
                   horo2;  //Horoscope entry 2             
            //Initialize Variables    
            cout<<"Horoscope Program which examines compatible signs."<<endl;
            cout<<"Input 2 signs."<<endl;    
            cin>>elmAst1;
            cin>>elmAst2;    
            if(elmAst1=="Aries")horo1=1;
            if(elmAst1=="Leo")horo1=2;
            if(elmAst1=="Sagittarius")horo1=3;
            if(elmAst1=="Taurus")horo1=4;
            if(elmAst1=="Virgo")horo1=5;
            if(elmAst1=="Capricorn")horo1=6;
            if(elmAst1=="Gemini")horo1=7;
            if(elmAst1=="Libra")horo1=8;
            if(elmAst1=="Aquarius")horo1=9;
            if(elmAst1=="Cancer")horo1=10;   
            if(elmAst1=="Scorpio")horo1=11;    
            if(elmAst1=="Pisces")horo1=12;
    
            if(elmAst2=="Aries")horo2=1;
            if(elmAst2=="Leo")horo2=2;
            if(elmAst2=="Sagittarius")horo2=3;
            if(elmAst2=="Taurus")horo2=4;
            if(elmAst2=="Virgo")horo2=5;
            if(elmAst2=="Capricorn")horo2=6;
            if(elmAst2=="Gemini")horo2=7;
            if(elmAst2=="Libra")horo2=8;
            if(elmAst2=="Aquarius")horo2=9;
            if(elmAst2=="Cancer")horo2=10;   
            if(elmAst2=="Scorpio")horo2=11;    
            if(elmAst2=="Pisces")horo2=12;     
        if (horo1>=1 && horo1<=3) {
        if(horo2>=1 && horo2<=3){ 
            cout<< elmAst1 <<" and "<< elmAst2 <<" are compatible Fire signs.";
        }else{
        cout<<elmAst1<<" and "<<elmAst2<<" are not compatible signs.";
        }      
        }else if (horo1>=4 && horo1<=6){
            if(horo2>=4 && horo2<=6){
            cout<< elmAst1 <<" and "<< elmAst2 <<" are compatible Earth signs.";
        }else{
        cout<<elmAst1<<" and "<<elmAst2<<" are not compatible signs.";
        }         
        }else if (horo1>=7 && horo1<=9){
        if(horo2>=7 && horo2<=9){
            cout<< elmAst1 <<" and "<< elmAst2 <<" are compatible Air signs.";
        }else{
        cout<<elmAst1<<" and "<<elmAst2<<" are not compatible signs.";
        }   
        }else if (horo1>=10 && horo1<=12){
          if(horo2>=10 && horo2<=12){ 
            cout<< elmAst1 <<" and "<< elmAst2 <<" are compatible Water signs.";
        }else{
        cout<<elmAst1<<" and "<<elmAst2<<" are not compatible signs.";
        }
        }
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}