/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Khanh Nguyen
 *
 * Created on October 4, 2022, 10:30 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//creating structure
struct MovieDat
{
    string title;
    string dirctor;
    int year;
    int length;
};

int main(){
    //declare variables
    int mvCount{};
    int const maxMovie = 99;
    MovieDat movie[maxMovie];
    cout << "This program reviews structures" << endl;
    cout << "Input how many movies, the Title of the Movie, Director, Year"
            " Released, and the Running Time in (minutes)." <<endl;
    cin >> mvCount;
    cin.ignore();
    //declare movie structure
    
    for(int i = 0; i < mvCount; i++)
    {
        getline(cin,movie[i].title);
        getline(cin,movie[i].dirctor);
        cin >> movie[i].year;
        cin >> movie[i].length;
        cin.ignore();
    }
    
    for(int i = 0; i < mvCount; i++)
    {
        cout << endl;
        cout << "Title:     " << movie[i].title << endl;
        cout << "Director:  " << movie[i].dirctor << endl;
        cout << "Year:      " << movie[i].year << endl;
        cout << "Length:    " << movie[i].length << endl;
    }
    
    
    return 0;
}

