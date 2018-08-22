//Sreejith
//22/09/2018

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
    ll n,m,b,maxi=0;
    cin>>n>>m;
    for(ll i = 0 ; i < n ; i++ )
    {
        cin>>b;
        maxi=max(b,maxi);
    }
    maxi=maxi-m;
    if(maxi<0)
        maxi=0;
    cout<<maxi;
    return 0;
}
