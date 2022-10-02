/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 18, 2022, 6:10 PM
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}

//Read in the int array
void read(int array[],int sizeIn)
{
    //Read in every elements to the array
    for(int i = 0; i < sizeIn; i++)
    {
        cin >> array[i];
        cout << "a[" << i <<"] = " << array[i] <<endl;
        
    }
    
}
//Calculation (Sum and min/max)
int  stat(const int array[],int sizeIn,int &max,int &min)
{
    min = 999999;
    max = -999999;
    for(int i = 0; i < sizeIn; i++)
    {
        //Compare every characters in array to find the min
        if(array[i] < min)
            min = array[i];
        //find the max   
        if(array[i] > max) 
            max = array[i];
    }
    int sum {};
    for(int i = 0; i < sizeIn; i++)
        sum += array[i];
        
    return sum;
}

//Print out the results
void print(const int array[],int sizeIn,int sum,int max,int min)
{
    cout << "Min  = " << min << endl;
    cout << "Max  = " << max << endl;
    cout << "Sum  = " << sum << endl;
}


