//question link: https://www.codechef.com/SEPT20B/problems/TREE2
//authorID: hayattamboli
// Example Input
// 1
// 3
// 1 2 3
// Example Output
// 3
#include <bits/stdc++.h>
using namespace std;

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


void solve()
{
    int n;
    si(n);
    set <ll> s1;
    // insert all numbers in a set 
    lo(n)
    {
        ll num;
        sl(num);
        // dont count 0
        if(num==0)
            continue;
        s1.insert(num);
    }
    // print all unique entries 
    cout<<s1.size()<<endl;
}

//driver function
int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}