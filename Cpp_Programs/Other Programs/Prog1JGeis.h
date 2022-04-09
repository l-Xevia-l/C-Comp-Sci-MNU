/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/25/2022
Date Last Modified: 3/25/2022
Purpose: Provide class functions for the driver program
|-----------------------------------------------------------------------------|
*/

#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <String>
#include <chrono>
#include <thread>

using namespace std;

class Mastermind {
public:
    Mastermind(int pos) 
        : positiion{pos} {
    }

    void createCode(){
        // Declare variables for storing the random number (num) and the color associated with that number (code).
        int num;
        string code;
        num = 1 + rand() %  6;

    // selects a color based on the value of num, which will be a random number between 1 and 6.
        // Creates a random color for codePos1
        switch (num)
        {
        case 1:
        code = "R";
            break;
        case 2:
            code = "O";
            break;
        case 3:
            code = "Y";
            break;
        case 4:
            code = "G";
            break;
        case 5:
            code = "B";
            break;
        case 6:
            code = "P";
            break;
        default:
            cout << "Something went very, very, very wrong in the Prog1JGeis.h file when assigning the color based on a number.";
            break;
        }
        
        codePos1 = code;


        // Creates a random color for codePos2
        do {
            num = 1 + rand() %  6;

            // selects a color based on the value of num, which will be a random number between 1 and 6.
            switch (num)
            {
            case 1:
                code = "R";
                break;
            case 2:
                code = "O";
                break;
            case 3:
                code = "Y";
                break;
            case 4:
                code = "G";
                break;
            case 5:
                code = "B";
                break;
            case 6:
                code = "P";
                break;
            default:
                cout << "Something went very, very, very wrong in the Prog1JGeis.h file when assigning the color based on a number.";
                break;
            }
            codePos2 = code;
        } while (codePos1 == codePos2);

        // Creates a random color for codePos3
        do { 
            num = 1 + rand() %  6;

            // selects a color based on the value of num, which will be a random number between 1 and 6.
            switch (num)
            {
            case 1:
                code = "R";
                break;
            case 2:
                code = "O";
                break;
            case 3:
                code = "Y";
                break;
            case 4:
                code = "G";
                break;
            case 5:
                code = "B";
                break;
            case 6:
                code = "P";
                break;
            default:
                cout << "Something went very, very, very wrong in the Prog1JGeis.h file when assigning the color based on a number.";
                break;
            }
            codePos3 = code;
        } while ((codePos3 == codePos1) || (codePos3 == codePos2));

        // Creates a random color for codePos4
        do {
            num = 1 + rand() %  6;

            // selects a color based on the value of num, which will be a random number between 1 and 6.
            switch (num)
            {
            case 1:
                code = "R";
                break;
            case 2:
                code = "O";
                break;
            case 3:
                code = "Y";
                break;
            case 4:
                code = "G";
                break;
            case 5:
                code = "B";
                break;
            case 6:
                code = "P";
                break;
            default:
                cout << "Something went very, very, very wrong in the Prog1JGeis.h file when assigning the color based on a number.";
                break;
            }
            codePos4 = code;
        } while (((codePos4 == codePos1) || (codePos4 == codePos2)) || (codePos4 == codePos3));
    }
    string getCodePos1() {
        return codePos1;
    }
    string getCodePos2() {
        return codePos2;
    }
    string getCodePos3() {
        return codePos3;
    }
    string getCodePos4() {
        return codePos4;
    }

private:
    int positiion{};
    string codePos1{};
    string codePos2{};
    string codePos3{};
    string codePos4{};
};