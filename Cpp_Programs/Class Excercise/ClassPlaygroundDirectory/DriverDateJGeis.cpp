// Driver program that demonstrates class Date's capabilities.
// Name: Jack Geis
// Assignment: Lab3
// Date: 1/26/22
//
//
#include <iostream>
#include "DateJGeis.h" // includes definition of class Date from DateJGeis.h
using namespace std;

// function main begins program execution
int main()
{
   Date firstDayOfTerm{1, 11, 2022};
   Date lab3Date{1, 26, 2022};
   Date mysteryDate{3,3,2022};
   
   // displays the month day and year of firstDayofTerm. One per line with labels.
   cout << " Month: " << firstDayOfTerm.getMonth() << endl;
   cout << " Day: " << firstDayOfTerm.getDay() << endl;
   cout << " Year: " << firstDayOfTerm.getYear() << endl;
   
   // displays the year, month and day of lab3Date all on the same line in the requested order.
   cout << " " << lab3Date.getYear() << "/" << lab3Date.getMonth() << "/" << lab3Date.getDay() << endl;
   
   // modify mysteryDate to be July 4th 2005 
   mysteryDate.setMonth(7), mysteryDate.setDay(4), mysteryDate.setYear(2005);

   // use displayDate to print out the mysteryDate 
   mysteryDate.displayDate();
} 

