/*
       Name: Ethan Malabago
 Assignment: hw8
   Due Date: 11/03/2025
Description: 100 pts in unit square, outputs max distance
             between two points and outputs points
       File: hw8.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int SIZE = 100;

unsigned int seed = 7u;

double random(unsigned int &seed);

int main()
{
    double x[SIZE], y[SIZE];
    double x_diff, y_diff, dist, best_dist;
    int point1, point2;

    for (int i = 0; i < SIZE; i++)
    {
        x[i] = random(seed);
        y[i] = random(seed);
    }

    best_dist = 0.0;
    for (int i_1 = 0; i_1 < SIZE; i_1++)
    {
        for (int i_2 = i_1 + 1; i_2 < SIZE; i_2++)
        {
            x_diff = x[i_2] - x[i_1];
            y_diff = y[i_2] - y[i_1];

            dist = sqrt(x_diff * x_diff + y_diff * y_diff);

            if (dist > best_dist)
            {
                best_dist = dist;
                point1 = i_1;
                point2 = i_2;
            }
        }
    }

    cout << fixed << setprecision(8) << endl;
    cout << "Max Distance = " << best_dist << endl;
    cout << endl;
    cout << "Point " << point1 << " = (" << x[point1] << ", " << y[point1] << ")" << endl;
    cout << "Point " << point2 << " = (" << x[point2] << ", " << y[point2] << ")" << endl;
    cout << endl;

    return 0;
}

double random(unsigned int &seed)
{
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245; 
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}

/*
Sample output:

ethan@Ethans-MacBook-Pro hw8 % ./hw8             

Max Distance = 1.32340417

Point 32 = (0.99306962, 0.93021244)
Point 82 = (0.00136783, 0.05389848)

ethan@Ethans-MacBook-Pro hw8 % 
*/