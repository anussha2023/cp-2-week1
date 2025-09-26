#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (N == 2) {
        cout << 1 << endl;
        return 0;
    }

    long long a = 0, b = 1, fib;
    for (int i = 3; i <= N; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << fib << endl;
    return 0;
}
