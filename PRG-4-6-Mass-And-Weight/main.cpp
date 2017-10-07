//
//  main.cpp
//  PRG-4-6-Mass-And-Weight
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Scientists measure an object's mass in kilograms and its weight in newtons. If you know
//  the amount of mass that an object has, you can calculate its weight, in newtons, with
//  the following formula:
//
//  Weight = mass * 9.8
//
//  Write a propgram that asks the user to enter an object's mass, then calculates and displays
//  its weight. If the object weighs more than 1,000 newtons, display a message
//  indicating that it is too heavy. If the object weighs less than 10 newtons, display a message
//  indicating that the object is too light.


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int intMass; // Will static_cast to float for calculation
    
    float fltWeight;
    
    float const FLT_EQUATION_CONSTANT = 9.8f;
    
    cout << "Please enter your object's mass:\n";
    cin >> intMass;
    while(!cin || intMass < 0 || intMass > 1000000)
    {
        cout << "Please enter a mass between 0 and 1,000,000:\n";
        cin.clear();
        cin.ignore();
        cin >> intMass;
    }
    
    fltWeight = static_cast<float>(intMass) * FLT_EQUATION_CONSTANT;
    
    if(fltWeight > 1000.0f)
    {
        cout << "Your object's mass is too heavy.";
    }
    else if(fltWeight < 10.0f)
    {
        cout << "Your object's mass is too light.";
    }
    else
    {
        cout << "Your object's mass is\n" << setprecision(2) << fixed << fltWeight << " newtons.";
    }
    
    return 0;
}


