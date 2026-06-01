/*
 * problem :  
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;

int main() {

    long long num = 0, sum = 0;

    cin >> num;

    sum = (num * (num + 1)) / 2;

    cout << sum << '\n';

    return 0;
}
