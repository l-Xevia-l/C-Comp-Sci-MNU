/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/4/2022
Date Last Modified: 3/4/2022
Assignment: 
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <cmath>

using namespace std;

int minimum(int num1, int num2, int num3);

int num1, num2, num3;

int main() {
    cout << "Input 3 integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The smallest number is: " << minimum(num1, num2, num3);


    return 0;
}

int minimum(int num1, int num2, int num3){
    int min;
    if (num2 < num1){
        min = num2;
    }
    if (num3 < num2){
        min = num3;
    }
    return min;
}