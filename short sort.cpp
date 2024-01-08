#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {   string s1 = "abc";
        string s ;
        cin>>s ;
        int cnt = 0 ;
        for(int i = 0 ; i<s1.length(); i++)
        {
            if(s[i]!=s1[i])
            cnt++ ;
        }
        if(cnt<=2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}