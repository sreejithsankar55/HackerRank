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
    string s,t;
    cin>>s;
    ll c=0;
    for(ll i = 0 ; i < 33 ; i++ )
    {
        t+="SOS";
    }
    for(ll i = 0 ; i < s.size() ; i++ )
    {
        if(s[i]!=t[i])
            c++;
    }
    cout<<c;
    return 0;
}
