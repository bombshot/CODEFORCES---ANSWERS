//headerfile//////////////
#include <bits/stdc++.h>
//define///////////////////
#define S(x) scanf("%d",&x)
#define P(x) printf("%d\n",x)
#define szo(x) ((int)sizeof(x))
#define szs(x) ((int)(x).size())
#define S2(x,y) scanf("%d%d",&x,&y)
#define loop(i,a,b) for(int i = a; i < b; i++)
#define revloop(i,a,n) for (int i=n-1;i>=a;i--)
#define pi 3.14159265358979323846264338327950288419716939937510582097494459230781640
//////typedef//////////
typedef long long int ll;
typedef unsigned long long int ull;
const ll mod=1000000007;
const int INF = 1000000000;
using namespace std;
//////functions////////
ull pow2(ull s) {if(s!=0 && (s & (s-1)))return 0;else return 1;}
ull powany(ll a,ll b) {ull res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ull prime(ull n) {if (n<=1)return 0;if(n<=3)return 1;if(n%2==0||n%3==0)return 0;for(ull i=5;i*i<=n;i+=6)if(n%(i)==0||n%(i+2)==0)return 0;return 1;}
//head//////////////////
int ar[10000][10000];
int ae[2];
int kadane(int ar[],int n,int mo)
{
int sum=0;
int maxi=0;
int k=0;
for (int i = 0; i < n; ++i)
{
	if (sum<0)
	{
		sum=0;
		k=i;
	}
	sum+=ar[i];
	if(maxi<sum)
	{
	    maxi=sum;
	    if(maxi>mo)
	    {ae[0]=k;
	    ae[1]=i;
	    }

	}
}
//cout<<maxi<<" "<<ae[0]<<" "<<ae[1]<<endl;
return maxi;
}
int main(){
ios_base::sync_with_stdio(0);
int n,m;
cin>>n>>m;
for (int i = 0; i < n; ++i)
{
	for(int j=0;j<m;j++)
	{
       	cin>>ar[i][j];
	}
}
int moxi=0;
int strow=0;
int endrow=0;
int arr[10000];
for (int i = 0; i <n; ++i)
{
	for(int j=0;j<m;j++)
	{
		arr[j]=0;
	}
	for(int k=i;k<n;k++)
	{
    for(int j=0;j<m;j++)
	{
		arr[j]+=ar[k][j];
	}
	int y=kadane(arr,m,moxi);
	if (y>moxi)
	{
		moxi=y;
		strow=i;
		endrow=k;
	}
	}
}
cout<<moxi<<endl<<strow<<" "<<endrow<<endl<<ae[0]<<" "<<ae[1]<<endl;
return 0;
}




/*

positive as well negative no allowed 

4 5
2 1 -3 -4 5
0 6 3 4 1
2 -2 -1 4 -5
-3 3 1 0 3


18
1 3
1 3

*/