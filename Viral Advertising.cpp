#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ff  first
#define ss  second
using namespace std ;

int main()
{
    ll n,s=5,l=2,c=2;
    cin>>n;
    for(ll i = 2 ; i <=n ;i++)
    {
        s=l*3;
        l=s/2;
        c=c+l;
    }
    cout<<c;
    
    return 0;
}
