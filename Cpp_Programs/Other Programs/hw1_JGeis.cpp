/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 1/28/2022
Date Last Modified: 1/28/2022
Assignment: Write a program that prints the numbers 1-4 three times using one
statement with one stream insertion operator, one statement with 4 insertion 
operators, and one with 4 individual statements.
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {

    cout << "1 2 3 4\n";

    cout << "1 " << "2 " << "3 " << "4\n";

    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";

    return 0;
}