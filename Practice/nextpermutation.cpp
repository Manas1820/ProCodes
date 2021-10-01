#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    rotate(a,a+2,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //using vectors
    vector<int> v{10,20,30,40,50};
    rotate(v.begin(),v.begin()+2,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //next_permutation (lexographically next)
    next_permutation(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
    //swap function --> also works for arrays
    //max min function
    //reverse function 
    int arr[]={1,2,3,4,4,5};
    reverse(arr,arr+4);
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
