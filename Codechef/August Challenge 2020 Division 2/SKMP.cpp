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
    string a,b;
    cin>>a;
    cin>>b;
    string f;
    ll int count=1;
    bool key=true;
    map<char,ll int> mp1;
    lo(a.length())  mp1[a[i]]+=1;
    lo(b.length())  mp1[b[i]]-=1;
    fo(1,b.length()){
        if(b[0]!=b[i]) break;
        count++;
    }
    for(auto i:mp1){
      if(i.S == 0) continue;
      if(key){
          if(b[0]<i.F){
              f+=b;
              key=false;
          }
          if(b[0]==i.F){
            if(count<=i.S && count<b.length()){
                if(b[count]<i.F){
                    f+=b;
                    key=false;
               }
                
            }  
            
          }
      }
      while(i.S>0){
        f+=i.F;
        i.S--;
      }
    }
    if(key){
        f+=b;
    }
    cout<<f<<endl;
    
}

int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
