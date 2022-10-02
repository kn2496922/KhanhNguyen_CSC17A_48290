/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
  * File:   main.cpp
 * Author: Khanh Nguyen
 * Created on September 22, 2022, 5:58 PM
 * Purpose: Sum of 2d array 
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Prototypes
int *getData(int &);//Read the array
int *augment(const int *,int);//Augment and copy the original array
void prntAry(const int *,int);//Print the array

//main
int main(int argc, char** argv) {
    
    //initialize
    int arySize{},
        *array,
        *brray;
            
    //Input array size and values in dynamic array
    array = getData(arySize);
    prntAry(array, arySize);
    
    cout << endl;
    
    //create the augmented array
    
    brray = augment(array, arySize);
    prntAry(brray, arySize + 1);
    
    delete[] array;
    delete[] brray;

    return 0;
}
//Read the array
int *getData(int &size)
{
    //input size of the original dynamic array
    cin >> size;
    //creating new array
    int *a = new int[size];
    
    //input value to the d-array
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
    return a;
}


//Augment and copy the original array
int *augment(const int *array,int size)
{
    //initialize another d-array to copy to
    int *b = new int[size + 1];
    //set the 1st value of b array to 0
    b[0] = 0;
    
    //copy every element of the array starting from the 2nd element
    for(int i = 1; i < size +1; i++)
    {
        b[i] = array[i-1];
    }
    return b;
}

//Print the array
void prntAry(const int *array,int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i == size -1)
        {
            cout << array[i];
        }
        else
        {
            cout << array[i] << setw(2);
        }
        
    }
}
