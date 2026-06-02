/*
 * problem : Two Numbers  
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;

int round(double a) {

    if (a >= 0) {
        return (int)(a + 0.5);
    } else {
        return (int)(a - 0.5);
    }
}


int ceil(double a) {

    int num = a;

    if (a > num) {
        num = a + 1;
    }
    return num;
}


int floor(double a) {

    int num = a;

    if (a < num) {
        num = a - 1;
    }
    return num;
}


int main() {

    double frst = 0, secnd = 0, output = 0;

    cin >> frst >> secnd;

    output = frst / secnd;

    cout << "floor " << frst << " / " << secnd << " = " << floor(output) << '\n';
    cout << "ceil "  << frst << " / " << secnd << " = " <<  ceil(output) << '\n';
    cout << "round " << frst << " / " << secnd << " = " << round(output) << '\n';

    return 0;
}


/*

int round(double a) {

    int num = a, last_digit = (int)(a * 10) % 10;

    if (last_digit > 4) {
        num = a + 1;
    }

    return num;
}


int ceil(double a) {

    int num = a, last_digit = (int)(a * 10) % 10;

    if (last_digit > 0) {
        num = a + 1;
    }

    return num;
}


int floor(double a) {

    int num = a, last_digit = (int)(a * 10) % 10;

    if (last_digit > 0) {
        num = a;
    }

    return num;
}
*/
