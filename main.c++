/*
Danielle Delgado Sosnowska
C++ Library Functions: Math
12/3/24
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // First problem
    cout << "TJ's thermometer is guaranteed to say a temperature no more than 1.4°F from the actual temperature. If the thermometer reads 83°F, write and solve an equation to find the minimum and maximum temperatures it could be." << endl;
    int temp = 83;
    int off = 1.4;

    int min = temp-abs(off);
    int max = temp+abs(off);
    
    cout << "The lowest it could be is " << min << endl;
    cout << "The highest it could be is " << max << endl;

    // Second Problem
    cout << "\nWhat is the ceiling of 19.3?" << endl;
    int rounded = ceil(19.3);

    cout << "The ceiling of 19.3 is " << rounded << endl;

    // Third Problem
    cout << "\nJenna wants to buy wood. The cost now is $5 for one ounce. Each year, the cost doubles (x2). How much will one ounce cost in 4 years?" << endl;
    int wood = 5;
    int in4years = pow(wood, 4);

    cout << "One ounce of wood will cost " << in4years << " in 4 years.";
}
