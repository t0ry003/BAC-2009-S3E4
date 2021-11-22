#include <iostream>

using namespace std;

int sum(int x) {
    int s = 0;
    for (int d = 1; d <= x; d++)
        if (x % d == 0)
            s += d;
    return s;
}

int main() {
    int n, a[26], nr = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        // este prim daca se imparte doar la 1 si la a[i] conform functiei sum() trebuie sa returneze a[i] + 1
        if (sum(a[i]) == a[i] + 1)
            nr++;

    cout << nr;
}
