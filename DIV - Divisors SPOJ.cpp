#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define U unsigned int
using namespace std;
const int MAX = 1000000;
int divisor[MAX+5];
vector<int>prime_factor[MAX+5];
void sieve(){
	//counting number of divisors
	 for(int i=1;i<=MAX;i++){
	 	for(int j=i;j<=MAX;j+=i){
	 		divisor[j]++;
	 	}
	 }
	 //finding prime factors of a number 'i'
	 //and storing in vector 'prime_factor' corresponding to i.
	 for(int i=2;i<=MAX;i++){
	 	if(prime_factor[i].size()==0){
	 		for(int j=i;j<=MAX;j+=i){
	 			prime_factor[j].push_back(i);
	 		}
	 	}
	 }

}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	sieve();
	
	int cnt=0;
	for(int i=1;i<=MAX;i++){
		int x=divisor[i];
		if(prime_factor[x].size()==2 && prime_factor[x][0]*prime_factor[x][1]==x)
		{
			cnt++;
			if(cnt%9==0) cout<<i<<endl;
		}
	}
	return 0;
}
