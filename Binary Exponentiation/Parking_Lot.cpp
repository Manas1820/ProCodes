
// https://codeforces.com/contest/630/problem/I

#include <bits/stdc++.h>
using namespace std;
 
#define lo(n) for (int i = 0; i < n; i++)
#define fo(k, n) for (int i = k; i < n; i++)
 
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
 
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
 
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
 
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
 
long long binpower(long long a, long long b){
    long long res = 1;
    if (b == 0)
        return res;
    while(b>0){
        if(b&1) res=res*a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
 
 
// n-2
 
long long solve(long long n){
    return (2 * 3 *4 * binpower(4, n - 3) + 4*3*3*(n-3)*binpower(4, n - 4));
}
 
int main(){
    long long n;
    cin>>n;
    cout << solve(n)<<endl;
    return 0;
}

