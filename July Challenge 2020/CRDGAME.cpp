#include <bits/stdc++.h>
using namespace std;
#define lo(n) for(int i=0;i<n;i++)
#define fo(k,n) for(int i=k;i<n;i++)

#define ll long long

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)

#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)

typedef vector<int>		vi;
typedef vector<ll>		vl;

void solve(){
    int N;
    si(N);
    int scorea=0,scoreb=0;
    lo(N){
        string a,b;
        cin>>a>>b;
        ll int powa=0,powb=0;
        lo(a.length()) powa+=(a[i]-'0');
        lo(b.length()) powb+=(b[i]-'0');
        if(powa==powb) {scorea+=1;scoreb+=1;}
        if(powa>powb) scorea+=1;
        if(powb>powa) scoreb+=1;
    }
    if(scorea == scoreb) cout<<"2 "<<scorea<<endl;
    if(scorea<scoreb) cout<<"1 "<<scoreb<<endl;
    if(scoreb<scorea) cout<<"0 "<<scorea<<endl;
}

int main() {
    int t;
    si(t);
	while(t--)
	    solve();
	return 0;
}
