/*
 * problem :  
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;

int main() {

    long long first = 0, second = 0;

    cin >> first >> second;

    int summation = (first % 10) + (second % 10);

    cout << summation << endl;

    return 0;
}
