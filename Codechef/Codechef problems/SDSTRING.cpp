//question link: https://www.codechef.com/problems/SDSTRING
//authorID: pragati1610
// Example Input
// 3
// 001101
// 1101
// 110
// Example Output
// 0
// 1
// -1

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
    string s;
    int c0=0,c1=0, diff;
    cin >> s;
    if(s.length()%2) cout<<-1<<endl;
    else {
        for(int i=0;i<s.length();i++){
            if(s[i] == '0') c0++;
            if(s[i] == '1') c1++;
        }
        if(c0==c1) cout<<0<<endl;
        else{
            cout<<abs(c0-c1)/2<<endl;
        }
    }
}

int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
