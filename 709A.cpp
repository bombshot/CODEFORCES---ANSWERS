#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int inf = 1000000000;
//ull prime(ull n) {if (n<=1)return 0;if(n<=3)return 1;if(n%2==0||n%3==0)return 0;for(ull i=5;i*i<=n;i+=6)if(n%(i)==0||n%(i+2)==0)return 0;return 1;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n,m,k,sum=0,c=0,a;
	cin>>n>>m>>k;
	for (int i = 0; i <n; ++i)
	{
		cin>>a;
		if (a<=m)
		{
			sum+=a;
			if (sum>k)
			{
				sum=0;
				c++;
			}
		}
	}
	cout<<c;
	return 0;
}