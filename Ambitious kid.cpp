#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    int arr[t] ;
    for(int i = 0 ;  i < t ; i++)
    {
        cin>>arr[i] ;
     }
     int ans = 0 ;
     sort(arr,arr+t);
     int min1= INT_MAX ;
     for(int i = 0 ; i < t ; i++ )
     {
         ans = abs(arr[i]-0);
         min1 = min(min1,ans);
     }
     cout<<min1<<endl;

}