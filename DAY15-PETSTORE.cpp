#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        unordered_map<int, int> animal_count;
        for (int i = 0; i < N; ++i) {
            int animal_type;
            cin >> animal_type;
            animal_count[animal_type]++;
        }

        bool possible = true;
        for (const auto& pair : animal_count) {
            if (pair.second % 2 != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
