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

    Mastermind code1{"Jack"};
    
    code1.createCodeColor();

    int codeColor1 = code1.getCodeColor();

    cout << ;

    return 0;
}