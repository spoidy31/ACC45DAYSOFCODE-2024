#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, K;  // N: Number of minions, K: Transmogrifier value
        cin >> N >> K;

        vector<int> characteristics(N);  // Vector to store initial characteristic values
        for (int i = 0; i < N; i++) {
            cin >> characteristics[i];
        }

        int wolverineCount = 0;  // Counter for Wolverine-like minions

        // Check each minion's transformed characteristic
        for (int i = 0; i < N; i++) {
            int newValue = characteristics[i] + K;
            if (newValue % 7 == 0) {
                wolverineCount++;  // Increment if divisible by 7
            }
        }

        cout << wolverineCount << endl;  // Output result for the current test case
    }

    return 0;
}
