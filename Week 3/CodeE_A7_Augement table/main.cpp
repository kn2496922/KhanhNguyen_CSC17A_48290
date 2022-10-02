/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 18, 2022, 6:13 PM
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
   
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}
//Prompt for size then original table
void read(int array[][COLMAX],int &row,int &col)
{
    cout << "Input a table and output the Augment row,col and total sums." <<endl;
    cout << "First input the number of rows and cols. <20 for each" << endl;
    cin >> row;
    cin >> col;
    cout << "Now input the table." << endl;
    
    //Read the input to the array
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
             cin >> array[i][j];
        }
            
    }    
    
}

//Sum rows,col,grand total table
void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX])
{
    //copy array to augmented array
    for(int i = 0; i < row; i++)
    {
            for(int j = 0; j < col; j++)
            {
                 augAry[i][j] = array[i][j];
            }
            
           
    }
    
    
    //adding the sum row and col
    for(int i = 0; i < row; i++)
    {
            
        for(int j = 0; j < col; j++)
        {
            //adding up the sum of all the elements in the array to the last row/col
            augAry[i][col] += augAry[i][j];
            augAry[row][j] += augAry[i][j];
        }
        //adding the last value of each row to the bottom right sum
        augAry[row][col] += augAry[i][col];
    }    
    
}

//Print out table
void print(const int array[][COLMAX],int row,int col,int width)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout  << setw(width) << array[i][j];
        }
        cout << endl;
        
    }
}
