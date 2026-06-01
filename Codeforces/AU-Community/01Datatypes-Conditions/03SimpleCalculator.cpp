/*
 * problem : Simple Calculator 
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;

int main() {

    long long first = 0, second = 0;

    cin >> first >> second;

    cout << first << " + " << second << " = " << first + second << '\n';
    cout << first << " * " << second << " = " << first * second << '\n';
    cout << first << " - " << second << " = " << first - second << '\n';

    return 0;
}
