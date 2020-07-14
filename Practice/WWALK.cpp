#include <bits/stdc++.h>
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


void solve(){
    ll int n;
    sl(n);
    ll int a[n],b[n];
    ll int suma=0,sumb=0;
    ll int ans=0;
    lo(n)   sl(a[i]);
    lo(n)   sl(b[i]);
    lo(n){
        suma+=a[i];
        sumb+=b[i];
        if(a[i] == b[i] && suma == sumb)    ans+=a[i];
    }
    cout<<ans<<endl;
}

int main() {
    fastio();
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
