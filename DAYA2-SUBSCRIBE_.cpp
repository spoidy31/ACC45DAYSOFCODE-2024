#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int subscriptions = (N + 5) / 6; // Calculate the number of subscriptions needed
        int total_cost = subscriptions * X; // Calculate the total cost
        cout << total_cost << endl;
    }
    return 0;
}

