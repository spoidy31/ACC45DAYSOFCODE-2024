#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N, X;
        cin >> N >> X; // Number of people and number of tiles
        if (X % N == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
