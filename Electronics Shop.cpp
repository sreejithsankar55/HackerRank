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
    ll b,n,m,k,f=0,mini=INT_MAX,sum=0;
    cin>>b>>n>>m;
    vector < ll > v(n),v1(m);
    for(ll i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    for(ll i = 0 ; i < m ; i++)
    {
        cin>>v1[i];
    }
    for(ll i = 0 ; i < n ; i++)
    {
        for(ll j = 0 ; j < m ; j++)
        {
            if((v[i]+v1[j])<=b)
            {    
                f=1;
                if((b-(v[i]+v1[j]))<=mini&&((b-(v[i]+v1[j]))>=0))
                {
                    sum=v[i]+v1[j];
                    mini=b-sum;
                }  
            }
        }        
    }
    if(f==0)
        cout<<-1;
    else
        cout<<sum;

    return 0;
}
