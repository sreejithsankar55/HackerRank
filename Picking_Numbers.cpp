/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793

using namespace std;

int main()
{	
		ll b,n,c=0,maxi=0;
		map < ll, ll > m;
		set < ll > s;
		cin>>n;
		for ( ll i = 0 ; i < n ; i++ )
		{
			cin>>b;
			m[b]++;
			s.insert(b);
		}
		set < ll >::iterator it,itt;
		itt=s.begin();
		it=s.begin();
		it++;
		for (; it!=s.end() ; it++ )
		{	
			c=0;
			if((*it-*itt)<=1)
			{
				c+=(m[*itt]+m[*it]);
				if(c>maxi)
				maxi=c;
			}
			itt++;
		}
		for (it=s.begin() ; it!=s.end() ; it++ )
		{
			if(m[*it]>maxi)
			maxi=m[*it];
		}
			
		cout<<maxi;
		
		return 0;
}
