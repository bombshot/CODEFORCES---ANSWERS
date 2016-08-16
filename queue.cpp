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




///////////////////////////////QUEUE USING POINTER//////////////////////////////////////



struct node
{
	int data;
	node *next;
};
class queuer
{
    node *top;
    node *rear;
public:
    queuer()
    {
    	top=NULL;
    	rear=NULL;
    }
    void inserter(int data);
    void deleter();
    void printer();
};
void queuer::deleter()
{
  if (rear==NULL)
  {
  	cout<<"underflow....";
  }
  else
  {
  	node *p=top;
  	top=top->next;
  	delete p;
  	cout<<"value has been deleted\n";
  }
}
void queuer::inserter(int data)
{
   if (rear==NULL)
   {
   	rear=new node;
   	rear->data=data;
   	rear->next=NULL;
   	top=rear;
   }
   else
   {
      node *p=new node;
      p->data=data;
      p->next=NULL;
      rear->next=p;
      rear=p;
   }
}
void queuer::printer()
{
	if (rear==NULL)
	{
		cout<<"queue is empty";
	}
	else
	{
		node *p=top;
		while(p!=NULL)
		{
           cout<<p->data<<" ";
           p=p->next;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
queuer st;
lx:;
cout<<"enter your choice:";
cout<<"\n1)insert:\n2)delete:\n3)print:\n4)exit:";
int ch;
cin>>ch;
switch(ch)
{
  case(1):cout<<"enter value:";
  int i;
  cin>>i;
  st.inserter(i);
  break;
  case(2):st.deleter();
  break;
  case(3):st.printer();
  break;
  case(4):return 0;
  default:cout<<"wrong choice\n";
};
cout<<"want to continue:";
char co;
cin>>co;
if (co=='y' || co=='Y')
{
	goto lx;
}
else
{
	exit(0);
}
return 0;
}


*/

////////////////////////////////////QUEUE USING ARRAY////////////////////////////////////



class queuer
{
    int *data;
    int front,rear;
public:
    queuer()
    {
    	data=new int[100000];
    	front=rear=-1;
    }
    int emptty();
    void inserter(int x);
    int deleter();
    void printer();
};
int queuer::emptty()
{
	if (rear==-1 || rear<front)
	{
		return 1;
	}
	return 0;
}
int queuer::deleter()
{
    if(emptty())
    {
        cout<<"queue empty\n";
        return -1;
    }
    else
  return(data[front++]);
}
void queuer::inserter(int x)
{
   if (emptty())
   {
   	 data[0]=x;
   	 front=rear=0;
   }
   else
   {
   	rear+=1;
   	data[rear]=x;
   }
}
void queuer::printer()
{
	if (emptty())
	{
		cout<<"queue is empty\n";
	}
	else
	{
		int u=front;
		if(u<0)
            u=0;
		while(u<=rear)
		{
           cout<<data[u]<<" ";
            u++;
		}
		cout<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
queuer st;
lx:;
cout<<"enter your choice:";
cout<<"\n1)insert:\n2)delete:\n3)print:\n4)exit:";
int ch;
cin>>ch;
switch(ch)
{
  case(1):cout<<"enter value:";
  int i;
  cin>>i;
  st.inserter(i);
  break;
  case(2):int v;
  v=st.deleter();
  if(v!=-1)
  cout<<"deleted value is:"<<v<<endl;
  break;
  case(3):st.printer();
  break;
  case(4):return 0;
  default:cout<<"wrong choice\n";
};
cout<<"want to continue:";
char co;
cin>>co;
if (co=='y' || co=='Y')
{
	goto lx;
}
else
{
	exit(0);
}
return 0;
}
