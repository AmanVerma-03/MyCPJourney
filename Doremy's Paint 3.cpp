#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;  
        }
        if (mpp.size() >= 3)
         {
            cout << "NO" << endl;
        }
       else if(mpp.size() == 1)
        cout<<"YES"<<endl;
         else {
            if (abs(mpp.begin()->second - mpp.rbegin()->second) <= 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
