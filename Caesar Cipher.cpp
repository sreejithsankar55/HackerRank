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
	ll n,r,k;
	cin>>n;
	string s,t;
	cin>>s;
	cin>>k;
	for(ll i = 0 ; i < n ; i++)
	{
		r=(int)(s[i]);
		switch(s[i])
		{
			case 'a' ... 'z' : r-=96;
							   r=(r+k)%26;
							   if(r==0)
								r=26;
							   r+=96;
							   s[i]=r;
							   break;
			case 'A' ... 'Z' : r-=64;
							   r=(r+k)%26;
							   if(r==0)
								r=26;
							   r+=64;
							   s[i]=r;
							   break;				
							   
		}
		t+=s[i];
	}
    cout<<t;
    return 0;
}
