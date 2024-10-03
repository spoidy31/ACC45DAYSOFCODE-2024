#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        int points_A_then_B = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int points_B_then_A = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        
        cout << max(points_A_then_B, points_B_then_A) << endl;
    }
    return 0;
}
