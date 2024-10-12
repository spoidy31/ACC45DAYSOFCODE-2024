#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;
        
        int capacity_per_bag = K * M;
        int num_bags = (N + capacity_per_bag - 1) / capacity_per_bag; // Equivalent to ceil(N / capacity_per_bag)
        
        cout << num_bags << endl;
    }

    return 0;
}

