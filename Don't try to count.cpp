#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        for (int j = 0; j < 6; ++j) {
            if (x.find(s) != string::npos) {
                cout << j << endl;
                break;
            }
            x += x;
            if (j == 5) {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
