#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to precompute prime numbers up to MAX_N
void sieve(vector<bool>& is_prime, int MAX_N) {
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers
    for (int i = 2; i <= sqrt(MAX_N); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    int MAX_N = 100000;
    vector<bool> is_prime(MAX_N + 1, true);
    sieve(is_prime, MAX_N);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (is_prime[N]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
