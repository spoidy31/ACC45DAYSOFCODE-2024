#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;
    
    while (T--) {
        int P, Q;
        cin >> P >> Q;
        
        int total_points = P + Q;
        int serve_block = total_points / 2;
        
        // Determine whose serve it is
        if (serve_block % 2 == 0) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    
    return 0;
}
