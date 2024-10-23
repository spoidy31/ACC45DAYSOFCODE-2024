#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    vector<int> results; // To store the results for each test case
    
    while (T--) {
        int X, Y; // X: Points needed, Y: Matches remaining
        cin >> X >> Y;
        
        // Points RCB would get if they tie all Y matches
        int points_from_ties = Y;
        
        if (points_from_ties >= X) {
            // If the points from ties are enough to qualify, no wins are needed
            results.push_back(0);
        } else {
            // Otherwise, we calculate how many wins are required
            int points_needed = X - points_from_ties;
            results.push_back(points_needed);
        }
    }
    
    // Output the results for all test cases
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}

