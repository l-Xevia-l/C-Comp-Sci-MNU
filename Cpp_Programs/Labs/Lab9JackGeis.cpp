/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 2/15/2022
Date Last Modified: 2/17/2022
Assignment: 
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int power(int, int);

int gcd(int, int);

int main() {
    int powerNum1;
    int powerNum2;

    int gcdNum1;
    int gcdNum2;

    cout << "Please input 2 integers: ";
    cin >> powerNum1 >> powerNum2;

    cout << "\nPower: " << power(powerNum1, powerNum2);

    cout << "\n\nPlease input 2 integers for gcd. The first number is larger: ";
    cin >> gcdNum1 >> gcdNum2;

    if (gcdNum1 > gcdNum2)
        cout << "\ngcd: " << gcd(gcdNum1, gcdNum2);
    else {
        cout << "\ngcd: " << gcd(gcdNum2, gcdNum1);
    }
    return 0;
}

int power(int base, int exponent){
    if (exponent <= 1){
        return base;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int gcd(int x, int y){
    if (y == 0){
        return x;
    }
    else{
        return gcd(y,x%y);
    }
    
}