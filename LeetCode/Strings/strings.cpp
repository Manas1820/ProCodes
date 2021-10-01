// #Problem 1119- Remove vowels from a string
#include<iostream>
#include<cstring>
using namespace std;
void newstr(string str){
    
    for(int i=0; i<str.length();i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
           continue;
        }
        else{
            cout<<str[i];
        }
    }

}
int main(){
    string s;
    getline(cin,s);
    newstr(s);
    return 0;
}

// #Problem 1108:Defanging an IP Address
#include<iostream>
#include<cstring>
using namespace std;
void defang(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]=='.'){
            continue;
            cout<<"[.]";
        }
        else{
            cout<<str[i];
        }
    }

}
int main(){
    string s;
    getline(cin,s);
    defang(s);
    return 0;
}

// Problem-3 Longest Substring without repeating characters
#include<iostream>
#include<cstring>
void longest(string s){
    
}
