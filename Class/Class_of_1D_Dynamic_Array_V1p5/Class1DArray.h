/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on October 13th, 2020, 10:50 aM
 * Purpose:  1D Array Class Specification
 */

#ifndef CLASS1DARRAY_H
#define CLASS1DARRAY_H

class  DynAry1{
    private:
        int size;
        int *array;
    public:
        void setSize(int);
        void setAray();
        int  getSize() const;
        int  getAray(int) const;
        void destroy();
};



#endif /* Class1DARRAY_H */

