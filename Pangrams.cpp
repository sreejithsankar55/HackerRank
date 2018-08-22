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
    ll c=0;
    string s;
    getline(cin,s);
    map < char , ll > ma;
    for ( ll i = 0 ; i < s.size() ; i++ )
    {
        s[i]=tolower(s[i]);
        ma[s[i]]++;
    }
    for ( ll i = 97 ; i <=122 ; i++ )
    {
        if(ma[i]==0)
            {
                c=1;
                break;
            }
    }
    if(c==1)
        cout<<"not pangram";
    else
        cout<<"pangram";
    return 0;
}
