/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 5:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


float celsius (int&);
/*
 * 
 */
int main(int argc, char** argv) {

    //Using for loop to display the conversion of 0-20F to C
    for (int i = 0; i < 21; i++)
    {
        float cel = celsius(i);
        cout << i << "F is equal to " << fixed << setprecision(2) << cel << "C" << endl;
        
    }
    
    return 0;
}

/*
 * Function to convert F to C
 * Parameter(s): fah
 */
float celsius (int& fah)
{
    return (5/9.0) * (fah - 32);
}
