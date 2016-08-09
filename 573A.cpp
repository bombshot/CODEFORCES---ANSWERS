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
ull prime(ull n) {if (n<=1)return 0;if(n<=3)return 1;if(n%2==0||n%3==0)return 0;for(ull i=5;i*i<=n;i+=6)if(n%(i)==0||n%(i+2)==0)return 0;return 1;}//head//////////////////
ull ar[2][100005];
int main() {
ios_base::sync_with_stdio(0);
ull n,ar[100002];
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>ar[i];
	while(ar[i]%2==0)
	{
		ar[i]=ar[i]/2;
	}
	while(ar[i]%3==0)
	{
		ar[i]=ar[i]/3;
	}
}
int y=ar[0];
for (int i = 0; i < n; ++i)
{
  if (ar[i]!=y)
  	{
  		cout<<"NO";return  0;
  	}	
}
cout<<"YES";
 return 0;
}