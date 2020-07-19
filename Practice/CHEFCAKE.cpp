#include <bits/stdc++.h>
#include<cmath>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)

#define lo(n) for(int i=0;i<n;i++)
#define fo(k,n) for(int i=k;i<n;i++)

#define ll long long
#define deb(x) cout << #x << "=" << x << endl

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)

#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)

typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define pb push_back
#define mp make_pair

#define F first
#define S second

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

ll int vec[9] ={1,11,111,1111,11111,111111,1111111,11111111,111111111};
ll int flag[9]={1,1,2,6,24,120,720,5040,40320}; 

void solve(){
    int n;
    si(n);
    ll int arr[n];
    ll int sum=0;
    lo(n) sl(arr[i]);
    lo(n) sum+=(arr[i]*vec[n-1]);
    cout<<sum*flag[n-1]<<endl;
    
}

int main() {
    fastio();
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
