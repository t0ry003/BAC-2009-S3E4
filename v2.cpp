#include <iostream>

using namespace std;

int f(int a) {
    int d = 2, suma = 0;
    while(a != 1){
        int p = 0;
        while(a%d == 0){
            a /= d;
            p++;
        }
        if(p > 0)
            suma += p;
        d++;
    }
    return suma;
}

int main() {
    cout << f(90);
}
