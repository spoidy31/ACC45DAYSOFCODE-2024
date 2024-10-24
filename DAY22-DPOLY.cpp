#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read number of test cases
    
    while (T--) {
        int N;
        cin >> N;  // Read the number of terms in the polynomial
        
        vector<int> coefficients(N);
        for (int i = 0; i < N; ++i) {
            cin >> coefficients[i];  // Read the coefficients of the polynomial
        }
        
        // Find the highest index with a non-zero coefficient
        int degree = N - 1;
        while (degree >= 0 && coefficients[degree] == 0) {
            --degree;
        }
        
        // Output the degree of the polynomial
        cout << degree << endl;
    }

    return 0;
}
