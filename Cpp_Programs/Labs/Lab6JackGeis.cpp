/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 2/18/2022
Date Last Modified: 2/18/2022
Assignment: Make two sets of nested for loops to output a pattern of asterisks
in the shape of the triangle. The triangles size can be changed by the user 
entering a number between 5 and 15, the triangles peak will be that many *'s
in length. 
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {

    unsigned int usrInput;

    cout << "Enter the length of the triangle, number must be from 5-15: ";
    cin >> usrInput;

    // for loop that runs from 0 to the number the user enters and ends the line before restarting the loop.
    for(unsigned int i(0); i <= usrInput; ++i) {
            /* for loop that runs until "asterisk" is > i. every iteration prints out another asterisk on the
            same line as the last. */
            for(unsigned int asterisk(0); asterisk <= i; ++asterisk) {
                cout << "*";
            }
        cout << endl;
    }
    // for loop that runs from the number the user enters to 0, endsline before restarting.
    for(unsigned int i(usrInput); i <= usrInput; --i) {
            // exact copy of the nested for loop on line 27.
            for(unsigned int asterisk(0); asterisk <= i; ++asterisk) {
                cout << "*";
            }
        cout << endl;
    }

    cout << "Have a nice day! :D"; // :)

    return 0;
}