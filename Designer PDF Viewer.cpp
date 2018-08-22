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
    ll g,maxi=0;
    map < ll, ll > ma;
    string s;
    for ( ll i=97 ; i <= 122 ; i++)
       cin>>ma[i]; 
    cin>>s;
    for(ll i = 0 ; i < s.size() ; i++)
        maxi=max(ma[s[i]],maxi);
    
    g=s.size()*maxi;
    cout<<g;
    
    return 0;
}
