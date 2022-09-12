/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 6:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //initializing
    float weight{}, mass{};
    
    do{
        cout << "Enter the mass of the object in kg: ";
        cin >> mass;
        
        //calculation
        weight = mass * 9.8;
        
        //determine if the object is too heavy or light
        if(weight < 1000 && weight > 10)
            cout << "The weight of the object is: " << weight<< " Newtons." << endl;
        else if( weight > 1000)
            cout << "The object is too heavy. Try again." << endl;
        else
            cout << "The object is too light. Try again." << endl;
        
        cout << endl;
        
    }while(weight > 1000 || weight < 10); //loop until the object's weight is within 10 and 1000 Newtons.
    return 0;
}

