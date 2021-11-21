#include <iostream>

using namespace std;

int cif(int a, int b) {
    int nr_ap = 0;
    while (a != 0) {
        int cif = a % 10;
        if (cif == b)
            nr_ap++;
        a /= 10;
    }
    return nr_ap;
}

int main() {
    cout << cif(125854, 5);
}
