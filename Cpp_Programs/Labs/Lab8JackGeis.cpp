/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/2/2022
Date Last Modified: 3/2/2022
Assignment: Write two overloaded functions to convert Celsius to Fahrenheit and
vise versa. Use int and double types.
|-----------------------------------------------------------------------------|
*/

// Celsius to Fahrenheit formula :  °C = [(°F-32)×5]/9
// Fahrenheit to Celsius formula :  F = (°C x 1.8) + 32


#include <iostream>
#include <cmath>

using namespace std;

// Prototypes
int fahrenheit(int);

double fahrenheit(double);

int celsius(int);

double celsius(double);

int main() { // C to F conversions
    cout << "90.3763 C is " << fahrenheit(90.3763) << " degrees F" << endl <<
    "0 C is " << fahrenheit(0) << " degrees F" << endl <<
    "32 C is " << fahrenheit(32) << " degrees F" << endl <<
    "56.743 C is " << fahrenheit(56.743) << " degrees F" << endl <<
    "0.0 C is " << fahrenheit(0.0) << " degrees F" << endl <<
    "166 C is " << fahrenheit(166) << " degrees F" << endl << endl;

    // F to C conversions
    cout << "0 F is " << celsius(0) << " degrees C" << endl <<
    "45.363 F is " << celsius(45.363) << " degrees C" << endl <<
    "22 F is " << celsius(22) << " degrees C" << endl <<
    "55.3 F is " << celsius(55.3) << " degrees C" << endl <<
    "100.0000 F is " << celsius(100.0000) << " degrees C" << endl <<
    "70 F is " << celsius(70) << " degrees C" << endl << endl;

    return 0;
}

// Function code

// Overloaded Fahrenheit conversion functions
int fahrenheit(int C){ // Converts Celsius to Fahrenheit using int type
    int F = (C * 1.8) + 32;
    return F;
}

double fahrenheit(double C){ // Converts Celsius to Fahrenheit using double type
    double F = (C * 1.8) + 32;
    return F;
}

// Overloaded Celsius conversion functions
int celsius(int F){ // Converts Fahrenheit to Celsius using int type.
    int C = (((F-32) * 5) / 9);
    return C;
}

double celsius(double F){ // Converts Fahrenheit to Celsius using int type.
    double C = (((F-32) * 5) / 9);
    return C;
}