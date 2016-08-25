#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main()
{
    string s;
    cin>>s;
    int flag=0,p;
    
    
    for(int i=0;i<s.size();i++)
    {
        if((flag==0||flag==1)&&s[i]!='a')
            {
                int p=s[i];
                s[i]=p-1;
                cout<<s[i];
                flag=1;
            }
        else
            if(s[i]=='a'&&flag==0&&i!=s.size()-1)
        {
            cout<<'a';

        }
        else if(s[i]=='a'&&flag==1)
        {
            cout<<'a';
            flag=2;
            i++;
            for(;i<s.size();i++)
            {
                cout<<s[i];
            }

        }
        else
            if(i==s.size()-1&&flag==0&&s[i]=='a')
        {
            cout<<'z';
        }
        else
    if(i==s.size()-1&&flag==0)
        {
            p=s[i];
            s[i]=p-1;
            cout<<s[i];
        }



    }
return 0;
}