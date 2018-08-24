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
    ll f=0,c=0;
    string s;
    cin>>s;
    map < char , ll > ma;
    if(s.size()%2!=0)
        f=1;
    for(ll i = 0 ; i < s.size() ; i++)
        ma[s[i]]++;
    map < char , ll >::iterator it;
    for ( it=ma.begin() ; it!=ma.end(); it++)
    {
        if((it->ss)%2!=0)
            c++;
    }
    if(f==1)
    {
        if(c==1)
            cout<<"YES";
        else
            cout<<"NO";
    }    
    else
    {
        if(c!=0)
            cout<<"NO";
        else
            cout<<"YES";
    }
        
    return 0;
}
