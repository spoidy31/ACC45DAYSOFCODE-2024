#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of problems in recent contests

        int start38Count = 0, ltime108Count = 0;
        for (int i = 0; i < N; i++) {
            string contestCode;
            cin >> contestCode;

            if (contestCode == "START38") {
                start38Count++;
            } else if (contestCode == "LTIME108") {
                ltime108Count++;
            }
        }

        // Output the counts for START38 and LTIME108
        cout << start38Count << " " << ltime108Count << endl;
    }

    return 0;
}
