#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<string> results;

    while (T--) {
        int N;
        cin >> N;
        string gestures;
        cin >> gestures;

        if (gestures.find('I') != string::npos) {
            results.push_back("INDIAN");
        } else if (gestures.find('Y') != string::npos) {
            results.push_back("NOT INDIAN");
        } else {
            results.push_back("NOT SURE");
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
