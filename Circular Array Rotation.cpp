#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb  push_back
#define mp  make_pair
#define ff  first
#define ss  second
using namespace std ;

int main()
{
    ll n,q,k,b;
    cin>>n>>k>>q;
    vector < ll > v1,v(n);
    for ( ll i = 0 ; i < n ; i++)
    {
        cin>>b;
        v1.pb(b);
    }
    for(ll i = 0 ; i < n ; i++)
    {
        b=(i+k)%n;
        v[b]=v1[i];
    }
    while(q--)
    {
        cin>>b;
        cout<<v[b]<<endl;
    }
    return 0;
}
