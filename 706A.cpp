#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	double n,m,q,w,e,sum=100000000000000;
	cin>>n>>m;
	ll a;
	cin>>a;
	for (int i = 0; i < a; ++i)
	{
		cin>>q>>w>>e;
		double t=sqrt((n-q)*(n-q)+(m-w)*(m-w))/e;
		sum=min(sum,t);
	}
	cout<<fixed<<setprecision(20)<<sum;
	return 0;
}
