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

bool leap(int year){
 if (((year % 4)==0) && ((year % 100)!=0))  return true;
 else if ((year % 400)==0)  return true;
 return false;
}


void solve(){
    int year,month,day,var=28;
    char a;
    cin>>year>>a>>month>>a>>day;
    if(month==2){
        if(leap(year)){
            if(day%2==0){cout<<(30-day)/2<<endl;return;}
            else {cout<<(31-day)/2<<endl;return;} 
        }
        else{
            if(day%2==0){cout<<((30-day)/2)+15<<endl;return;}
            else {cout<<((29-day)/2)+16<<endl;return;}
        } 
    }
    if(month==1||month==5||month==3||month==7||month==8||month==10||month==12){
        if(day%2==0){cout<<(32-day)/2<<endl;return;}
        else {cout<<(33-day)/2<<endl;return;}
    }
    if(month==4||month==6||month==9||month==11){
        if(day%2==0){cout<<((32-day)/2)+15<<endl;return;}
        else {cout<<((31-day)/2)+16<<endl;return;}
    }
    
}

int main(){ 
    int t;
    si(t);
	while(t--)
	    solve();
	return 0;
}
