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
#define mod 1000000007
#define mode 998244351

#define pb push_back
#define mp make_pair

#define F first
#define S second

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))


ll int power(ll int b,ll int p){
    ll r = 1;
    while (p!=0){
        if (p%2==0){
            b = ((b%mod)*(b%mod))%mod;
            p = p/2;
        }
        else{
            r = ((r%mod)*(b%mod))%mod;
            p = p-1;
        }
    }
    return r;
}

ll int solve(ll int num){
    if(num<10)
        return num;
        
    ll int ans=num;
    num/=10;
    while(num!=0){
        ans=ans*10+num%10;
        num=num/10;
    }
    return ans;
}

int main() {
    //fastio();
    ll int a[100002],b[100002];
    a[0]=0;b[0]=0;
    for(int i=1;i<100002;i++){
        a[i]=solve(i);
        b[i]=a[i]+b[i-1];
    }
    ll int q;
    sl(q);
	while(q--){
	    ll int l,r;
	    cin>>l>>r;
	    cout<<power(a[l],b[r]-b[l])<<endl;
	}    
	return 0;
}
