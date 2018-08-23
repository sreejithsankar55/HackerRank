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
    ll t,st;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m>>st;
    m--;
    st=(m+st)%n;
    if(st==0)
        st=n;
    cout<<st<<endl;
    }
    return 0;
}
