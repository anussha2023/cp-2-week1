#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[100][100]; // N ≤ 100
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int sumPrimary = 0, sumSecondary = 0;

    for (int i = 0; i < N; i++) {
        sumPrimary += A[i][i];       
        sumSecondary += A[i][N - 1 - i]; 
    }

    int diff = abs(sumPrimary - sumSecondary);
    cout << diff << endl;

    return 0;
}
