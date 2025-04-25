#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++)
    if (num % i == 0) return false;
    return true;
}

void getTwoValues (int &begin, int &end) {
    do {
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin) {
    while (!isPrime(++begin));
    return begin;
}

int getPrevPrime(int end) {
    while (!isPrime(--end));
    return end;
}

int main() {
    int begin, end;
    getTwoValues(begin, end);
    cout << "next prime after " << begin << " is " << getNextPrime(begin) << endl;
    cout << "previous prime before " << end << " is " << getPrevPrime(end) << endl;
}