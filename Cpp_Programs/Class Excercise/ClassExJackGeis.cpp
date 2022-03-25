/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 1/19/2022
Date Last Modified: 1/19/2022
Assignment: Class Example. Copying program off slide to practice compiling.
|-----------------------------------------------------------------------------|
*/

#include <iostream>

using std::cout; // This program uses cout
using std::cin;  // This program uses cin
using std::endl; // This program uses endl


int main() {
   int num1(0);
   int num2(0);

   cout << "Enter two numbers to compare: "; //Prompts the user for input.
   cin >> num1 >> num2; //reads two integers from the user

   if (num1 == num2) {
       cout << num1 << " == " << num2 << endl;
   }
   
   if (num1 != num2) {
       cout << num1 << " != " << num2 << endl;
   }

   if (num1 > num2) {
       cout << num1 << " > " << num2 << endl;
   }

   if (num1 < num2) {
       cout << num1 << " < " << num2 << endl;
   }

   if (num1 <= num2) {
       cout << num1 << " <= " << num2 << endl;
   }

   if (num1 <= num2) {
       cout << num1 << " <= " << num2 << endl;
   }
    return 0;
}
