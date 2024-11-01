#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<string> results;

    for (int i = 0; i < T; i++) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        
        // Check if the target score is achievable
        if (C >= A && D >= B) {
            results.push_back("POSSIBLE");
        } else {
            results.push_back("IMPOSSIBLE");
        }
    }

    // Output all results
    for (const string &result : results) {
        cout << result << endl;
    }

    return 0;
}
