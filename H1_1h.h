#ifndef H1_1h
#define H1_1h

#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;



// Tulostaa summan
inline void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
}

// Tulostaa osamäärän
inline void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei saa olla nolla!" << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << static_cast<float>(a) / b << endl;
    }
}

// Palauttaa summan
inline int retSum(int a, int b) {
    return a + b;
}

// Palauttaa osamäärän tai heittää poikkeuksen
inline float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

#endif
