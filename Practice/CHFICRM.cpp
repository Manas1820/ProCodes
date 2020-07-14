#include <bits/stdc++.h> 
using namespace std;

# define go(n) for(int i=0;i<n;i++)
 

string check()
{
    int n;
    int arr[n];
    int flag=0,flag1=0;
    cin>>n;
    go(n) cin>>arr[i];
    go(n)
    {
        if(arr[i]==5) flag+=1;
        if(arr[i]==10)
        {
            if(flag==0) return "NO";
            flag-=1;
            flag1+=1;
        }
        if(arr[i]==15){
            if(flag1==0 && flag<2) return"NO";
            if(flag1==0){flag-=2;continue;}
            flag1-=1;
        }
    }
    return"YES";
}

int main() {
	int n,t;
	cin>>t;
	go(t){
	    cout<<check()<<endl;
	}
	return 0;
}
