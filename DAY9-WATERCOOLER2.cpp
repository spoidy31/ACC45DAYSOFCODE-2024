#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        if (X >= Y) {
            cout << 0 << endl;
        } else {
            cout << (Y - 1) / X << endl;
        }
    }

    return 0;
}