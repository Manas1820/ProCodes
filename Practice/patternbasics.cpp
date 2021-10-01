
// inverted half pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<< "*";

        }
        cout<<endl;
    }
    return 0;
}

//inverted half pyramid by 180 degrees
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++ ){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// half pyramid using numbers
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// floyds triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }


    return 0;
}

// butterfly pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i ; j++){
            cout<<"*";
        }
        int space= 2*n-2*i;
        for(int j=1;j<=space; j++ ){
            cout<<" ";
        }
        for(int j=1; j<=i ; j++){
            cout<<"*";

        }
        cout<<endl;
    }
     for(int i=n;i>=1;i--){
        for(int j=1; j<=i ; j++){
            cout<<"*";
        }
        int space= 2*n-2*i;
        for(int j=1;j<=space; j++ ){
            cout<<" ";
        }
        for(int j=1; j<=i ; j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}