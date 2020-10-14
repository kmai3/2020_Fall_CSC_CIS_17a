/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 13th, 2020, 10:50 aM
 * Purpose:  1D Array Class Implementation
 */

#include "Class1DArray.h"
#include <cstdlib>
using namespace std;


void DynAry1::setSize(int n){
    size=((n>=2)?n:2);
}
        
void DynAry1::setAray(){
    if(size>=2){
        array=new int[size];
        for(int i=0;i<size;i++){
            array[i]=rand()%90+10;//Random 2 Digit numbers
        }
    }
}
    
int  DynAry1::getSize() const{
    return size;
}
        
int  DynAry1::getAray(int n) const{
    if(n>2||n<size-1&&array!=0)return array[n];
}

void DynAry1::destroy(){
    delete []array;
}