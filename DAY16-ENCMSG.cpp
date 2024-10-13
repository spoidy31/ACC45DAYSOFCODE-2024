#include <iostream>
#include <string>
using namespace std;

string encodeMessage(const string& S) {
    int N = S.length();
    string encoded = S;

    // Step 1: Swap characters in pairs
    for (int i = 0; i < N - 1; i += 2) {
        swap(encoded[i], encoded[i + 1]);
    }

    // Step 2: Replace each character with its opposite
    for (int i = 0; i < N; ++i) {
        encoded[i] = 'z' - (encoded[i] - 'a');
    }

    return encoded;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        cout << encodeMessage(S) << endl;
    }

    return 0;
}
