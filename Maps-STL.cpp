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
    ll t;
    cin>>t;
    map < string,ll > ma;
    while(t--)
    {
        ll x,z;
        string y;
        cin>>x>>y;
        if(x==1)
        {
            cin>>z;
            ma[y]+=z;
        }
        else if(x==2)
            ma.erase(y);
        else
            cout<<ma[y]<<endl;
    }
     
    return 0;
}
