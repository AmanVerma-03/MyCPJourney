#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t ;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int actions = 0  ;
        for (char c : s) {
            if (c == '.')
                actions++;
        }
        for (int i = 0; i <= n - 3; ++i) {
            if (s.substr(i, 3) == "...")
               {
                   actions=2 ;
                   break ;
               }
               else
               continue ;
        }
        cout << actions << endl;
    }
    return 0;
}
