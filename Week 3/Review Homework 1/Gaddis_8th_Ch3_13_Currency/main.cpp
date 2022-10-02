/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 5:09 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Initializing dollar, euro and yen variables
    float dollar, euro, yen;

    cout << "This program will convert your USD to Yen and Euro." << endl;
    cout << "Enter the amount of USD you want to convert: ";
    cin >> dollar;
    
    //Calculation
    euro = 0.74 * dollar;
    yen = 98.93 * dollar;
    
    cout << endl << dollar << " USD is equaled to " << euro << " EUR and " << yen <<" YEN." << endl;
    return 0;
}

