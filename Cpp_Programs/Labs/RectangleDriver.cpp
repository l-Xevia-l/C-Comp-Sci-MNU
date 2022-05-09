/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 4/20/2022
Date Last Modified: 4/20/2022
Assignment: Write a driver program that demonstrates class Rectangle’s
capabilities. The program should prompt the user for input on the dimensions of
rectangle and output all the details for the rectangle.
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <String>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle shape{10, 10};

    cout << "Default rectangle size, x: " << shape.getWidth() << "\ty: " << shape.getlength();

    int width;
    int length;

    cout << "Welcome to my rectangle program! Please input the new width: ";
    cin >> width;
    cout << "\nInput new length: ";
    cin >> length;

    shape.setWidth(width);
    shape.setLength(length);

    cout << "\n\nWidth and length set!\n";
    cout << "\n\tWidth: \t" << shape.getWidth();
    cout << "\n\tLength: \t" << shape.getlength();
    cout << "\n\tParimeter: \t" << shape.getPerimeter(); // calculates the parimeter and prints the data out.
    cout << "\n\tArea: \t" << shape.getArea(); // calculates the area and prints out the data.

    cout << "\n\nProgram terminated, have a nice day!";

    return 0;
}