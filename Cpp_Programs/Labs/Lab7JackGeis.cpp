/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 2/23/2022
Date Last Modified: 2/23/2022
Assignment: Write a program to output the song "Twelve Days of Christmas" using
a for loop and two switch statements. The for loop goes around the two switch 
statements and runs from 1 - 12, the first switch adds in the number for the 
day, i.e.: On the --> first <-- day... The second switch adds the next verse in
order every iteration of the loop so that "A partridge in a pear tree." always
comes last, and the new verse always comes right after the first verse.
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {

    for (unsigned int verseNum(1); verseNum < 13; verseNum++) { // for loop that runs from 1 to 12
        cout << "\n\nOn the "; // first part of the verse
        switch(verseNum) { // places the "first", "second", etc into the first verse
            case 1:
                cout << "first";
                break;
            case 2:
                cout << "second";
                break;
            case 3:
                cout << "third";
                break;
            case 4:
                cout << "fourth";
                break;
            case 5:
                cout << "fifth";
                break;
            case 6: 
                cout << "sixth";
                break;
            case 7:
                cout << "seventh";
                break;
            case 8:
                cout << "eighth";
                break;
            case 9:
                cout << "ninth";
                break;
            case 10: 
                cout << "tenth";
                break;                
            case 11:
                cout << "eleventh";
                break;
            case 12:
                cout << "twelve";
                break;                
        }
        cout << " day of Christmas, \nMy true love sent me:\n"; // third part of the first verse, after the number of the day.

        switch(verseNum) { // adds the next verse into the song every iteration of the loop, starting with case 1.
            case 12:
                cout << "\tTwelve drummers drumming,\n";
            case 11:
                cout << "\tEleven pipers piping,\n";
            case 10:
                cout << "\tTen lords a-leaping,\n";
            case 9:
                cout << "\tNine ladies dancing,\n";
            case 8:
                cout << "\tEight maids a-milking,\n";
            case 7:
                cout << "\tSeven swans a-swimming,\n";
            case 6:
                cout << "\tSix geese a-laying,\n";
            case 5:
                cout << "\tFive golden rings,\n";
            case 4:
                cout << "\tFour calling birds,\n";
            case 3:
                cout << "\tThree French hens,\n";
            case 2:
                cout << "\tTwo turtle doves, and\n";            
            case 1:
                cout << "\tA partridge in a pear tree.\n";
        }
    }

    return 0;
}