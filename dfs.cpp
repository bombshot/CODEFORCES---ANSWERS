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


/*

///////////////DFS USING 2D ARRAY////////////////////////////////////




int visited[100000];
int ar[10000][10000]={0};
int n;
int m;
void DFS(int x)
{
   visited[x]=1;
   cout<<x<<" ";
   for (int i = 0; i<n; ++i)
   {
   	  if (ar[i][x]!=0 && visited[i]==0)
   	  {
   	  	 DFS(i);
   	  }
   }
}
int main(){
	ios_base::sync_with_stdio(0);
	cout<<"enter the no of vertices:";
	cin>>n;
	cout<<"enter the no of connections:";
	cin>>m;
int a,s,p;
for (int i = 0; i < m; ++i)
{
	cin>>a>>s>>p;
	ar[a][s]=p;
	ar[s][a]=p;
}
DFS(0);
return 0;
}



*/



///////////////DFS USING LINKED LIST////////////////////////////////////


struct node
{
	node *next;
	int vertex;
};
node *g[10000];
int visited[100000];
int n;
int m;
void list_creater(int a,int s)
{
	node *p=new node;
	p->vertex=s;
	p->next=NULL;
	if (g[a]==NULL)
	{
		g[a]=p;
	}
	else
	{
	  node *q=g[a];
	  while(q->next!=NULL)
	  {
	  	q=q->next;
	  }
	  q->next=p;
	}
}
void read_graph()
{
	cout<<"enter the no of vertices:";
	cin>>n;
		cout<<"enter the no of connections:";
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int a,s,d;
		cin>>a>>s>>d;
        list_creater(a,s);
	}
}
void DFS(int x)
{
  node *p=g[x];
  cout<<x<<" ";
  visited[x]=1;
  while(p!=NULL)
  {
  	if (visited[p->vertex]==0)
  	{
  		DFS(p->vertex);
  	}
  	p=p->next;
  }
}
int main(){
	ios_base::sync_with_stdio(0);
read_graph();
DFS(0);
return 0;
}
