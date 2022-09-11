/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on September 10, 2022, 5:26 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Asking the user for input of the month (between 1-12) and year
    int month {};
    int year {};
    string days {};
    do{
    cout << "Enter a month (1-12): ";
    cin >> month;
    } while (month < 1 || month > 12);
    
    cout << "Enter a year: ";
    cin >> year;
    //Checking if the year is divisible by 100 and 400 to determine leap year
    if ( year % 100 == 0 && year % 400 == 0)
    {
        //If the month is 2 it's 29 days, if it's 4 or 6 or 9 or 11 it's 30 days, 
        // if not it's 31 days
        days = month == 1? "31 days":
               month == 2? "29 days":
               month == 4 || month == 6 || month == 9 || month == 11? "30 days":
                   "31 days";
        cout << days;    
    }
    //If the year divisible by 100 but not 400, it's not a leap year
    else if (year % 100 == 0 && year % 400 !=0)
    {
        //If the month is 2 it's 28 days, if it's 4 or 6 or 9 or 11 it's 30 days, 
        // if not it's 31 days
        days = month == 1? "31 days":
               month == 2? "28 days":
               month == 4 || month == 6 || month == 9 || month == 11? "30 days":
                   "31 days";
        cout << days;    
    }
    //Consider the rest of the case if they are divisible by 4 or not, if yes 
    //it's a leap year.
    
    else if (year % 4 == 0)
    {
        //If the month is 2 it's 29 days, if it's 4 or 6 or 9 or 11 it's 30 days, 
        //if not it's 31 days
        days = month == 1? "31 days":
               month == 2? "29 days":
               month == 4 || month == 6 || month == 9 || month == 11? "30 days":
                   "31 days";
        cout << days;    
    }
    //The rest of the non leap year cases
    else
    {
        //If the month is 2 it's 28 days, if it's 4 or 6 or 9 or 11 it's 30 days, 
        // if not it's 31 days
        days = month == 1? "31 days":
               month == 2? "28 days":
               month == 4 || month == 6 || month == 9 || month == 11? "30 days":
                   "31 days";
        cout << days;    
    }
    return 0;
}

