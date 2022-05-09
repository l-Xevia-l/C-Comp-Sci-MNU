// Program2 
#include <iostream> 
#include <random> // contains C++11 random number generation features
#include <ctime>
#include <iomanip> 
using namespace std;

const int RACE_END = 70;

// prototypes
void moveTortoise(int* const);
void moveHare(int* const);
void printCurrentPositions(const int* const, const int* const);

default_random_engine engine{static_cast<unsigned int>(time(0))};
uniform_int_distribution<int> randomInt{1, 10};

int main() {
   int tortoise{1};
   int hare{1};
   int timer{0};   

   cout << "ON YOUR MARK, GET SET\nBANG               !!!!"
      << "\nAND THEY'RE OFF    !!!!\n";
   
   // loop through the events
   while (tortoise != RACE_END && hare != RACE_END) {
      moveTortoise(&tortoise);
      moveHare(&hare);
      printCurrentPositions(&tortoise, &hare);
      ++timer;
   } 

   if (tortoise >= hare) {
      cout << "\nTORTOISE WINS!!! YAY!!!\n";
   }
   else {
      cout << "Hare wins. Yuch.\n";
   }

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;
}  

// progress for the tortoise
void moveTortoise(int*  const turtlePtr) {
   int i = randomInt(engine);
   // Fast plod 50%
   if ((1 <= i) && (i <= 5)) {
      *turtlePtr += 3;
   }
   // Slow plod 30%
   if ((6 <= i) && (i <= 8)){
      *turtlePtr += 1;
   }
   // Slip 20%
   if ((9 <= i) && (i <= 10)) {
      if (*turtlePtr < 6) {
         *turtlePtr = 1;
      }
      else {
         *turtlePtr -= 6;
      }
   }
   if (*turtlePtr > 70) {
      *turtlePtr = 70;
   }
}  

// progress for the hare
void moveHare(int*  const rabbitPtr) {
   int i = randomInt(engine);
   // Sleep 20%
   if ((1 <= i) && (i <= 2)) {
      *rabbitPtr += 0;
   }
   // Big hop 20%
   if ((3 <= i) && (i <= 4)) {
      *rabbitPtr += 9;
   }
   // Big slip 10%
   if (i == 5) {
      if (*rabbitPtr < 12) {
         *rabbitPtr = 1;
      }
      else {
         *rabbitPtr -= 12;
      }
   }
   // Small Hop 30%
   if ((6 <= i) && (i <= 8)) {
      *rabbitPtr += 1;
   }
   // Small slip 20%
   if ((9 <= i) && (i <= 10)) {
      if (*rabbitPtr < 2) {
         *rabbitPtr = 1;
      }
      else {
         *rabbitPtr -= 2;
      }
   }
   if (*rabbitPtr > 70) {
      *rabbitPtr = 70;
   }
}

// display new position
void printCurrentPositions(const int*  const snapperPtr, const int* const harePtr) {
   // Turtle behind hare
   if (*snapperPtr < *harePtr) {
      cout << setw(*snapperPtr) << "T" 
      << setw(*harePtr - *snapperPtr) << "H" << endl;
   }
   // Hare behind turtle
   if (*snapperPtr > *harePtr) {
      cout << setw(*harePtr) << "H"
      << setw(*snapperPtr - *harePtr) << "T" << endl;
   }
   // One catches up and bites the other
   if (*snapperPtr == *harePtr) {
      cout << setw(*snapperPtr) << "OUCH!!" << endl;
   }
} 
