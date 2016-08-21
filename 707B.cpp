#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int inf = 1000000000;
vector<pair<ll,ll> >v[100006];
ll ar[100007];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n,m,k,mini=10000000000,a,s,d;
	cin>>n>>m>>k;
	for (int i = 0; i <m; ++i)
	{
		cin>>a>>s>>d;
		v[a].push_back({s,d});
		v[s].push_back({a,d});
	}
	for (int i = 0; i <k; ++i)
	{
		cin>>a;
		ar[a]=1;
	}
	for (ll i = 1; i <=n; ++i)
	{
		if(ar[i]==1)
		{
			for(vector<pair<ll,ll> >::iterator it=v[i].begin();it!=v[i].end();it++)
			{
				if(ar[it->first]==0)
				{
					mini=min(mini,it->second);
				}
			}
		}

	}
	if(mini==10000000000)
        cout<<-1;
    else
	cout<<mini;
	return 0;
}