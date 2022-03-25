/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/25/2022
Date Last Modified: 3/25/2022
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

using namespace std;

// true random
// srand(static_cast<unsigned int>(time(0)));

int main() {

    Mastermind code1{1};
    Mastermind code2{2};
    Mastermind code3{3};
    Mastermind code4{4};
    
    code1.createCodeColor();
    code2.createCodeColor();
    code3.createCodeColor();
    code4.createCodeColor();

    string codeColor1 = code1.getCodeColor();
    string codeColor2 = code2.getCodeColor();
    string codeColor3 = code3.getCodeColor();
    string codeColor4 = code4.getCodeColor();

    cout << codeColor1;
    cout << codeColor2;
    cout << codeColor3;
    cout << codeColor4;

    return 0;
}