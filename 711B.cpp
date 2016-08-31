#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int inf = 1000000000;
ll ar[504][504];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
	ll n,p=0,q=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		ll s=0;
		for(int j=1;j<=n;j++){
			cin>>ar[i][j];
			if (ar[i][j]==0)
			{
				p=i;
				q=j;
				//cout<<p<<q<<endl;
			}
			s+=ar[i][j];
		}
		ar[i][0]=s;
	}
	if (n==1)
	{
		cout<<1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		ll s=0;
		for(int j=1;j<=n;j++){
			s+=ar[j][i];
		}
		ar[0][i]=s;
		//cout<<ar[0][i]<<endl;
	}
	//cout<<p;
	ll d1=0,d2=0;
	for(int i=1;i<=n;i++){
		d1+=ar[i][i];
		d2+=ar[i][n-i+1];
	}
	vector<ll>v;
		for(int i=1;i<=n;i++){
			if (i!=p)
			{
				v.push_back(ar[i][0]);
			}
		}
		for(int i=1;i<=n;i++){
			if (i!=q)
			{
				v.push_back(ar[0][i]);
			}
		}
			for(int i=1;i<v.size();i++){
			if (v[i]!=v[i-1])
			{
				cout<<-1;
				return 0;
			}
		}
		if (ar[p][0]!=ar[0][q])
		{
			cout<<-1;
			return 0;
		}
	if (p==q && p==n-q+1)
	{//cout<<"O";
		if (d1!=d2)
		{
			cout<<-1;
			return 0;
		}
		if (v[0]<=d1)
		{
			cout<<-1;
			return 0;
		}
		if (v[0]-d1+ar[p][0]!=v[0] || v[0]-d1+ar[0][q]!=v[0])
		{
			cout<<-1;
			return 0;
		}
		cout<<v[0]-d1;
		return 0;
	}
	else if (p==n-q+1)
	{
		ll u=d1-d2;
		if (u<=0)
		{
			cout<<-1;
			return 0;
		}
		if (u+ar[p][0]!=v[0] || u+ar[0][q]!=v[0] || u+d2!=v[0])
		{
			cout<<-1;
			return 0;
		}
		cout<<u;
		return 0;
	}
	else if(p==q)
	{
		ll u=d2-d1;
		if (u<=0)
		{
			cout<<-1;
			return 0;
		}
		if (u+ar[p][0]!=v[0] || u+ar[0][q]!=v[0] || u+d1!=v[0])
		{
			cout<<-1;
			return 0;
		}
		cout<<u;
		return 0;
	}
	else
	{
		if (d1!=d2 || d1!=v[0])
		{
			cout<<-1;
			return 0;
		}
		if (v[0]<=ar[p][0])
		{
			cout<<-1;
		}
		else
		{
		    //cout<<p;
		    //cout<<v[0]<<ar[1][0];
			cout<<v[0]-ar[p][0];
		}
	}
	return 0 ;
}