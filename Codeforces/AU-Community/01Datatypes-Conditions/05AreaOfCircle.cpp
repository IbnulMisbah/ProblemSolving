/*
 * problem : Area Of Circle 
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double Pi = 3.141592653;
    double radius = 0;

    cin >> radius;

    cout << fixed << setprecision(9);
    cout << Pi * radius * radius << '\n';

    return 0;
}
