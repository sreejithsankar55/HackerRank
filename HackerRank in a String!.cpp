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
    string s="knarrekcah";
    stack<char> st,stc;
    for(ll i = 0 ; i < 10 ; i++ )
    {
        st.push(s[i]);
    }
    while(t--)
    {
        stc=st;
        string ss;
        cin>>ss;
        for(ll i = 0 ; i < ss.size() ; i++ )
        {
            if(ss[i]==stc.top())
                stc.pop();
        }
        if(stc.empty())
            cout<<"YES";
        else
            cout<<"NO";
        
        cout<<endl;
        
    }
    
    return 0;
}
