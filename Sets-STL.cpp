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
    set < ll > s;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x==1)
            s.insert(y);
        else if(x==2)
            s.erase(y);
        else
        {
            if(s.find(y)!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }  
    }
     
    return 0;
}
