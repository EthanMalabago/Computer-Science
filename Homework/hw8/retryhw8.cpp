#include <ios>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

const int ARRAYSIZE = 100;

unsigned int seed = (unsigned int) clock();

struct Point
{
    double x, y;
};

double random(unsigned int &seed)
{
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245;
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}

void fillArray(Point a[])
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        a[i].x = random(seed);
        a[i].y = random(seed);
    }
}

double distanceCalc(double a, double b)
{
    return b - a;
}

int main()
{
    Point point[ARRAYSIZE];

    fillArray(point);

    double bestDist, dist = 0.0;
    int bestPoint1, bestPoint2 = 0;
    Point p1, p2;
    for (int i = 0; i < ARRAYSIZE; i++)
        for (int j = i + 1; j < ARRAYSIZE; j++)
        {
            dist = sqrt(distanceCalc(point[i].x, point[j].x) * distanceCalc(point[i].x, point[j].x) + distanceCalc(point[i].y, point[j].y) * distanceCalc(point[i].y, point[j].y));

            if (dist > bestDist)
            {
                bestDist = dist;
                bestPoint1 = i;
                bestPoint2 = j;
                p1.x = point[i].x;
                p1.y = point[i].y;
                p2.x = point[j].x;
                p2.y = point[j].y;
            }
        }

    std::cout << std::fixed << std::setprecision(8) << std::endl;
    std::cout << "bestDist = " << bestDist;
    std::cout << std::endl;

    std::cout << "Point 1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << "Point 2: (" << p2.x << ", " << p2.y << ")" << std::endl;

    std::cout << std::endl;

    return 0;
}
