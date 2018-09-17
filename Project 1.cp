//
//  main.cpp
//  Project 1
//
//  Created by A.J. Ort on 9/13/18.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[])
{
    int choice;
    
    
    {
        do {
        
        cout << endl
        << "Choose 1 to convert from English to Metric system\n "
        << "Choose 2 to convert from Metric to English system\n "
        << "Choose 3 to exit\n "
        << " Enter your choice and press enter\n ";
        cin >> choice;
        int feet;
        double inches, meters, totalInches, inchesRemaining;
        switch(choice)
        
        {
            case 1:
                cout << "enter the number in feet and then inches\n";
                cin >> feet >> inches;
                if (inches < 12) {
                    totalInches = 12 * feet + inches;
                    meters = totalInches / 39.3701;
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(2);
                    cout <<  meters << " meters\n";
               
                }    else {
                    cout << " Please enter a number for inches less than 12\n";
                }
            
                break;
        
    case 2:
                cout << " Enter the number in meters to the nearest hundredth \n";
                cin >> meters;
                inches = meters * 39.3701;
                feet = inches / 12;
                inchesRemaining = std::fmod(inches, 12);
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                cout << feet << " Feet " << inchesRemaining << " Inches \n";
                break;
    case 3:
                cout << "Goodbye \n";
      
        }
           
        } while (choice != 3);
    return 0;
}
}
