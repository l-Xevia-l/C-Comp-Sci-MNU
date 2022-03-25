/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/23/2022
Date Last Modified: 3/23/2022
Assignment: Make a program that prompts the user for 20 numbers and stores each
number inside of an array. Once the 20 numbers have been entered display all 
of the valid numbers in the array.
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int addToArray(1);
    // declare an array
    array<int, 20> inputArray;

    // Initialize with all zeroes
    for (int i(0); i < 20; i++){
        inputArray[i] = 0;
    }

    // Inform user
    cout << "Please input 20 individual integers between 1 - 100, one at a time.";

    // for loop to step forward by one each time from 0 - length of array
    for (int i(0); i < inputArray.size(); i++) {
        cout << "\nInput an integer here: ";
        cin >> addToArray;
        // Only adds number to the array if it is valid.
        if (addToArray >= 1 && addToArray <= 100) {
            inputArray[i] = addToArray;
            cout << "\n" << addToArray << " added to array location " << i << endl;
        }
        else{
            cout << "\n Must be between 1 and 100 inclusive. \n";
        }
    }

    // same for loop used to output all of the valid numbers in the array
    for (int i(0); i < inputArray.size(); i++) {
        // If the number in the array is a zero, the number entered 
        if (inputArray[i] != 0){
            cout << "\nPosition " << i << " >> " << inputArray[i] << endl;
        }
    }
    return 0;
}