#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    /*
    1. Ask the user how many random points to generate.
    2. Use a loop to generate (x, y) values between 0 and 1. 
    3. Count how may fall inside the circle 
    4. Estimate and print Pi 

    */
   long long totalPoints;

   cout << "Monte Carlo Pi Estimator" << endl;
   cout << "Enter the number of random points to generate: ";
   cin >> totalPoints;

   // Just for confirmation
    cout << "Generating " << totalPoints << " random points..." << endl;


   return 0;
}