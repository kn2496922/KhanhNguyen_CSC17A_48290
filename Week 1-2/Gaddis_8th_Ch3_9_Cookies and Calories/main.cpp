/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 5:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Initializing numCk for number of cookies and cal for total calories.
    float numCk, cal;
    
    cout << "This program will take in the amount of cookies you've eaten and output the calories you consumed." << endl;
    cout << "Enter the amount of cookies you have consumed: ";
    cin >> numCk;
    
    //Calculation
    cal = numCk * ((300 * 10.00)/30);
    
    cout << endl <<  "Number of calories you have consumed: " << cal << " calories." << endl;
    
    return 0;
}

