/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 2/2/2022
Date Last Modified: 2/4/2022
Assignment: 
|-----------------------------------------------------------------------------|
*/


#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string iFile("lab4inputFile.txt");
    string oFile("lab4outputFile.txt");
    string iStr;
    int iStrToInt;
    int lines(0);
    int characters(0);

    ifstream input(iFile);

    ofstream output(oFile);

   while (getline(input,iStr)) {
	   lines = lines + 1;
	   characters = characters + iStr.size();
       iStrToInt = stoi(iStr);
       if (iStrToInt >= 1 &&  iStrToInt <= 100) {
           output << iStr << endl;
       }
   } 

   cout << "File copied successfully!\n" << lines << " lines and " << characters << " characters were copied." << endl;

    return 0;
}