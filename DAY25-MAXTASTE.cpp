#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Calculate the four possible combinations and find the maximum
        int max_tastiness = max({a + c, a + d, b + c, b + d});

        // Output the result for the current test case
        cout << max_tastiness << endl;
    }

    return 0;
}
