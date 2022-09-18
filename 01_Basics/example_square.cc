#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

int main()
{
    // Variables //
    double lengh1;


    using namespace std;

    cout << "Please write the a lengh of the square: ";
    cin >> lengh1;


    cout << "calculation square meter: lengh 1 * lengh 2" << endl;
    cout << "the square meters are: " << lengh1 * 2 << endl;

    cout << "calculation perimeter: lengh 1 * 4" << endl;
    cout << "the perimeter is: " << lengh1 * 4 << endl;

    return 0;
}
