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

using namespace std;


class Mastermind {
public:
    Mastermind(string name) 
        : playerName{name} {
    }

    void createCodeColor(){
        //srand(static_cast<unsigned int>(time(0)));
        // Assign all 6 colors to different numbers, then randomize said numbers for a code.
        int num;
        string code;
        num = 1 + rand() %  6;
        /*num2 = 1 + rand() %  6;
        num3 = 1 + rand() %  6;
        num4 = 1 + rand() %  6;
        while (((num1 == num2) || (num1 == num3)) || (num1 == num4)) {
            num1 = 1 + rand() % 6;
        }
        while (((num2 == num1) || (num2 == num3)) || (num2 == num4)) {
            num2 = 1 + rand() % 6;
        }
        while (((num3 == num2) || (num3 == num1)) || (num3 == num4)) {
            num3 = 1 + rand() % 6;
        }
        while (((num4 == num2) || (num4 == num3)) || (num4 == num1)) {
            num4 = 1 + rand() % 6;
        }*/

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
            break;
        }

        /*switch (num2)
        {
        case 1:
            code2 = "R";
            break;
        case 2:
            code2 = "O";
            break;
        case 3:
            code2 = "Y";
            break;
        case 4:
            code2 = "G";
            break;
        case 5:
            code2 = "B";
            break;
        case 6:
            code2 = "P";
            break;
        default:
            break;
        }

        switch (num3)
        {
        case 1:
            code3 = "R";
            break;
        case 2:
            code3 = "O";
            break;
        case 3:
            code3 = "Y";
            break;
        case 4:
            code3 = "G";
            break;
        case 5:
            code3 = "B";
            break;
        case 6:
            code3 = "P";
            break;
        default:
            break;
        }

        switch (num4)
        {
        case 1:
            code4 = "R";
            break;
        case 2:
            code4 = "O";
            break;
        case 3:
            code4 = "Y";
            break;
        case 4:
            code4 = "G";
            break;
        case 5:
            code4 = "B";
            break;
        case 6:
            code4 = "P";
            break;
        default:
            break;
        }*/

        masterCode = code;
    }
    string getCodeColor() {
        return masterCode;
    }
private:
    string playerName{"Jack"};
    string masterCode{};
};