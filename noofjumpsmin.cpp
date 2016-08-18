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
int ar[10000];
int main(){
ios_base::sync_with_stdio(0);
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>ar[i];
}
int ar1[10000]={0},ar2[10000];
for (int i = 1; i <n; ++i)
{//cout<<"P";
	for(int j=0;j<i;j++)
	{
       if (i-j<=ar[j])
       {//cout<<"J";
       	  if (ar1[i]==0 || ar1[i]>ar1[j]+1)
       	  {//cout<<"G"<<ar1[i]<<endl;
       	  	 ar1[i]=ar1[j]+1;
       	  	 ar2[i]=j;
       	  }
       }
	}
}
cout<<ar1[n-1];
return 0;
}



/*

10
2 3 1 1 2 4 2 0 1 1


4

*/