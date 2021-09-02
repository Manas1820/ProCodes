#include <bits/stdc++.h>
using namespace std;
#define lo(i,n) for(i=0;i<n;i++)
#define fo(i,k,n) for(i=k;i<n;i++)

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
    int n;
    si(n);
    char chess[8][8]={{'O','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'}};
    int i=0,j=0;
    int r =n/8,c=n%8;
    
    if(n%8==0) lo(i,8)  chess[r][i]='X';  
    
    else{
    if(r>=1) fo(i,c,8) chess[r][i]='X';
    else chess[r][c]='X';
    lo(i,c+1) chess[r+1][i]='X';
    }
    
    lo(i,8){lo(j,8){cout<<chess[i][j];}cout<<endl;}
    
}

int main() {
    ll int t;
    sl(t);
	while(t--)
	    solve();
	return 0;
}
