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
    Mastermind(int pos) 
        : positiion{pos} {
    }

    void createCodeColor(){
        //srand(static_cast<unsigned int>(time(0)));
        // Assign all 6 colors to different numbers, then randomize said numbers for a code.
        int num;
        string code;
        num = 1 + rand() %  6;

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

        masterCode = code;
    }
    string getCodeColor() {
        return masterCode;
    }
private:
    int positiion{};
    string masterCode{};
};