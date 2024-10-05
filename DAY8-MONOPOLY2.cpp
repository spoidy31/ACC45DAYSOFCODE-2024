#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> is_monopoly(vector<vector<int>> &test_cases) {
    vector<string> results;
    for (const auto &case_data : test_cases) {
        int P = case_data[0];
        int Q = case_data[1];
        int R = case_data[2];
        int S = case_data[3];
        
        int max_profit = max({P, Q, R, S});
        int total_profit = P + Q + R + S;
        
        if (max_profit > total_profit - max_profit) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    return results;
}

int main() {
    int T;
    cin >> T;
    vector<vector<int>> test_cases(T, vector<int>(4));
    
    for (int i = 0; i < T; ++i) {
        cin >> test_cases[i][0] >> test_cases[i][1] >> test_cases[i][2] >> test_cases[i][3];
    }
    
    vector<string> results = is_monopoly(test_cases);
    
    for (const auto &result : results) {
        cout << result << endl;
    }
    
    return 0;
}
