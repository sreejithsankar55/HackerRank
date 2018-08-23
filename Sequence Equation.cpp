#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n+1];
    vector < pair<int,int > > v;
    for(int i = 1 ; i <= n ; i++)
        cin>>p[i];
    for(int i = 1 ; i <= n ; i++)
        v.push_back(make_pair(p[p[i]],i));
    sort(v.begin(),v.end());
    for(int i = 0 ; i < n ; i++)
        cout<<v[i].second<<endl;

    return 0;
}
