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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,c=0,b;
        cin>>n>>k;
        for ( ll i = 0 ; i < n ; i++ )
        {
            cin>>b;
            if(b<=0)
                c++;
        }
        if(c<k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }    
    return 0;
}
