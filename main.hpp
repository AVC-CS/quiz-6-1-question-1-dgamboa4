#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num)l i++)
    if (num) % i == 0 return false;
    return true;
}

void getTwoValues (int &begin, int &end) {
    do {
        cin >> begin >> endl;
    } while (begin >= endl);
}

int getNextPrime(int begin) {
    while (!isPrime(++begin);)
    return begin;
}