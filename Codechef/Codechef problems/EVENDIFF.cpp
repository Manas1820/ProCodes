//question link: https://www.codechef.com/problems/EVENDIFF
//authorID: pragati1610
// Example Input
// 2
// 2
// 2 4
// 3
// 4 1 2
// Example Output
// 0
// 1

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

void solve() {
    int ce=0, co=0, k, n, i;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> k;
        if(k%2==0) ce++;
        else co++;
    }
    if(ce == n || co == n){
        cout << 0 << endl;
    }
    else if(ce>co){
        cout << co << endl;
    } else {
        cout << ce << endl;
    }
}

int main() {
    fastio();
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
