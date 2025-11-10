/*
       Name: Ethan Malabago
 Assignment: hw11
   Due Date: 11/17/2025
Description: count point pairs >1 distance using Point struct, fill_array and greater_distance.
       File: hw11.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

const int SIZE = 100;

unsigned int seed = (unsigned int) clock();

double random(unsigned int &seed);

struct Point
{
    double x, y;
};

void fill_array(Point a[]);
double distance_calc(Point p_1, Point p_2);
int greater_distance(const Point a[]);

int main()
{
    Point a[SIZE];

    fill_array(a);

    cout << endl;
    cout << "# of pairs of points with distance >1: " << greater_distance(a) << endl;
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

void fill_array(Point a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        a[i].x = random(seed);
        a[i].y = random(seed);
    }
}

double distance_calc(Point p_1, Point p_2)
{
    return sqrt( pow((p_2.x - p_1.x), 2.0) + pow((p_2.y - p_1.y), 2.0) );
}

int greater_distance(const Point a[])
{
    double dist = 0.0;
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
            dist = distance_calc(a[i], a[j]);

        if (dist > 1)
            count++;
    }

    return count;
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro hw11 % ./hw11

# of pairs of points with distance >1: 1

ethan@Ethans-MacBook-Pro hw11 % 
*/