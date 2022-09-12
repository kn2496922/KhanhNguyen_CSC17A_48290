/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 6:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    
    float cel {}, fah {};

    //Using for loop to display the conversion of 0-20F to C
    for (int i = 0; i < 21; i++)
    {
        cel = i;
        fah = 1.8*cel + 32;
        cout << i << "C is equal to " << fixed << setprecision(2) << fah << "F" << endl;
    }
    
    return 0;
}


