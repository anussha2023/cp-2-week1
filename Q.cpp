#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int A[102];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int count = 0;
        for (int i = 0; i < N; i++) {
            int maxLength = 1; 
            for (int j = i; j < N; j++) {
                if (j == i || A[j] >= A[j - 1]) {
                    count++;
                } else {
                    break; 
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
