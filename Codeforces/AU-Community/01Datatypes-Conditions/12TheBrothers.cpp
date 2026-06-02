/*
 * problem : The Brothers 
 * writer  : Ibnul Misbah
 * source  : Codeforces
 */

#include <iostream>

using namespace std;

int main() {

    string frst_name_1, scnd_name_1;
    string frst_name_2, scnd_name_2;

    cin >> frst_name_1 >> scnd_name_1;
    cin >> frst_name_2 >> scnd_name_2;

    if (scnd_name_1 == scnd_name_2) {
        cout << "ARE Brothers\n";
    }
    else {
        cout << "NOT\n";
    }

    return 0;
}
