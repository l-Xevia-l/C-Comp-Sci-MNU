/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: //2022
Date Last Modified: //2022
Assignment: 
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const size_t arraySize = 11;
    unsigned int currentNum;
    array<unsigned int, arraySize> n[0,0,0,0,0,0,1,2,4,2,1];
    int from = 0;
    int to = 9;

    for (unsigned int i(0); i < 11; i++) {
        if (to != 100){
            cout << from << "-" << to << ": ";
        }
        else {
            cout << "100";
        }
        currentNum = n[i];
        for (unsigned int x(0); x < currentNum; x++){
            cout << "*";
        }
        cout << endl;
        from += 10;
        to += 10;
    }


    return 0;
}