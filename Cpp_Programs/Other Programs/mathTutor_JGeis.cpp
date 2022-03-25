/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 3/24/2022
Date Last Modified: 3/25/2022
Assignment: Write a math tutor program to run through 12 randomized problems
on the multiplication table. Ask for the users name and use it in a welcome to
the program. Display in-for-loop score before every iteration of the while loop
and an overall score before the program terminates.
|-----------------------------------------------------------------------------|
*/



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <String>

using namespace std;



int main() {
    // Seed random function with the time the file is executed
    srand(static_cast<unsigned int>(time(0)));

    // Declaration of all variables needed
    string name;
    string loop;
    int num1 = 1 + rand() % 12;
    int num2 = 1 + rand() % 12;
    int userAnswer = 0;
    int totalCorrectInLoop = 0;
    int overallScore;

    // Get a name for the user
    cout << "Please input your name: ";
    cin >> name;
    cout << "Welcome to Jack's math tutor program " << name << "!\n" << endl;
    cout << "Would you like to practice your multiplication tables? y/n: ";
    cin >> loop;
    cout << endl;

    // Loop while the user has not entered the sentinel, -1
    while(loop == "y" || loop == "Y"){
        totalCorrectInLoop = 0;
        // Loop 12 times
        for (unsigned int i(0); i <= 12; i++) {
            // Randomize problem
            num1 = 1 + rand() % 12;
            num2 = 1 + rand() % 12;
            // Display problem and prompt for answer
            cout << num1 << " x " << num2 << endl;
            cout << "Input your answer: ";
            cin >> userAnswer;  

            // Check is userAnswer is correct
            if (userAnswer == num1*num2) {
                // if it is, add one to the total correct counter and inform the user
                cout << "well done " << name << "!" << " You got it right!" << endl;
                totalCorrectInLoop += 1;
            }
            else {
                // If the answer is incorrect, inform the user and tell them the correct answer
                cout << "Your answer was incorrect! The correct answer was " << num1*num2 << endl;
            }
        }
        // Keep tally of total correct answers over the whole while loop.
        overallScore += totalCorrectInLoop;
        
        // How many questions were answered correctly and ask if the user wants the loop to
        // reiterate
        cout << "You correctly answered " << totalCorrectInLoop << " questions!\n\n" << 
            "Would you like to try again? y/n: ";
        cin >> loop;
    }
    // Farewell and display overall correct answers
    cout << "Thanks for using my program! Throughout this session you have gotten " << overallScore
        << " questions right!""\n\n" << "Have a nice day " << name << "!" << endl;

    return 0;
}