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
void string_permut(char str[],int count[],char result[],int level,int n)
{
   if (level==n)
   {
   	 cout<<result<<endl;
   	 return;
   }
   for (int i = 0; i<n; ++i)
   {
   	 if (count[i]==0)
   	 {
   	 	continue;
   	 }
   	 result[level]=str[i];
   	 count[i]--;
     string_permut(str,count,result,level+1,n);
     count[i]++;
   }
}
int main(){
ios_base::sync_with_stdio(0);
char ar[10000];
int level=0;
cin>>ar;
int k=0;
map<char,int> process;
for (int i = 0;ar[i]; ++i)
{
	process[ar[i]]++;
	k++;
}
int l=k;
char str[10000];
char result[10000];
int count[10000];
k=0;
for (map<char,int>::iterator it=process.begin();it!=process.end();++it)
{
   str[k]=it->first;
   count[k]=it->second;
   k++;
}
string_permut(str,count,result,level,l);
return 0;
}


/*


dynamic initilization of char and int array using map.size();

AASD




AADS
AASD
ADAS
ADSA
ASAD
ASDA
DAAS
DASA
DSAA
SAAD
SADA
SDAA

*/