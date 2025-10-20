/*
       Name: Ethan Malabago
 Assignment: hw7
   Due Date: 10/27/2025
Description: fastest route finder to hotel
       File: hw7.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int BOATSPEED = 3;
const int SHORESPEED = 5;
const int INLANDSPEED = 4;
const int WATERDISTANCE = 8;
const int LANDDISTANCE = 6;
const int ITERATIONS = 1000000;

unsigned int seed = 7u;

double random(unsigned int &seed);

int main()
{
    double x, y, z, t, f_1, f_2, f_3;
    double old_t = 100000;

    cout << fixed << setprecision(10) << endl;

    int c = 0;
    for (int i = 1; i < ITERATIONS; i++)
    {
        f_1 = random(seed);
        f_2 = random(seed);
        f_3 = random(seed);

        x = 15 * (f_1 / (f_1 + f_2 + f_3));
        y = 15 * (f_2 / (f_1 + f_2 + f_3));
        z = 15 * (f_3 / (f_1 + f_2 + f_3));

        t = ( sqrt(WATERDISTANCE * WATERDISTANCE + x * x) / 3
        + ( y / 5 )
        + ( sqrt(LANDDISTANCE * LANDDISTANCE + z * z) / 4 ) );

        if (t < old_t)
        {
            cout << "x = " << setw(12) << x << endl;
            cout << "y = " << setw(12) << y << endl;
            cout << "z = " << setw(12) << z << endl;
            cout << "t = " << setw(12) << t << endl;

            old_t = t;
            cout << endl;
        }
    }

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

ethan@Ethans-MacBook-Pro hw7 % ./hw7                 

x = 5.0418189381
y = 6.8664407090
z = 3.0917403528
t = 6.2127912436

x = 6.0366250783
y = 4.2418022720
z = 4.7215726497
t = 6.0977834615

x = 5.8453602890
y = 2.0514762651
z = 7.1031634459
t = 6.0374866935

x = 6.3142166698
y = 0.5213255800
z = 8.1644577502
t = 6.0344869564

x = 6.2734320668
y = 0.8711624851
z = 7.8554054481
t = 6.0342130478

x = 6.1651738311
y = 0.8868087239
z = 7.9480174450
t = 6.0336336880

x = 6.1152867605
y = 0.9024034682
z = 7.9823097713
t = 6.0334755378

x = 6.1102349526
y = 0.8461121058
z = 8.0436529416
t = 6.0334706430

x = 5.9607102056
y = 1.0217356063
z = 8.0175541881
t = 6.0333512229

x = 6.0115910728
y = 1.0353178707
z = 7.9530910565
t = 6.0333447047

ethan@Ethans-MacBook-Pro hw7 % 
*/