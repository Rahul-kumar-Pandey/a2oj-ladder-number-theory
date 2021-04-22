//stars and bars problem
//for more info-> https://cp-algorithms.com/combinatorics/stars_and_bars.html#:~:text=Stars%20and%20bars%20is%20a,ways%20to%20group%20identical%20objects.

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define U unsigned int
#define pb push_back
using namespace std;

//finding C(n,r) in efficiently;
ll C(ll n,ll r){
	ll p=1,k=1;
	if(n-r<r)
		r=n-r;
	if(r!=0){
		while(r){
			p*=n;
			k*=r;
			ll m=__gcd(p,k);
			p/=m;
			k/=m;
			n--;
			r--;
		}
	}
	else
		p=1;
	return p;
}
void solve(){
	ll n,k;
	cin>>n>>k;
	n=n-k;
	//find C(n+k-1,n);
	cout<<C(n+k-1,n)<<endl;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	
 	int t;
 	cin>>t;
 	while(t--){
 		solve();
 	}

	return 0;
}
