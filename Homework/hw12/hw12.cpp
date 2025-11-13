/*
       Name: Ethan Malabago
 Assignment: hw12
   Due Date: 11/20/2025
Description: 
       File: hw12.cpp
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
void fill_array(Point a[]);
double area_check(const Point a[]);
double distance_calc(Point p_1, Point p_2);

struct Point
{
    double x, y;
};

int main()
{
    Point points[SIZE];

    fill_array(points);

    cout << fixed << setprecision(12) << endl;
    cout << "smallest area: " << area_check(points) << endl;
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

void fill_array(Point points[])
{
    for (int i = 0; i < SIZE; i++)
    {
        points[i].x = random(seed);
        points[i].y = random(seed);
    }
}

double area_check(const Point points[])
{
    double area = 50;
    double new_area, s, a, b, c;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            for (int k = j + 1; k < SIZE; k++)
            {
                a = distance_calc(points[i], points[j]);
                b = distance_calc(points[j], points[k]);
                c = distance_calc(points[i], points[k]);
                s = (a + b + c) / 2;
                new_area = sqrt(s * (s - a) * (s - b) * (s - c));

                if (new_area < area)
                    area = new_area;
            }
        }
    }

    return area;
}

double distance_calc(Point p_1, Point p_2)
{
    return sqrt( pow((p_2.x - p_1.x), 2.0) + pow((p_2.y - p_1.y), 2.0) );
}

/*
Sample Output:


*/