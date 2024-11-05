#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    while (T--) {
        int A, B;
        cin >> A >> B;  // Read the first two numbers

        // Calculate the required third number
        int C = 21 - (A + B);

        // Check if C is between 1 and 10
        if (C >= 1 && C <= 10) {
            cout << C << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
