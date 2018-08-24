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
    ll d1,d2,m1,m2,y1,y2,s=0;
    cin>>d2>>m2>>y2>>d1>>m1>>y1;
    
    if((d2>d1)&&(m1==m2)&&(y1==y2))
    {
        s+=(d2-d1)*15;
    } 
    else if(m2>m1&&(y1==y2))
    {
        s+=(m2-m1)*500;
    }  
    else if(y2>y1)
    {
        s=10000;
    }
    cout<<s;
    return 0;
}
