/*
 * problem : Multiples 
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;

int main() {

    int A = 0, B = 0;

    cin >> A >> B;

    if((A % B == 0) || (B % A == 0)) {
        cout << "Multiples\n";
    } 
    else {
        cout << "No Multiples\n";
    }

    return 0;
}
