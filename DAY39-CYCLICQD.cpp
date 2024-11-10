#include <iostream>
using namespace std;

bool isCyclic(int A, int B, int C, int D) {
    return (A + C == 180 && B + D == 180);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if (isCyclic(A, B, C, D)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
