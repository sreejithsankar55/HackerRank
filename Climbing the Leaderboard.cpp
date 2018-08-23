//Sreejith
//23/09/2018

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
    stack < ll >st;
    ll n,m,b,p,rnk;
    cin>>n;
    cin>>b;
    p=b;
    st.push(b);
    for(ll i = 1 ; i < n ; i++ )
    {
        cin>>b;
        if(p!=b)
            st.push(b);
        p=b;
    }
    rnk=st.size();
    cin>>m;
    for(ll i = 0 ; i < m ; i++ )
    {
        cin>>b;
        if(rnk!=0)
        while(st.top()<=b)// st.top() should never be empty and checked
        {
            st.pop();
            rnk--;
            if(rnk==0)
                break;
        }
        cout<<rnk+1<<endl;
    }
    
    return 0;
}
