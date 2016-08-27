#include<bits/stdc++.h>
using namespace std;
#define ll long long int

list<char>v;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL) ;
	ll a, e, d ;
	cin >> a >> e >> d ;
	string s ;
	cin >> s ;
	for(ll i = 0 ;s[i] ;i++){
		v.push_back(s[i]) ;
	}
	cin >> s ;
	list<char>::iterator it=v.begin();
	advance(it,d-1);
	for(int i = 0; s[i]; i++){
		char ch = s[i] ;
		if (ch=='R'){
            it++ ;
			if (it == v.end()){
				it-- ;
			}
		}
		else if (ch == 'L'){
			if (it != v.begin()){
				it-- ;
			}
		}
		else{
			ll c = 0, sum = 1 ;
			if (*it == ')'){
				c = 1 ;
			}
			if (c == 0){
				it = v.erase(it) ;
				while(sum){
					if (*it == ')'){
						sum-- ;
					}
					else{
						sum++ ;
					}
					it=v.erase(it);
				}
				if (it == v.end()){
					it-- ;
				}
			}
			else{
				it = v.erase(it) ;
				it-- ;
				while(sum && it!=v.begin()){
					if (*it == '('){
						sum-- ;
					}
					else{
						sum++ ;
					}
					it=v.erase(it) ;
					it-- ;
				}
				if (sum){
					it=v.erase(it) ;
				}
				else{
					it++ ;
					if(it==v.end()){
						it-- ;
					}
				}
			}
		}
	}
	it=v.begin() ;
	for( ;it != v.end(); it++){
		cout<<*it;
	}
	return 0 ;
}

