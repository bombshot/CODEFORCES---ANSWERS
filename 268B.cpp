#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{  int n;
	cin>>n;
	long long int p=n+(n-1);
	for (int i = 2,j=n-2; i < n; ++i,--j)
	{
		p=p+(i*j);
	}
	cout<<p;
    return 0;
}