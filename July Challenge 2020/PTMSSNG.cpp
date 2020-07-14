#include <bits/stdc++.h>
using namespace std;
#define lo(n) for(int i=0;i<n;i++)
#define fo(k,n) for(int i=k;i<n;i++)

#define ll long long

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)

#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld",x)
#define ps(s)	printf("%s\n",s)

typedef vector<int>		vi;
typedef vector<ll>		vl;

ll int getco(ll int arr[],ll int length){
    sort(arr,arr+length);
    ll int num = arr[0];
    ll int count = 0;
    lo(length){
        if(num==arr[i]) count+=1;
        else{
            if(count%2 != 0)    return num;
            num=arr[i];
            count=1;
        }
    }
}

void solve(){
    ll int n;
    sl(n);
    ll int t=4*n-1;
    ll int x[t],y[t];
    lo(t) {sl(x[i]);sl(y[i]);}
    
    cout<<getco(x,t)<<" "<<getco(y,t)<<endl;
}

int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
