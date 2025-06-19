#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <random>

using namespace std;

/**
 * Generate a random point within the specified range.
 * 
 * @param min The minimum value for both x and y coordinates.
 * @param max The maximum value for both x and y coordinates.
 * @return A pair of integers representing the random point (x, y).
 */
std::pair<int, int> generateRandomPoint(int min, int max) {
    static std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr))); // Initialize random number generator with current time
    std::uniform_int_distribution<int> dist(min, max);

    int x= dist(rng);
    int y = dist(rng);

    return std::make_pair(x, y);
}


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