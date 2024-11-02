#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        // Calculate the number of ways to select captain and vice-captain
        int result = N * (N - 1);
        
        // Output the result for the current test case
        cout << result << endl;
    }
    
    return 0;
}
