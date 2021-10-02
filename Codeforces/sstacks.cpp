//question link: https://codeforces.com/problemset/problem/1486/A
//authorID: pragati1610
// Example Input
// 6
// 2
// 1 2
// 2
// 1 0
// 3
// 4 4 4
// 2
// 0 0
// 3
// 0 1 0
// 4
// 1000000000 1000000000 1000000000 1000000000
// Example Output
// YES
// YES
// YES
// NO
// NO
// YES

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
    ll n, arr[100], sum=0;
    cin >> n;
    for(ll i=0;i<n;i++) {
        cin >> arr[i];
    }
    sum = accumulate(arr, arr+n, sum);
    if(sum>=(n-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main() {
    // fastio();
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
