#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    unordered_set<long long> S;
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        S.insert(num);
    }

    for (int i = 0; i < Q; i++) {
        long long X;
        cin >> X;
        if (S.count(X))
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}
