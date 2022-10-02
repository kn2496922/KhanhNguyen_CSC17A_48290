/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 4:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip> //Library for decimal manipulation

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Initializing cTemp and fTemp for storing C and F temperature.
    float cTemp, fTemp;
    cout << "Enter the Celsius temperature you want to convert to F: ";
    cin >> cTemp;
    //Calculation
    fTemp = (9/5.0)*cTemp + 32;
    
    cout << endl << "The F temperature equivalent of " << cTemp << "C is: " << fixed << setprecision(2) << fTemp << endl;
    
    return 0;
}

