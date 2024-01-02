#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n , x ;
        cin>>n>>x;
        int arr[n];
        for(int i = 0 ; i < n ;i++)
        cin>>arr[i];
        int ans = 0 , pre = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            ans = max(ans,arr[i]-pre);
            pre = arr[i];
        }
        ans = max(ans,2*(x-pre));
        cout<<ans<<endl;
    }
    return 0 ;
}