#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int d_dsa, d_toc, d_dm;
        int s_dsa, s_toc, s_dm;
        
        cin >> d_dsa >> d_toc >> d_dm;
        
        cin >> s_dsa >> s_toc >> s_dm;
        
        
        int total_dragon = d_dsa + d_toc + d_dm;
        int total_sloth = s_dsa + s_toc + s_dm;
        if (total_dragon > total_sloth) {
            cout << "Dragon" << endl;
        } else if (total_sloth > total_dragon) {
            cout << "Sloth" << endl;
        } else {
            if (d_dsa > s_dsa) {
                cout << "Dragon" << endl;
            } else if (s_dsa > d_dsa) {
                cout << "Sloth" << endl;
            } else {
                if (d_toc > s_toc) {
                    cout << "Dragon" << endl;
                } else if (s_toc > d_toc) {
                    cout << "Sloth" << endl;
                } else {
                    cout << "Tie" << endl;
                }
            }
        }
    }
    return 0;
}
