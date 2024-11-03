#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N; // Number of rounds

    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        cin >> S >> T; // Scores of Player 1 and Player 2 in this round

        // Update cumulative scores
        cumulative_score1 += S;
        cumulative_score2 += T;

        // Calculate current lead and determine the leader
        int lead;
        int current_leader;
        if (cumulative_score1 > cumulative_score2) {
            lead = cumulative_score1 - cumulative_score2;
            current_leader = 1;
        } else {
            lead = cumulative_score2 - cumulative_score1;
            current_leader = 2;
        }

        // Update maximum lead and winner if this lead is the largest so far
        if (lead > max_lead) {
            max_lead = lead;
            winner = current_leader;
        }
    }

    // Output the result
    cout << winner << " " << max_lead << endl;

    return 0;
}
