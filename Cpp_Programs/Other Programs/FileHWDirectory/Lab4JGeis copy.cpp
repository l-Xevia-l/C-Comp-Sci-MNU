// example of reading from input file and copying to output file
// Name: Teresa Hale-Lespier
// Date: 1-29-19
//
//
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
   
   string inputFileName, inputString, outputFileName;
   int totalLines{0}, totalCharacters{0};

   cout << "Please type in the name of your input file: ";
   cin >> inputFileName;   
   cout << "Please type in the name of your output file: ";
   cin >> outputFileName;   

   // try to open file
   ifstream input{inputFileName};

   // exit if file does not exist
   if (!input) {
      cout << "Could not open " << inputFileName << endl;
      exit(1);
   } 
   
   // try to open file
   ofstream output{outputFileName};

   // exit if file does not exist
   if (!output) {
      cout << "Could not open " << outputFileName << endl;
      exit(1);
   } 

   while (getline(input,inputString)) {
	totalLines = totalLines + 1;
	totalCharacters = totalCharacters + inputString.size();
	output << inputString << endl;
   } 

   cout << "Your copy is done. \nThe file contained " << totalLines << " lines of data with " << totalCharacters << " characters of data." << endl;
} 

