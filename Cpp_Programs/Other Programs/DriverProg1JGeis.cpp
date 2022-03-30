/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/25/2022
Date Last Modified: 3/29/2022
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

// true random
// srand(static_cast<unsigned int>(time(0)));

int main() {
    srand(static_cast<unsigned int>(time((0))));

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
    cout << "\nBoth the code you will be trying to guess and your guesses will be comprised of four colors each and have 6 poossible colors. ";

    do {
        Mastermind code{1};

        code.createCode();

        string codePos1 = code.getCodePos1();
        string codePos2 = code.getCodePos2();
        string codePos3 = code.getCodePos3();
        string codePos4 = code.getCodePos4(); 

        cout << "1 " << codePos1 << codePos2 << codePos3 << codePos4 << endl;

        
        while (guess1 != "N" && blackPins < 4) {
            
            whitePins = 0;
            blackPins = 0;

            cout << "if you would like to quit the game enter \"N\" as your first guess. \n";
            cout << "\nThe colors are R, O, Y, G, B, P\n";
            cout << "Please input the first color in guess. This is caps-sensitive: ";
            cin >> guess1;
            cout << "\nNow enter the second color: ";
            cin >> guess2;
            cout << "\nNext your third color: ";
            cin >> guess3;
            cout << "\nAnd now the last color: ";
            cin >>guess4;

            cout << "\n Your guess: " << guess1 << guess2 << guess3 << guess4 << endl;


            if (((guess1 == codePos1) || (guess2 == codePos1)) || ((guess3 == codePos1) || (guess4 == codePos1))) {
                if (guess1 == codePos1) {
                    blackPins += 1;
                }
                else {
                    whitePins += 1;
                }
            }

            if (((guess1 == codePos2) || (guess2 == codePos2)) || ((guess3 == codePos2) || (guess4 == codePos2))) {
                if (guess2 == codePos2) {
                    blackPins += 1;
                }
                if (!(guess1 == guess2)) {
                    whitePins += 1;
                }
            }

        if (((guess1 == codePos3) || (guess2 == codePos3)) || ((guess3 == codePos3) || (guess4 == codePos3))) {
            if (guess3 == codePos3) {
                    blackPins += 1;
            }
                if (!(guess3 == guess1) || !(guess3 == guess2)) {
                    whitePins += 1;
                }
            }

            if (((guess1 == codePos4) || (guess2 == codePos4)) || ((guess3 == codePos4) || (guess4 == codePos4))) {
                if (guess4 == codePos4) {
                    blackPins += 1;
                }
            if ((!(guess4 == guess1) || !(guess4 == guess2)) || !(guess4 == guess3)) {
                    whitePins += 1;
                }
            }
            if (blackPins < 4) {
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
                }
                else if (guess1 != "N") {  
                cout << " None of the colors you entered were in the code! Try again " << name << "!" << endl;
                }
            }
            else {
                cout << " Well done " << name << "! You got the code with " << attempts << " guesses!\n";
            }
            attempts += 1;
            cout << "Would you like to play again? y/n: ";
            cin >> playAgain;
        }
    } while (playAgain != "N" && playAgain != "n");

    return 0;
}