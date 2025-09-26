#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    long long A[200];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    int minDivisions = 1e9; 
 
    for (int i = 0; i < N; i++) {
        int count = 0;
        long long x = A[i];
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        if (count < minDivisions) {
            minDivisions = count;
        }
    }
 
    cout << minDivisions << endl;
 
    return 0;
}
