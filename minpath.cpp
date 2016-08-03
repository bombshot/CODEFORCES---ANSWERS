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
int main(){
ios_base::sync_with_stdio(0);
int n,m;
cin>>n>>m;
for (int i = 0; i < n; ++i)
{
	if (i>=1)
	{
		ar[i][0]=ar[i-1][0];
	}
	for(int j=0;j<m;j++)
	{
	    if(j==0)
        {
            int a;
            cin>>a;
            ar[i][j]+=a;
        }
        else
		cin>>ar[i][j];
		if (i==0 && j>=1)
		{
			ar[i][j]+=ar[i][j-1];
		}
		else if(i>0 && j>=1)
		{
            ar[i][j]=ar[i][j]+min(ar[i-1][j],ar[i][j-1]);
		}
	}
}
cout<<ar[n-1][m-1];

/*
only right and down movements are allowed


3 4
1 3 5 8
4 2 1 7
4 3 2 3


1 4 9 17
5 6 7 14
9 9 9 12

*/
return 0;
}
