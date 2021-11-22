#include <iostream>

using namespace std;

int sub(int v[], int n, int a) {
    int nr;
    for (int i = 1; i <= n; i++)
        if (v[i] < a)
            nr++;
    return nr;
}

int main() {
    int n, v[101], a;
    for(int i=1; i<=n; i++)
        cin >> v[i];
}
