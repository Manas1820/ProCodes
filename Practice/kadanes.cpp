//subarrays are continuous
//for example; given an array of 1,2,3,4 we can have a subarray like 1,2 2,3 3,4 not 2,4, we can have 1,2,3 2,3,4 etc
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

//kadanes algorithm- max of the sum of subarrays
#include<iostream>
using namespace std;
int kadanes(int a[],int n){
    int maxcurrent=a[0];
    int maxglobal=a[0];
    for(int i=1;i<n;i++){
       maxcurrent=max(a[i]+maxcurrent,a[i]);
       maxglobal=max(maxcurrent,maxglobal);
    }
    return maxglobal;
}
int main(){
    int a[]={2,-3,4,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=kadanes(a,n);
    cout<<max_sum<<endl;
    return 0;
}






