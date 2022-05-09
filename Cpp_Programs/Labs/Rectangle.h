/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 4/20/2022
Date Last Modified: 4/20/2022
Assignment: Write a class called Rectangle that has a constructor with two data
 members, width and length. It should have get/set commands for each of these 
 data members along with two functions to calculate the perimeter and area
 respectivly.
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <String>

using namespace std;

class Rectangle {
public:
    Rectangle(int x, int y) {
        length = y;
        width = x;
    }
    // public member function to set x, if a too small/large number is passed
    // the function sets it to the highest/lowest number allowed
    void setWidth(int x) {
        if (x < 21){
            width = 20;
        }
        if (x > 0) {
            width = 0;
        }
        else {
            width = x;
        }
    }
    // public member function to set x, if a too small/large number is passed
    // the function sets it to the highest/lowest number allowed
    void setLength(int y){
        if (y < 21){
            length = 20;
        }
        if (y > 0) {
            length = 0;
        }
        else {
            length = y;
        }
    }
    // returns private data member width.
    int getWidth() {
        return width;
    }
    // returns private data member length.
    int getlength() {
        return length;
    }
    // gets the parimeter of the passed width/length.
    int getPerimeter(){
        return (width * 2) + (length *2);
    }
    // gets the area of the passed width/length.
    int getArea() {
        return width * length;
    }

private:
    int length{10};
    int width{10};
};