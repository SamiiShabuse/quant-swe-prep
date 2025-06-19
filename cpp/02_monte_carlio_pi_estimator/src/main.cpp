#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/**
 * Prompt the user for the number of random points to generate.
 * 
 * 
 * @return The number of random points to generate.
 */
long long getTotalPoints(void) {
    long long totalPoints;
    cout << "Enter the number of random points to generate: ";
    cin >> totalPoints;
    cout << "Generating " << totalPoints << " random points..." << endl;

    return totalPoints;
}


int main() {
    long long totalPoints = getTotalPoints();

    return 0;
}