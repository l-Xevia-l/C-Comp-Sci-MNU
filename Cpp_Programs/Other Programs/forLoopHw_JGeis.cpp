/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: //2022
Date Last Modified: //2022
Assignment: Write 6 different for loops that do different types of iterations.
One that counts from 1-100 by 1, one that counts from 100-1 by 1, one that 
counts from 7-77 by 7, one that counts from 20-2 by 2, one that counts from 
2-20 by 3, and lastly, one that counts down from 99-11 by 11 with an unsigned
int.
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {

    cout << "\nFrom 1 to 100 by 1: \n";
    for(unsigned int upByOne = 1; upByOne <= 100; ++upByOne){
        cout << upByOne << endl;
    }

    cout << "\nFrom 100 to 1 by 1: \n";
    for(unsigned int downByOne = 100; downByOne >= 1; --downByOne){
        cout << downByOne << endl;
    }

    cout << "\nFrom 7 to 77 by 7: \n";
    for(unsigned int upBySeven = 7; upBySeven <= 77; upBySeven+=7){
        cout << upBySeven << endl;
    }

    cout << "\nFrom 20 to 2 by 2: \n";
    for(unsigned int downByTwo = 20; downByTwo >= 2; downByTwo-=2){
        cout << downByTwo << endl;
    }

    cout << "\nFrom 2 to 20 by 3: \n";
    for(unsigned int upByThree = 2; upByThree <= 20; upByThree+=3){
        cout << upByThree << endl;
    }

        cout << "\nFrom 99 to 11 by 11: \n";
    for(unsigned int downByEleven = 99; downByEleven >= 11; downByEleven-=11){
        cout << downByEleven << endl;
    }
    return 0;
}