/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/25/2022
Date Last Modified: 4/7/2022
Assignment: Write a program so that you can play mastermind against the computer. 
The computer will always be the codemaker and the player will always be the 
codebreaker.
|-----------------------------------------------------------------------------|
*/


#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <String>
#include "Prog1JGeis.h"
#include <chrono>
#include <thread>

using namespace std;

int main() {
    // true random
    srand(static_cast<unsigned int>(time((0))));

    // Initialize all needed variables
    string playAgain("y");
    string name;
    string guess1;
    string guess2;
    string guess3;
    string guess4;

    int whitePins(0);
    int blackPins(0);
    int attempts(1);


    cout << "Welcome to Jack's Mastermind Machine! You will be trying to guess the code that my program creates. Please enter your name: ";
    cin >> name;
    cout << "\n\nAlrighty " << name << "! here's the rules:"
        << "\nBoth the code you will be trying to guess and your guesses will be comprised of four colors each and have 6 poossible colors. "
        << "\nThe goal is to guess the code the computer makes, each correct color is one white pin, each correct"
        << " color AND position is one black pin. \n\nIn laymans terms: Get 4 black pins to get the wins."

        << "\n\nReady to play " << name << "? y/n";
    cin >> playAgain;

    if (playAgain != "N" && playAgain != "n") {
        cout << "\n\nAwesome! Let the games begin!\n\n";
    }
    else {
        cout << "\n\nGame canceled. Have a nice day" << name << "!" << endl;
    }

    do {
        Mastermind code{1};

        //makes the code
        code.createCode();

        // grabs the colors for the code for comparison to the users guess
        string codePos1 = code.getCodePos1();
        string codePos2 = code.getCodePos2();
        string codePos3 = code.getCodePos3();
        string codePos4 = code.getCodePos4(); 

        
        // runs while the user wants to and the player has not won
        while (guess1 != "N" && blackPins < 4) {
            
            // makes sure the number of each pins is at 0 for every individual guess
            whitePins = 0;
            blackPins = 0;

            cout << "\n\nIf you would like to quit the game enter \"N\" as your first guess. \n";
            cout << "\nThe colors are R, O, Y, G, B, P\n";

            // gets all the colors for the guess
            cout << "Please input the first color in guess. This is caps-sensitive: ";
            cin >> guess1;
            cout << "\nNow enter the second color: ";
            cin >> guess2;
            cout << "\nNext your third color: ";
            cin >> guess3;
            cout << "\nAnd now the last color: ";
            cin >>guess4;

            cout << "\n Your guess: " << guess1 << guess2 << guess3 << guess4 << endl;

            // calculates black pins
            if (guess1 == codePos1) {
                blackPins++;
            }
            if (guess2 == codePos2) {
                blackPins++;
            }
            if (guess3 == codePos3) {
                blackPins++;
            }
            if (guess4 == codePos4) {
                blackPins++;
            }

        // calculates white pins 
            // two arrays, one of the answer and one of the guesses to simplify comparison
            array<string, 5>ans {codePos1, codePos2, codePos3, codePos4};
            array<string, 5>guess {guess1, guess2, guess3, guess4};

            // finds all of the colors each array has in commmon
            for (unsigned int i(0); i < 5; i++) {
                if (((guess[i] == ans[1]) || (guess[i] == ans[2])) || ((guess[i] == ans[3]) || (guess[i] == ans[4]))) {
                    whitePins++;
                }
            }

            // white pins is the total matching colors between the answer and the guess minus the black pins
            whitePins = whitePins - blackPins; 

            // if the guess is exactly correct there will be no white pins
            if (blackPins == 4) {
                whitePins = 0;
            }
            
            // Outputs the correct information depending on the number of each color of pins
            if (blackPins < 4) {
                // makes sure that atleast one of the colors in the guess is correct
                if ((whitePins != 0) || (blackPins != 0)) {
                    if (blackPins != 0) {
                        cout << " Amazing guess, " << name << "! You got " << blackPins << " blackPins\n";
                    }
                    if (whitePins != 0) {
                        if (blackPins != 0) {
                            cout << " You also got " << blackPins << " white pins!\n";
                        }
                        else {
                            cout << " Alright " << name << ", good guess! Here is " << whitePins << " white pins.\n";
                        }
                    }
                } // as long as the player isnt exiting the game, tells them that none of the colors were correct
                else if (guess1 != "N") {  
                    cout << " None of the colors you entered were in the code! Try again " << name << "!" << endl;
                }
            } // Displays the win message and data if the player has won, i.e. the # of black pins is == 4
            else {
                cout << " Well done " << name << "! You got the code with " << attempts << " guesses!\n";
                cout << "Would you like to play again? y/n: ";
                cin >> playAgain;
            }
            attempts += 1;
        }
    } while (playAgain != "N" && playAgain != "n");

    return 0;
}