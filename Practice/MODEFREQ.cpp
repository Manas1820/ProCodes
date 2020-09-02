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
    int n;
    cin>>n;
    int arr[n];
    int a;
    vi num(11,0);
    lo(n){cin>>a;num[a]++;}
    vi freq(10001,0);
    fo(1,11) {if(num[i])freq[num[i]]++;}
    int max = 0, flag = 0;
	  fo(1,10001){
		  if(freq[i] > max) {
			  max = freq[i];
			  flag = i;
		  }
	  }
	  cout<<flag<<endl;
}

int main() {
    int t;
    cin>>(t);
	while(t--)
	    solve();
	return 0;
}
