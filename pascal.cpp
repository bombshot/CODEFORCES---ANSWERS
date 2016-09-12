#include<iostream>
#include<stack>
using namespace std;
typedef long long ll;
int ar[300][300];
int main(){
	int n;
	cin>>n;
	ar[0][n-1]=1;
	for(int i=1;i<100;i++){
		for(int j=0;j<100;j++){
            if(j==0)ar[i][j]=ar[i-1][j+1];
            else if(j==99)ar[i][j]=ar[i-1][j-1];
            else
                ar[i][j]=ar[i-1][j-1]+ar[i-1][j+1];
        }
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<100;j++){
           if(!ar[i][j]){
                cout<<"  ";
           }
           else{
                cout<<ar[i][j]<<" ";
           }
        }
        cout<<endl;
	}
}
