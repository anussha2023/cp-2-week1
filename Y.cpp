#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    long long A[100000], prefix[100000];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        prefix[i] = A[i] + (i > 0 ? prefix[i - 1] : 0);
    }

    for (int q = 0; q < Q; q++) {
        int L, R;
        cin >> L >> R;

        long long sum = prefix[R - 1] - (L > 1 ? prefix[L - 2] : 0);
        cout << sum << endl;
    }

    return 0;
}
