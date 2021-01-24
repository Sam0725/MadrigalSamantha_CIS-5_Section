/* 
 * File:   main.cpp
 * Author: Samantha Madrigal
 * Created on January 20, 2021, 7:51 PM
 * Purpose:  Compatible Sign
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
     string      elmAst1, //Elements in Astrology
                elmAst2;
    
    int         horo1,  //Horoscope entry 1
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
    
        
    } else if (horo1>=10 && horo1<=12){
          if(horo2>=10 && horo2<=12){ 
            cout<< elmAst1 <<" and "<< elmAst2 <<" are compatible Water signs.";
    }else{
        cout<<elmAst1<<" and "<<elmAst2<<" are not compatible signs.";
    }
    }
    return 0;
}


