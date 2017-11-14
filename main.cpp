//Lab #2

/* Pseudocode
 Display "Welcome to INTERPLANETARY..." message
 Create char variable for input
 Create int variable for user weight, user rate
 Create double variable for gravity of planet, distance, miles_planet, final_weight, final_time, hours, days and years
 Create constant variable for DAY = 24, YEAR = 365, MILES_EARTH = 96million
 Create variable string for planet name
 Display "Welcome to INTERPLANETARY TRAVEL PROGRAM..." welcome message
 Display menu of planets "a) Mercury b) Venus..."
 Display "Select a planet to travel to or q to quit the program"
 Ask for planet input
 If planet input is a - h
    Display "What is your weight"
    Ask Weight
    Display "What speed would you like to travel?"
    Ask rate
 else if planet input is 'q'
    Display message "Quit Program"
 If planet input is a - h
    Initialize variable name, gravity, and miles away from planet (miles_planet)
Create weight calculation final_weight = gravity of planet * weight of user input
Create travel time calculation = distance of planet from sun - distance of planet from earth, use absolute value for negative numbers
Create hours calculation, hours = distance / rate user input
Create days calculation, days = hours / DAY
Create years calculation, years = days / YEAR
Display "INTERPLANETARY TRAVEL: EARTH TO..." depending on user choice
Display "Your weight on..." output varies depending on user choice
Display "Your travel time to..." output varies depending on user choice
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;


int main() {
    
    char ch;
    int weight, rate;
    double gravity, distance, miles_planet;
    double final_weight, final_time, hours, days, years;
    double const DAY = 24;
    double const YEAR = 365;
    double const MILES_EARTH = 93 * pow(10,6);
    string name;
    
    cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!\n";
    cout << "This program enables you to find out your travel time to the planet you want to travel " <<
            "to as well as your weight on there.\n";
    cout << "Please enjoy the program and hope you'll find the perfect planet for you!\n\n";
    cout << "INTERPLANETARY TRAVEL MENU\n" << setfill('-') << setw(28) << "\n\n";
    cout << "a)\tMercury\n";
    cout << "b)\tVenus\n";
    cout << "c)\tEarth\n";
    cout << "d)\tMars\n";
    cout << "e)\tJupiter\n";
    cout << "f)\tSaturn\n";
    cout << "g)\tUranus\n";
    cout << "h)\tNeptune\n";
    cout << "q)\tQuit\n";
    cout << "\nSelect a planet to travel to or q to quit the program: ";
    cin >> ch;
    
    if (ch == 'q') {
        cout << "Quit. Come again.\n" << endl;
        exit (EXIT_FAILURE);
    }
    else {
        cout << "\nWe're almost there! Please enter weight: ";
        cin >> weight;
        cout << "\nEnter speed at which you wish to travel (miles per hour): ";
        cin >> rate;
        cout << endl;
    }
    
    
    if (ch == 'a') {
        name = "Mercury";
        gravity = 0.27;
        miles_planet = (36 * pow(10,6));
    }
    else if (ch == 'b') {
        name = "Venus";
        gravity = 0.86;
        miles_planet = (67 * pow(10,6));
    }
    else if (ch == 'c') {
        name = "Earth";
        gravity = 1.00;
        miles_planet = (93 * pow(10,6));
    }
    else if (ch == 'd') {
        name = "Mars";
        gravity = 0.37;
        miles_planet = (141 * pow(10,6));
    }
    else if (ch == 'e') {
        name = "Jupiter";
        gravity = 2.64;
        miles_planet = (483 * pow(10,6));
    }
    else if (ch == 'f') {
        name = "Saturn";
        gravity = 1.17;
        miles_planet = (886 * pow(10,6));
    }
    else if (ch == 'g') {
        name = "Uranus";
        gravity = 0.92;
        miles_planet = (1782 * pow(10,6));
    }
    else if (ch == 'h') {
        name = "Neptune";
        gravity = 1.44;
        miles_planet = (2793 * pow(10,6));
    }
    
    // weight calculation
    final_weight = gravity * weight;
    
    // travel time calculation
    distance = miles_planet - MILES_EARTH;
    hours = distance / rate;
    days = hours / DAY;
    years = days / YEAR;
    
    
    //result output
    cout << "INTERPLANETARY TRAVEL:\tEarth to " << name << "\n";
    cout << setfill('-') << setw(43) << "\n";
    cout << fixed;
    cout << setprecision(2) << "Your weight on " << name << ":\t\t" << final_weight << " lbs\n\n";
    cout << "Your travel time to " << name << ":\n";
    cout << "\tIn Hours: " << setprecision(0) << abs(hours) << " hours\n";
    cout << "\tIn Days: " << abs(days) << " days\n";
    cout << "\tIn Years: " << setprecision(2) << abs(years) << " years" << endl;

    
    return 0;
}
