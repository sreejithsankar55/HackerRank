/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define     ll     long long
#define     ld     long double
#define     pb     push_back
#define     ff     first
#define     ss     second
#define     mp     make_pair
#define     mod     1000000007
#define     pi     3.141592653589793

using namespace std;

int main()
{
    ll n,b,maxi=0;
    cin>>n;
    map < ll, ll >ma;
    for ( ll i = 0 ; i < n ; i++)
    {
        cin>>b;
        ma[b]++;
        if(ma[b]>maxi)
            maxi=ma[b];
    }

    cout<<n-maxi;

    return 0;

}
