//question link: https://leetcode.com/problems/number-complement/
//authorID: pragati1610
// Example Input
// 5
// Example Output
// 2

#include <bits/stdc++.h>

using namespace std;

string intToBin(int num) {
    string S="";
    while(num>=1) {
        S+=to_string(num%2);
        num/=2;
    }        
    reverse(S.begin(), S.end());        
    return S;
}

string flip(string S) {
    string T="";
    for(int i=0;i<S.length();i++){
        if(S[i]=='0') T+='1';
        else T+='0';
    }
    cout << T;
    return T;
}

int binToInt(string S) {
    int j = 0, num = 0;
    for(int i=(S.length()-1); i>=0; i--) {
        num += pow(2, j)*(S[i]-'0');           
        j++;
    }
    cout << num;
    return num;
}

int findComplement(int num) {
    string S = intToBin(num); 
    string flipped = flip(S);     
    cout << "\n";   
    int X = binToInt(flipped);

    return X;
}


int main() {
	
    int f = findComplement(5);

	return 0;
}
