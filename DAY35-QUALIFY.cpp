#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, A, B;
        cin >> X >> A >> B; // Input required score X, easy problems A, and hard problems B
        
        int total_score = A * 1 + B * 2; // Calculate total score
        
        // Check if Chef qualifies
        if (total_score >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}
