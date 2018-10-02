#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll f=1;
        ll size=s.size();
        vector < ll > v1,v2;
        for(ll i = 1 ; i < size ; i++)
            v1.pb(abs(s[i]-s[i-1]));
        for(ll i = size-1 ; i > 0 ; i--)
            v2.pb(abs(s[i]-s[i-1]));
        
       (v1 == v2)?  cout << "Funny\n" : cout << "Not Funny\n";    
    }
     
    return 0;
}
