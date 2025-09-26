#include <iostream>
using namespace std;
void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int N;
    cin >> N;

    int A[1000], B[1000];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    bubbleSort(A, N);
    bubbleSort(B, N);
    bool isPermutation = true;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            isPermutation = false;
            break;
        }
    }

    if (isPermutation)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
