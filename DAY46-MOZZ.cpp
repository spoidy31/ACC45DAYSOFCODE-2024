#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;
        
        // Calculate total sticks eaten
        int extraSticks = R / 30;
        int totalSticks = X + extraSticks;
        
        // Calculate the number of plates required
        int plates = (totalSticks + Y - 1) / Y;  // Ceiling division: (totalSticks + Y - 1) / Y
        
        cout << plates << endl;
    }
    return 0;
}
