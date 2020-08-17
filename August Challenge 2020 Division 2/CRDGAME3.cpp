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

ll int find_count(ll int a){
   ll int count=0;
    while(a>0){
        a-=9;
        count+=1;
    }
    return count;
}

ll int closestMultiple(ll int n,ll int x) 
{    
    if(x>n) 
       return x; 
  
    n = n + x/2; 
    n = n - (n%x); 
    return n; 
} 

void solve(){
    ll int pc,pr;
    sl(pc);
    sl(pr);
    ll int a,b;
    a=closestMultiple(pc,9);
    b=closestMultiple(pr,9);
    if(pc>a)    a=(a/9)+1;
    else a=a/9;
    if(pr>b)    b=(b/9)+1;
    else b=b/9;
    if(b>a) cout<<"0"<<" "<<a<<endl;
    else cout<<"1"<<" "<<b<<endl;
}

int main() {
    fastio();
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
