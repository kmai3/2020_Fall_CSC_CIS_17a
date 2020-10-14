/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 12th, 2020, 1:40 PM
 * Purpose:  1D Array Class Specification
 */

#ifndef CLASS1DARRAY_H
#define CLASS1DARRAY_H

class  DynAry1{
    private:
        int size;
        int *array;
    public:
        DynAry1(int);
        ~DynAry1(){
            delete []array;
        }
        getSize(){
            return size;
        }
        int getData(int);
};



#endif /* Class1DARRAY_H */

