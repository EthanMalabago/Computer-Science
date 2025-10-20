// Write a program fragment that keeps adding random values in the range [0, 1) until the sum of random values added is less than or equal to 5. 

#include <iostream>
#include <iomanip>

using namespace std;

unsigned int seed = 7;

double random(unsigned int &seed);

int main()
{
    double sum = 0;

    do
    {
        sum += random(seed);
    }   while (sum <= 5);
    
    return 0;
}

double random(unsigned int &seed)
{

}