/*
 * problem : Minimum and Maximum 
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;


int minimum(int a, int b) {
    
    if (a > b) return b;
    else return a;
}

int maximum(int a, int b) {
    
    if (a < b) return b;
    else return a;
}

int main() {
    
    int frst = 0, scnd = 0, thrd = 0;

    cin >> frst >> scnd >> thrd;
    
    cout << minimum(frst, minimum(scnd, thrd)) << ' ';
    cout << maximum(frst, maximum(scnd, thrd)) << '\n';

    return 0;
}
