#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;
 
    string S;
    cin >> S;
    if (S.length() != A + B + 1) {
        cout << "No" << endl;
        return 0;
    }
 
    bool valid = true;
 
    for (int i = 0; i < S.length(); i++) {
        if (i == A) { 
            if (S[i] != '-') {
                valid = false;
                break;
            }
        } else {
            if (S[i] < '0' || S[i] > '9') {
                valid = false;
                break;
            }
        }
    }
 
    if (valid)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
 
    return 0;
}
