#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define maxx 10000000000
typedef vector<int> v1;
typedef vector<v1> v2;
typedef pair<int,int> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define total(c) allocator(all(c),ll(0))
typedef pair<int,int> ii;
typedef pair<ii,int> pii;

int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"-1";
        return 0;
    }
    else
        if(n==2)
    {
        cout<<"-1";
            return 0;
    }

  ll k;
    if(n%2==0)
    {
        k =((n*n))/4;

        cout<<(k)-1<<" "<<k+1;


    }
    else
        if(n%2==1)
        {
            k=(n*n)/2;
        cout<<(k)<<" "<<(k)+1;


        }
return 0;
}