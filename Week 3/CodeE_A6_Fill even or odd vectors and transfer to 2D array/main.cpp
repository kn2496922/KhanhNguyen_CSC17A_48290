/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 18, 2022, 6:12 PM
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    cout << "Input the number of integers to input." << endl;
    int arraySize {};
    cin >> arraySize;
    cout << "Input each number." << endl;
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}

//Read in to the vectors
void read(vector<int> &even, vector<int> &odd)
{
    int temp {};
    while(cin >> temp)
    {
        (temp%2 == 1)? odd.push_back(temp): even.push_back(temp);
    }
}

//Copy even vector to the 1st row array, odd to the 2nd row array
void copy(vector<int>even, vector<int> odd,int array[][COLMAX])
{
    //Copy odd vector to the 1st row of array
    for(int i = 0; i < even.size(); i++)
        array[i][0] = even[i];
        
    //Copy even vector to the 2nd row of array    
    for(int i = 0; i < odd.size(); i++)
        array[i][1] = odd[i];
        
}

void prntVec(vector<int> even, vector<int> odd,int width)
{
    cout<< "    Vector      Even       Odd" <<endl;
    int i {};
    
    if(even.size() > odd.size())
    {
        for( i = 0; i < odd.size(); i++)
        {
            cout << "                   " << even[i] << "         " << odd[i] << endl;
        }
        for(i; i < even.size(); i++)
        {
            cout << "                   " << even[i] << "          " << endl;
        }
    }
    else
    {
        for( i = 0; i < even.size(); i++)
        {
            cout << "                   " << even[i] << "         " << odd[i] << endl;
        }
        for(i; i < odd.size(); i++)
        {
            cout << "                             " <<odd[i] <<endl;
        }
    }
}

void prntAry(const int array[][COLMAX],int eveSize,int oddSize,int width)
{
    cout << setw(width);
    int i {};
    cout << "Array" << setw(width) << "Even" << setw(width) << "Odd" << endl;
    if(eveSize > oddSize)
    {
        for(i = 0; i < oddSize; i++)
        {
            cout << "                   " << array[i][0] << "         " << array[i][1] << endl;
        }
        for(i; i < eveSize; i++)
        {
            cout << "                   " << array[i][0] << "          " << endl;
        }
    }
    else
    {
        for( i = 0; i < eveSize; i++)
        {
            cout << "                   " << array[i][0] << "         " << array[i][1] << endl;
        }
        for(i; i < oddSize; i++)
        {
            cout << "                             " <<array[i][1]<<endl;
        }
    }
}

