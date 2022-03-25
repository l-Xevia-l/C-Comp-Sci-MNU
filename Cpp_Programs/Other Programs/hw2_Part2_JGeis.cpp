/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 2/25/2022
Date Last Modified: 2/28/2022
Assignment: Create a program  to brute force all Pythagorean Triples for 
a triangle between 0 and 500 units using a triple nested for loop.
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {
    int counter(0), hypot, side1, side2;

    cout << "Pythagorean Triples: \n";
    for (unsigned int c(1); c < 501; c++) { // Triple nested for loop where all loops run from 0 - 500.
        //hypot = (outer * outer); // Asignes hypot to the square of the number according to the loops current iteration.

        for (unsigned int b(1); b < 501; b++) {
            //side1 = (mid * mid); // Asignes side to the square of the number according to the loops current iteration.
            
            for (unsigned int a(1); a < 501; a++){
                //side2 = (inner * inner); // Asignes side2 to the square of the number according to the loops current iteration.

                if ((a*a) + (b*b) == (c*c) && (a < b)) { // Compares the sum of side1 and side2 to the hypot.
                    counter += 1;
                    cout << "\n\tNumber: " << counter << "\n\t\tHypotenuse: " << c << "\n\t\tSide 1: " << b << "\n\t\tSide 2: " << a << "\n\n";
                    // ^ Outputs the number of Pythag Triples, along with the numbers associated with said Pythag Triple.
                }
            
            }
        }
        
    }

    return 0;
}
