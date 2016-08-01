#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main()
{
    vector<ll>v1;
    vector<ll>v2;
    ll maxi=0,k=1;
    string s;
    v2.push_back(0);
    cin>>s;
    for(int i=0;s[i];i++)
    {
        if(s[i]==')' && v1.size()!=0)
        {          
            v1.pop_back();
            ll s=v2[v2.size()-1];
            ll d=v2[v2.size()-2];
            v2.pop_back();
            v2.pop_back();
            v2.push_back(s+d+1);
        }
        else if(s[i]==')')
        {
            v2.push_back(0);
        }
        if(s[i]=='(')
        {
            v1.push_back(i);
            v2.push_back(0);
        }
    }
    for(ll i=0;i<v2.size();i++)
    {
        if(maxi==v2[i])
        {
            k++;
        }
        if(maxi<v2[i])
        {
            maxi=v2[i];
            k=1;
        }
    }
    if(maxi==0)
    {
        cout<<0<<" "<<1;
        return 0;
    }
    cout<<maxi*2<<" "<<k;
}



