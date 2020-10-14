/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 12th, 2020, 1:40 PM
 * Purpose:  1D Array Class
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Class1DArray.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void prnStrc(DynAry1 &,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and Initialize
    int size=100;
    DynAry1 array1D(size);
    
    //Initialize Variables
    prnStrc(array1D,10);
   
    //Exit stage right!
    return 0;
}

void prnStrc(DynAry1 &d1,int perLine){
    cout<<endl;
    for(int i=0;i<d1.getSize();i++){
        cout<<d1.getData(i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}