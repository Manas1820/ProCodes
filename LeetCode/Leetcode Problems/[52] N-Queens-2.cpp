class Solution {
    int ans;
    void count(int col,vector<string> &b,vector<int> &l,vector<int> &lu,vector<int> &lb,int n){
        if(col == n){
            ans+=1;
            return;
        }
        for(int row=0;row<n;row++){
            if(l[row] == 0 && lb[row+col] == 0 && lu[n-1+col-row] == 0){
                b[row][col]='Q';
                l[row]=1;
                lb[row+col]= 1;
                lu[n-1+col-row] =1;
                count(col+1,b,l,lu,lb,n);
                b[row][col] ='.';
                l[row]=0;
                lb[row+col]= 0;
                lu[n-1+col-row] =0;
            }
        }
    }
public:
    int totalNQueens(int n) {
        ans=0;
        vector<string> b(n);
        string s(n,'.');
        for(int i=0;i<n;i++) b[i]=s;
        vector<int> l(n,0),lu(2*n-1,0),lb(2*n-1,0);
        count(0,b,l,lu,lb,n);
        return ans;
        
    }
};
