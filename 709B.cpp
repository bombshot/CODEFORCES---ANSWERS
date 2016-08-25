#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int inf = 1000000000;
vector<ll>v;
ll ar[100008];
//ull prime(ull n) {if (n<=1)return 0;if(n<=3)return 1;if(n%2==0||n%3==0)return 0;for(ull i=5;i*i<=n;i+=6)if(n%(i)==0||n%(i+2)==0)return 0;return 1;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n,k,a,o=0;
	cin>>n>>k;
	for (int i = 0; i <n; ++i)
	{
		cin>>a;
		v.push_back(a);
		ar[i]=o+a;
		o=ar[i];
	}
	sort(v.begin(),v.end());
	ll high=upper_bound(v.begin(),v.end(),k)-v.begin();
	if (n==1)
	{
		cout<<0;
		return 0;
	}
	//cout<<high;
	if(n==2)
    {
        if(k>=v[1])
        {
            cout<<v[1]-k;
        }
        else if(k<=v[0])
        {
            cout<<v[0]-k;
        }
        else{
            cout<<min(v[1]-k,k-v[0]);
        }
        return 0;
    }
	if (high==0)
	{
		cout<<v[n-2]-k;
	}
	else if(high==n)
	{
		cout<<k-v[1];
	}
	else if(high==n-1)
    {
        cout<<min(k-v[0],(v[n-1]-k)*2+(k-v[1]));
    }
    else if(high==1)
    {
        cout<<min(v[n-1]-k,(k-v[0])*2+(v[n-2]-k));
    }
	else
	{
		cout<<min(((k-v[0])*2)-k+v[n-2],min((v[n-1]-k)*2+k-v[1],min((k-v[0])+(-k+v[n-2])*2,(k-v[1])*2+v[n-1]-k)));
	}
	return 0;
}

