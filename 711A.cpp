#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int inf = 1000000000;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
	ll n,m;
	cin>>n;
	string s[n];
	int c=0;
	for (int i = 0; i <n; ++i)
	{
		cin>>s[i];
		//cout<<s[i][3]<<" "<<s[i][4]<<endl;
		if (s[i][0]==s[i][1] && s[i][0]=='O' && c==0)
		{
			s[i][0]='+';
			s[i][1]='+';
			c=1;
		}
		if (s[i][3]==s[i][4] && s[i][3]=='O' && c==0)
		{//cout<<"P";
			s[i][3]='+';
			s[i][4]='+';
			c=1;
		}
	}
	if (c==0)
	{
		cout<<"NO";
	}
	else
	{
	    cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<s[i]<<endl;
		}
	}
	return 0 ;
}
 