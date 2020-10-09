/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 26th, 2020, 6:14 PM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int sumSrs(int,int);
int pow(int,int);
float sav(float,float,int);
float ret(float,float,float,int);


//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int r,n;
    float d,i,p;
    
    //Initialize all known variables
    r=2;
    n=4;       //Number of compounding periods
    d=10000;      //$100 Initial Deposit
    i=500.0f/100; //6% Interest Rate
    p=0;        //Principle initially 0
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<r<<"^"<<n<<" = "<<pow(r,n)<<endl;
    cout<<"Series Sum i=0 to "<<n<<" of "<<r<<"^"<<n<<" = "<<sumSrs(r,n)<<endl;
    cout<<"Formula = (1-"<<r<<"^"<<n+1<<")/(1-"<<r<<")"
            <<" = "<<(1-pow(r,n+1))/(1-r)<<endl;
    cout<<"Savings = $"<<d<<"(1+"<<i<<")^"<<n<<" = $"<<sav(d,i,n)<<endl;
    cout<<"Recursion Retirement  S"<<n<<"= "<<(1+i)<<"*S"<<(n-1)<<"+"<<d
            <<" = $"<<ret(p,d,i,n)<<endl;

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

//Function Implementations
float ret(float p,float d,float i,int n){
    if(n==0)return p;
    return ret(p,d,i,n-1)*(1+i)+d;
}



float sav(float d,float intRate,int n){
    if(n==0)return d;
    return sav(d,intRate,n-1)*(1+intRate);
}


int pow(int r,int n){
    //Base Case
    if(n==0)return 1;
    //Function defined from itself
    return pow(r,n-1)*r;
}


int sumSrs(int r,int n){
    //Base Case
    if(n==0)return 1;
    //Function defined from itself
    return sumSrs(r,n-1)+pow(r,n);
}