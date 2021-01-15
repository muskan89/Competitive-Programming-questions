#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ll q;
	cin>>q;
	while(q--){
		string s,t;
		cin>>s>>t;
		ll lens=s.length(),lent=t.length();
		ll imp=__gcd(lens, lent);
		string test;
		for(ll i=0;i<imp;i++){
			test+=s[i];
		}
		ll w1=lens/imp,w2=lent/imp;
		string sup_s,sup_t;
		for(ll i=0;i<w1;i++){
			sup_s+=test;
		}
		for(ll i=0;i<w2;i++){
			sup_t+=test;
		}
		ll flag=0;
		for(ll i=0;i<lens;i++){
			if(s[i]!=sup_s[i]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			for(ll i=0;i<lent;i++){
				if(t[i]!=sup_t[i]){
					flag=1;
					break;
				}
			}	
		}
		if(flag==1){
			cout<<-1<<"\n";
		}else{
			ll p=w1 * w2;
			ll ui=__gcd(w1, w2);
			ll ans;
			ans=p/ui;
			string utr;
			for(ll i=0;i<ans;i++){
				utr+=test;
			}
			cout<<utr<<"\n";
		}	
	}
	return 0;
}
