#include <iostream>
#include <iomanip>
#include <cmath>

double fib(int n)
{
    double s5 = sqrt(5);
    return round( (pow((1 + s5) / 2.0, n) - pow((1 - s5) / 2.0, n) ) / s5 );
}

int main()
{
    int n;

    std::cout << std::fixed << std::setprecision(0);

    while (n <= 0)
    {
        std::cout << "Fibonacci: ";
        std::cin >> n;
        std::cout << std::endl;
    }

    std::cout << fib(n) << std::endl;
    std::cout << std::endl;

    return 0;
}
