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
    
    do
    {
        bounceHeight = h * r;
        

        totalDistance += h;
    }   while (h > 0.0);
    

    return 0;
}

/*
Sample code:


*/