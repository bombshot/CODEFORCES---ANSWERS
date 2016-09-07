#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int inf = 1000000000;
int ar[1000005];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
	ll a,s,d,sum=0;
	cin>>a>>s>>d;
	//cout<<a<<s<<d;
	for (int i = 1; i<=a; ++i)
	{
		for(int j=1;j<=s;j++){
			for(int k=1;k<=d;k++){
				ll p=(i*j)*(k);
				if (!ar[p])
				{
                    int z=0;
                    for(int l=1;l*l<=p;l++)
                    if(p%l==0){
                        if(l*l==p) ar[p]++;
                        else ar[p]+=2;
                    }

                    sum+=ar[p];
				}
				else
				{
					sum=(sum+ar[p])%1073741824;
				}
			}
		}
	}
	cout<<sum;
	return 0 ;
}