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
    si(n);
    int arr[n][n];
    int flag=0;
    int count=0;
    lo(n){
        for(int j=0;j<n;j++) si(arr[i][j]);  
    }
    for(int i=n-1;i>0;i--){
        if(flag==0 && arr[0][i] != i+1){flag=1;count++;}
        else if(flag==1 && arr[i][0] != i+1){flag=0;count++;}
    }
    cout<<count<<endl;
}

int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
