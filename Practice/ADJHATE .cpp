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


#define mx 1e17
#define mn LONG_MIN
#define mod 998244353
#define mode 998244351

#define pb push_back
#define mp make_pair

#define F first
#define S second

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

/*

if(min(o,e)%2)

e-o = o

e-e = e
o-o = e

*/


void solve(){
    ll n;
    cin>>n;
    vl e,o;
    lo(n){
        ll t;
        cin>>t;
        if(t%2) o.pb(t);
        else e.pb(t);
    }
    if(o.size()==0 || e.size()==0) cout<<"-1"<<endl;
    else{
        for(auto i:o) cout<<i<<" ";
        for(auto i:e) cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    //fastio();
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
