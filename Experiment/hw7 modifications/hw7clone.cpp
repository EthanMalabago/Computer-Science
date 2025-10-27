#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Linear Congruential Generator (LCG) for pseudo-random numbers
// Formula: seed = (a * seed + c) % m
// We'll use values similar to glibc's rand()
double random(unsigned int &seed) {
    seed = (1103515245 * seed + 12345) % 2147483648;
    return static_cast<double>(seed) / 2147483648.0;
}

// Function to calculate travel time
double travel_time(double x, double y, double z) {
    double t1 = sqrt(8 * 8 + x * x) / 3.0;  // Rowing (3 mph)
    double t2 = y / 5.0;                   // Running on beach (5 mph)
    double t3 = sqrt(6 * 6 + z * z) / 4.0; // Running inland (4 mph)
    return t1 + t2 + t3;
}

int main() {
    unsigned int seed = 123456789; // You can change this to test different sequences

    const int trials = 1000000; // Number of random trials
    double best_time = numeric_limits<double>::max();
    double best_x = 0, best_y = 0, best_z = 0;

    for (int i = 0; i < trials; ++i) {
        // Generate 3 uncorrelated random fractions
        double f1 = random(seed);
        double f2 = random(seed);
        double f3 = random(seed);

        // Convert to x, y, z that sum to 15
        double sum = f1 + f2 + f3;
        double x = 15 * f1 / sum;
        double y = 15 * f2 / sum;
        double z = 15 * f3 / sum;

        // Compute travel time
        double t = travel_time(x, y, z);

        // Check if it's the best
        if (t < best_time) {
            best_time = t;
            best_x = x;
            best_y = y;
            best_z = z;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(6);

    cout << "Best result found after " << trials << " trials:\n";
    cout << "x = " << best_x << " miles\n";
    cout << "y = " << best_y << " miles\n";
    cout << "z = " << best_z << " miles\n";
    cout << "Total travel time = " << best_time << " hours\n";

    return 0;
}
