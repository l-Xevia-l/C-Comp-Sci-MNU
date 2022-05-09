/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 4/13/2022
Date Last Modified: 4/13/2022
Assignment: Write a program that uses "built-in strings" to take a string from
the user and then prints it out in reverse.
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

int main() {
    char s1[ 80 ];
    char * s1Ptr(s1);
    int nullIndex(0);

    cout << "Please input a string with a maximum of 80 characters and no spaces: ";
    cin >> s1;

    while (*s1Ptr != '\0') {
        s1Ptr++;
        nullIndex++;
    }

    for (int i(nullIndex); i >= 0; i--) {
        cout << s1[i];
    }

    return 0;
}