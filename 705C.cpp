#include<bits/stdc++.h>
typedef long long ll;
ll ar[700000][3],err[1000007];
using namespace std;
ll k=0;
vector<ll>v;
vector<ll>v2;
queue<ll>q[300009];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n,m,a,s,sum=0;
	cin>>n>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>a>>s;
		if (a==1)
		{
			v.push_back(s);
			q[s].push(v.size()-1);
			ar[s][0]++;
			ar[s][2]++;
			sum++;
			cout<<sum<<endl;
		}
		else if (a==2)
		{
			sum-=ar[s][2];
			ar[s][1]=ar[s][2];
			ar[s][2]=0;
			while(q[s].size())
            {
                q[s].pop();
            }
			cout<<sum<<endl;
		}
		else
		{
		    ll p=s-k;
		    if(p<=0)
            {
                cout<<sum<<endl;
                continue;
            }
			while(p--)
			{//cout<<v[k]<<" ";
				if ((int)q[v[k]].size()>0 && q[v[k]].front()==k)
				{//cout<<"P";
				    ll u=v[k];
                    q[v[k]].pop();
					sum--;
					ar[v[k]][2]--;
					ar[v[k]][1]++;
					k++;
				}
				else
				{//cout<<v[k];
					k++;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}