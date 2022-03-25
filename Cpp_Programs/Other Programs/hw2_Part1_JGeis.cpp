/*
|-----------------------------------------------------------------------------|
Author: Jack Geis
Date Created: 2/25/2022
Date Last Modified: 2/25/2022
Assignment: 
|-----------------------------------------------------------------------------|
*/



#include <iostream>

using namespace std;

int main() {
    int x(3);
    int y(4);
    int a(5);
    int b(5);
    int g(4);
    int i(3);
    int j(9);
// A)
    cout << "-----------A-----------" << endl;
    cout << boolalpha << "!(x < 5) && !(y >= 7) is logically equal to !((x < 5) || (y >= 7))" << "\n\n" << 
    "!(x < 5) && !(y >= 7) is " << (!(x < 5) && !(y >= 7)) << "\n\n;And\n\n" << "!((x < 5) || (y >= 7)) is " <<
    !((x < 5) || (y >= 7)) << "\n\n";
// B)
    cout << "-----------B-----------" << endl;
    cout << boolalpha <<  "\n!(a == b) || !(g != 5) is logically equal to !((a == b) && (g != 5))" << "\n\n" <<
    "!(a == b) || !(g != 5) is " << (!(a == b) || !(g != 5)) << "\n\n;And\n\n" << "!((a == b) && (g != 5)) is " <<
    !((a == b) && (g != 5)) << "\n\n";
    cout << "-----------C-----------" << endl;
    cout << boolalpha << "\n!((x <= 8) && (y > 4)) is logically equal to (!(x <= 8) || !(y > 4))" << "\n\n" <<
    "!((x <= 8) && (y > 4)) is " << !((x <= 8) && (y > 4)) << "\n\n;And\n\n" << "(!(x <= 8) || !(y > 4)) is " <<
    (!(x <= 8) || !(y > 4)) << "\n\n";
// D)
    cout << "-----------D-----------" << endl;
    cout << boolalpha << "\n!((i > 4) || (j <= 6)) is logically equal to (!(i > 4 && !(j <= 6))" << "\n\n" <<
    "!((i > 4) || (j <= 6)) is " << !((i > 4) || (j <= 6)) << "\n\n;And\n\n" << "(!(i > 4 && !(j <= 6)) is " <<
    (!(i > 4) && !(j <= 6)) << "\n\n";

    return 0;
}