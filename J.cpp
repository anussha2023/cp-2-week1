#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
 
    int A[1000]; 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    int minVal = A[0];
    int freq = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] < minVal) {
            minVal = A[i];
            freq = 1;
        } else if (A[i] == minVal) {
            freq++; 
        }
    }
    if (freq % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
 
    return 0;
}
