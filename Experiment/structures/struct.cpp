#include <iostream>
#include <iomanip>
#include <ctime> // required to use "clock()"

using namespace std;

const int SIZE = 20;

unsigned int seed = (unsigned int) clock(); // new seed variable, changes based on time for more randomization

double random(unsigned int &seed);

struct Point // for classes, use a capital first letter
{
    double x, y;
}; // this struct defines an object called "Point" which has two fields (x and y), both taking in double values

int main()
{
    Point a[SIZE]; // creates an array, where each element has two fields (x and y) taking in double values

    for (int i = 0; i < SIZE; i++)
    {
        a[i].x = random(seed); // accesses the x field of the Point object and assigns it a random number [0, 1)
        a[i].y = random(seed); // accesses the y field of the Point object and assigns it a random number [0, 1)
    }

    cout << endl;
    cout << "point x coordinate y coordinate" << endl;
    cout << fixed << setprecision(6);
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << i;
        cout << setw(15) << a[i].x;
        cout << setw(15) << a[i].y << endl;
    }

    cout << endl;

    return 0;
}

double random(unsigned int &seed) // uses larger modulus, multiplier, and increment for more variety
{
    const int MODULUS = 2147483647;
    const int MULTIPLIER = 1103515245; 
    const int INCREMENT = 12345;

    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;

    return double(seed) / MODULUS;
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro structures % ./struct

point x coordinate y coordinate
  0       0.069686       0.670038
  1       0.118024       0.952387
  2       0.162539       0.797132
  3       0.535641       0.815342
  4       0.333877       0.304054
  5       0.444302       0.689081
  6       0.146368       0.471419
  7       0.516295       0.811121
  8       0.281502       0.830837
  9       0.287304       0.027172
 10       0.566781       0.213819
 11       0.618009       0.115374
 12       0.620469       0.180797
 13       0.113956       0.305708
 14       0.955220       0.804850
 15       0.533031       0.775620
 16       0.309316       0.562284
 17       0.074799       0.496367
 18       0.777256       0.060101
 19       0.275168       0.315856

ethan@Ethans-MacBook-Pro structures % 
*/