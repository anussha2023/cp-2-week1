#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int minVal = A[0];
    int pos = 1; 
    for (int i = 1; i < N; i++) {
        if (A[i] < minVal) {
            minVal = A[i];
            pos = i + 1; 
        }
    }
 
    cout << minVal << " " << pos << endl;
 
    return 0;
}
