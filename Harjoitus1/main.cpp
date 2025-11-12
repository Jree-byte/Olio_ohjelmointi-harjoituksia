#include <iostream>
#include <iomanip>
#include "H1_1h.h"

using namespace std;

int main() {
    int a, b;

    cout << "Anna kokonaisluku a: ";
    cin >> a;
    cout << "Anna kokonaisluku b: ";
    cin >> b;

    cout << "\n Ensimmaiset funktiot" << endl;
    calcSum(a, b);
    calcDiv(a, b);

    cout << "\n Toiset funktiot =" << endl;
    int summa = retSum(a, b);
    cout << a << " + " << b << " = " << summa << endl;

    try {
        float osamaara = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << osamaara << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
