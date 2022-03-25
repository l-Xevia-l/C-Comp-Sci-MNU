/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 1/19/2022
Date Last Modified: 1/19/2022
Assignment: Lab 2. Write a program to take an integer and a float and output
   different calculations using the two numbers.
|-----------------------------------------------------------------------------|
*/

#include <iostream>

using namespace std;

int main() {
   int userInt(0); // Declares userInt as an integer and assigns it to 0
   float userFloat(0); // Declares userFloat as a float and assigns it to 0

   cout << "Welcome to Lab2!" << endl;

   cout << "Please input an integer: ";
   cin >> userInt; 
   
   cout << "\n""Please input a float: ";
   cin >> userFloat;
   
   cout << "Your integer: " << userInt << endl; // Outputs the users integer
   cout << "Your float: " << userFloat << endl; // Outputs the users float

   float IntTimesFloat(userInt * userFloat); // Declares IntTimesFloat as a float and assigns it to the sum of userInt x userFloat
   float IntSquared(userInt * userInt); // Declares IntSquared as a float and assigns it to userInt ^ 2
   float IntCubed(userInt * userInt * userInt); // Declares IntCubed as a float and assignes it to userInt ^ 3

   cout << "Your integer and float multiplied: " << IntTimesFloat << endl;
   cout << "Integer squared: " << IntSquared << "\t" << "Integer cubed: " << IntCubed << endl;
   
   cout << "Thank you for using my Program!\n" << "Have a nice day!";

    return 0;
}
