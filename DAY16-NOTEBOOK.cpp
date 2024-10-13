#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;
    
    while (T--) {
        int N;  // Weight of the pulp in kgs
        cin >> N;
        
        // Calculate number of notebooks
        int notebooks = N * 10;
        cout << notebooks << endl;
    }

    return 0;
}
