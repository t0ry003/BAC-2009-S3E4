#include <iostream>

using namespace std;

int f(int a) {
    int d = 2, min = 0;
    while (a != 1) {
        int p = 0;
        while (a % d == 0) {
            a /= d;
            p++;
        }
        if (p > 0)
            if (min == 0)
                min = d;
            else if (d < min)
                min = d;
        d++;
    }
    return min;
}

int main() {
    cout << f(45);
}
