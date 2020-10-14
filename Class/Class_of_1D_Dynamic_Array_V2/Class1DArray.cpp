/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 12th, 2020, 1:40 PM
 * Purpose:  1D Array Class Implementation
 */

#include "Class1DArray.h"
#include <cstdlib>
using namespace std;

DynAry1::DynAry1(int n){
    n=n>2?n:2;
    size=n;
    array=new int[n];
    for(int i=0;i<n;i++){
        array[i]=rand()%90+10;//Random 2 Digit numbers
    }
}

int DynAry1::getData(int indx){
    if(indx<0||indx>size)exit(1);
    return array[indx];
}
