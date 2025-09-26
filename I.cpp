#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int N;
        cin >> N;
 
        long long A[100];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
 
        long long minPrev = A[0] - 1; 
        long long result = 1e18; 
        for (int j = 1; j < N; j++) { 
            long long current = (A[j] + (j + 1)) + minPrev;
            if (current < result) {
                result = current;
            }
            if (A[j] - (j + 1) < minPrev) {
                minPrev = A[j] - (j + 1);
            }
        }
 
        cout << result << endl;
    }
 
    return 0;
}
