/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 1/21/2022
Date Last Modified: 1/21/2022
Assignment: Class Exercise 1. Write a program that prompts the user for 3 
    integers and prints out the smallest and largest number, the average, 
    the sum, and the product.
|-----------------------------------------------------------------------------|
*/

#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    
    int max;
    int min;
    
    int sum;
    int avg;
    int product;
    
    cout << "Please input 3 integers: ";
    cin >> num1 >> num2 >> num3;

    // Decision tree to find the highest of the three integers
    if (num1 > num2) { 
        max = num1;
   }
    else if (num2 > num1){
        max = num2;
   }   
    if (max < num3) {
        max = num3;
    }

    // Decision tree to find the smallest of the three integers
    if (num1 < num2) {
        min = num1;
    }
    else if (num2 < num1) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    sum = num1 + num2 + num3;
    avg = (num1 + num2 + num3)/3;
    product = num1 * num2 * num3;

    // Prints out all of the computed numbers with descriptions for the user
    cout << "\nYour numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of all the numbers: " << sum << endl;
    cout << "The mean of all the numbers: " << avg << endl;
    cout << "The product of all the numbers: " << product << endl;
    cout << "The largest number: " << max << endl; 
    cout << "The smallest number: " << min << endl;

    return 0;
}
