/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 1/28/2022
Date Last Modified: 1/28/2022
Assignment: Write a program to get a five-digit number from a user and print
the integer on one line with 3 spaces in between each number.
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {

    int usrInt(00000);

    cout << "Please input a five digit integer: ";
    cin >> usrInt;
    int fifthNum(usrInt%10);
    int forthNum(((usrInt%100)-fifthNum)/10);
    int thirdNum(((usrInt%1000)-forthNum)/100);
    int secondNum(((usrInt%10000)-thirdNum)/1000);
    int firstNum(((usrInt%100000)-secondNum)/10000);

    cout << firstNum << "   " << secondNum << "   " << thirdNum << "   " << forthNum << "   " << fifthNum << endl;

    return 0;
}