#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the number of Tuesdays Dracula can dine on his favorite meal in N days
int countTuesdays(int N) {
    return (N + 5) / 7;
}

int main() {
    int T;
    cin >> T;
    
    vector<int> results;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        results.push_back(countTuesdays(N));
    }
    
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
