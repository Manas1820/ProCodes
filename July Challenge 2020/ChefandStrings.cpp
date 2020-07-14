#include<bits/stdc++.h>
using namespace std;
#define lo(n) for(int i=0;i<n;i++)
#define fo(k,n) for(int i=k;i<n;i++)

#define ll long long

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)

#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)

typedef vector<int>		vi;
typedef vector<ll>		vl;


ll int solve(){
    ll int N;
    sl(N);
    ll int arr[N];
    lo(N) sl(arr[i]);
    ll int sum=0;
    
    lo(N-1){
    if(arr[i]==arr[i+1]) continue;
    if(arr[i+1]>arr[i]) sum+=(arr[i+1]-arr[i]-1);
    if(arr[i]>arr[i+1]) sum+=(arr[i]-arr[i+1]-1);
    } 
    return sum;
}


int main() {
    ll int t;
    sl(t);
	while(t--)
	   pl(solve());
	return 0;
}
