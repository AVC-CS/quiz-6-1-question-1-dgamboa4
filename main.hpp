#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void getTwoValues (int &begin, int &end) {
    do {
        cout << "Enter two numbers (begin < end): ";
        cin >> begin >> end;
        if (begin >= end) {
            cout << "Invalid input! 'begin' must be less than 'end'. Try again. " << endl;
        }
        if (begin < 0 || end < 0) {
            cout << "Enter positive numbers. " << endl;
        }
    } while (begin >= end || begin < 0 || end < 0);
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
    cout << "Next prime after " << begin << " is " << getNextPrime(begin) << endl;
    cout << "Previous prime before " << end << " is " << getPrevPrime(end) << endl;
}