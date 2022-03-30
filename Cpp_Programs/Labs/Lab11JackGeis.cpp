/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/30/2022
Date Last Modified: 3/30/2022
Assignment: 
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <String>
#include <algorithm>

using namespace std;

int main() {
    bool inIntegers;
    int num(0);
    int location(0);
    int item;
    vector<int> integers(0);
    for (unsigned int i(0); i < 20; i++) {
        cout << "Input a number between 1 - 100: ";
        cin >> num;
        sort(integers.begin(), integers.end());
        if (num >= 1 && num <= 100) {
            inIntegers = binary_search(integers.begin(), integers.end(), num);
            if (inIntegers == false) {
                integers.push_back(num);
                cout << "\n" << num << " added to vector location " << i << endl;
            }
            if (inIntegers == true) {
                cout << "\nNumber was already in the vector.\n";
            }
        }
        else{
            cout << "\n Must be between 1 and 100 inclusive. \n";
        }
    }
    sort(integers.begin(), integers.end());
    for (unsigned int i(0); i < integers.size(); i++) {
        item = integers[i];
        cout << "item at index " << i << ": " << item << endl;
        location++;
    }


    return 0;
}