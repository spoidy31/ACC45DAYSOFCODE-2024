#include <iostream>
using namespace std;

int main() {
    int T;
    cout << " ";
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < Y) {
            cout << "BIKE" << endl;
        } else if (X > Y) {
            cout << "CAR" << endl;
        } else {
            cout << "SAME" << endl;
        }
    }

    return 0;
}
