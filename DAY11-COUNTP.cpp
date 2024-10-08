#include <iostream>
#include <vector>
using namespace std;

string can_partition(const vector<int>& A) {
    int sum_A = 0;
    bool has_odd = false;
    for (int num : A) {
        sum_A += num;
        if (num % 2 != 0) {
            has_odd = true;
        }
    }
    if (sum_A % 2 == 0 && has_odd) {
        return "YES";
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << can_partition(A) << endl;
    }
    return 0;
}
