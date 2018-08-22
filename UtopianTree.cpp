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
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll s=0;
        for ( ll i = 0 ; i <= n ; i++)
        {
            if(i%2==0)
                s+=1;
            else
                s*=2;
        }
        cout<<s<<endl;
    }

    return 0;
}
