#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ;i++)
        cin>>arr[i];
        int ans = 0 , cnt = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
           if(arr[i] == 0)
           {
            cnt++ ;
            ans = max(ans,cnt);
           }
           else
           cnt = 0  ;
        }
     cout<<ans<<endl;
    }
    return 0 ;
}