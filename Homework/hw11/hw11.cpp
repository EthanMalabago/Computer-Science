/*
       Name: Ethan Malabago
 Assignment: hw11
   Due Date: 11/17/2025
Description: generate 100 random points, count pairs
             with distance >1 using Point struct and functions.
       File: hw11.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

const int SIZE = 100;

unsigned int seed = (unsigned int) clock();

struct Point;
double random(unsigned int &seed);
int greater_distance(Point a[]);
double distance_calc(Point p_1, Point p_2);
void fill_array(Point a[]);

struct Point
{
    double x, y;
};

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

int greater_distance(Point a[])
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (distance_calc(a[j], a[i]) > 1)
                count++;
        }
    }

    return count;
}

double distance_calc(Point p_1, Point p_2)
{
    return sqrt( pow((p_2.x - p_1.x), 2.0) + pow((p_2.y - p_1.y), 2.0) );
}

void fill_array(Point a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        a[i].x = random(seed);
        a[i].y = random(seed);
    }
}

/*
Sample Output:

PS C:\Computer-Science\Homework\hw11> ./hw11

# of pairs of points with distance >1: 168

PS C:\Computer-Science\Homework\hw11> 
*/