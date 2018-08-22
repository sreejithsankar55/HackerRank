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
    string s;
    ll sum=0,q,b;
    cin>>s;
    cin>>q;
    vector < ll > v;
    v.pb(s[0]-96);
    sum=s[0]-96;
    for(ll i = 1 ; i < s.size() ; i++ )
    {
         if(s[i]==s[i-1])
            {
                sum+=(s[i]-96);
                v.pb(sum);
            }
        else
            {
                sum=0;
                sum+=(s[i]-96);
                v.pb(sum);
            }
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        cin>>b;
        if(binary_search(v.begin(),v.end(),b))
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
    
    return 0;
}
