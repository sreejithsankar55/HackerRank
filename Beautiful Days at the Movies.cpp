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
ll rev(int i)
{
    ll ri,rev=0;
    while(i!=0)
    {
        ri=i%10;
        rev=(rev*10)+ri;
        i/=10;
    }
    return rev;    
}

int main()
{
    ll st,ed,k,r,g=0;
    cin>>st>>ed>>k;
    for ( ll i = st ; i <= ed  ; i++ )
    {
        r=rev(i);
        if(abs(r-i)%k==0)
            g++;
    }
    cout<<g;
    
    return 0;
}
