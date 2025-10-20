/*
       Name: Ethan Malabago
 Assignment: hw6
   Due Date: 10/16/2025
Description: bouncing ball total distance traveled
       File: hw6.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double h, r, totalDistance, bounceHeight;

    do
    {
        cout << endl;
        cout << "Enter initial height: ";
        cin >> h;
    }   while (h < 0.0);

    do
    {
        cout << endl;
        cout << "Enter bounciness ratio: ";
        cin >> r;
    }   while (r < 0 || r > 1);
    
    totalDistance = 0.0;
    bounceHeight = 0.0;

    do
    {
        totalDistance += h;

        bounceHeight = h * r;

        if (bounceHeight > 0.0)
            totalDistance += bounceHeight;

        h = bounceHeight;
    }   while (h > 0.0);

    cout << endl;
    cout << fixed << setprecision(3);
    cout << "Total distance traveled: " << totalDistance << endl;
    cout << endl;

    return 0;
}

/*
Sample code:

ethan@Ethans-MacBook-Pro hw6 % ./hw6 

Enter initial height: 4

Enter bounciness ratio: 0.3

Total distance traveled: 7.429

ethan@Ethans-MacBook-Pro hw6 % 
*/
