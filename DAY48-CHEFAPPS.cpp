#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z; // Total storage, memory of two apps, and memory required for the new app

        int availableMemory = S - (X + Y); // Calculate unused memory

        if (availableMemory >= Z) {
            cout << 0 << endl; // No need to delete any apps
        } else if (availableMemory + X >= Z || availableMemory + Y >= Z) {
            cout << 1 << endl; // Delete one app
        } else {
            cout << 2 << endl; // Delete both apps
        }
    }
    return 0;
}
