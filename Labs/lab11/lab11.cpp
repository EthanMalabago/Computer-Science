/*
       Name: Ethan Malabago
 Assignment: lab11
   Due Date: 12/8/2025
Description: generates 10 random char-number pairs,
             sorts them by character and number in descending order
       File: lab11.cpp
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>

using namespace std;

const int SIZE = 10;
const int MIN = 5;
const int MAX = 10;
const char START = 'a';
const char FINISH = 'z';
unsigned int seed = (unsigned int) clock();

double random(unsigned int &seed);
char random_char(char start, char finish);
int random_int(int start, int finish);

struct Pair
{
    char ch;
    int n;
};

void fill_vector(vector<Pair>& vec);
void print_vector(const vector<Pair>& vec);
bool compare_char(const Pair& a, const Pair& b);
bool compare_num(const Pair& a, const Pair& b);

int main()
{
    vector<Pair> vec;

    fill_vector(vec);

    cout << endl << "Unsorted original vector:" << endl;
    cout << endl << "ch       n" << endl << endl;
    print_vector(vec);

    sort(vec.begin(), vec.end(), compare_char);
    cout << endl << "Sorted by character (descending):" << endl;
    cout << endl << "ch       n" << endl << endl;
    print_vector(vec);

    sort(vec.begin(), vec.end(), compare_num);
    cout << endl << "Sorted by number (descending):" << endl;
    cout << endl << "ch       n" << endl << endl;
    print_vector(vec);

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

char random_char(char start, char finish)
{
    return char (int (START + (FINISH - START + 1) * random(seed)));
}

int random_int(int start, int finish)
{
    return int (MIN + (MAX - MIN + 1) * random(seed));
}

void fill_vector(vector<Pair>& vec)
{
    for (int i = 0; i < SIZE; i++)
    {
        Pair p;
        p.ch = random_char('a', 'z');
        p.n = random_int(5, 10);
        vec.push_back(p);
    }
}

void print_vector(const vector<Pair>& vec)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << vec[i].ch << setw(9) << vec[i].n << endl;
    }
}

bool compare_char(const Pair& a, const Pair& b)
{
    return a.ch > b.ch;
}

bool compare_num(const Pair& a, const Pair& b)
{
    return a.n  > b.n;
}

/*
Sample Output:

ethan@Ethans-MacBook-Pro lab11 % ./lab11

Unsorted original vector:

ch       n

i        6
t        9
j        6
d        7
c       10
l       10
e        6
u        9
v        5
m        6

Sorted by character (descending):

ch       n

v        5
u        9
t        9
m        6
l       10
j        6
i        6
e        6
d        7
c       10

Sorted by number (descending):

ch       n

l       10
c       10
u        9
t        9
d        7
m        6
j        6
i        6
e        6
v        5

ethan@Ethans-MacBook-Pro lab11 %
*/
