#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	vector<ll>v;
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n,a;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		v.push_back(a);
	}
	ll m;
	cin>>m;
	sort(v.begin(),v.end());
	for (int i = 0; i <m; ++i)
	{
		cin>>a;
		ll t=upper_bound(v.begin(),v.end(),a)-v.begin();
		cout<<t<<endl;
	}
	return 0;
}
