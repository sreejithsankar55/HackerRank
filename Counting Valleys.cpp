#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,count=0,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for ( ll i = 0 ; i < n ; i++)
    {
        if(s[i]=='U')
        {
            sum+=1;
            if(sum==0)
                count++;
        }
        else
            sum-=1;
    }
    cout<<count;
    return 0;
}
