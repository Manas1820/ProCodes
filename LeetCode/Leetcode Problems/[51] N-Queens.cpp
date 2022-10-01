class Solution {
    
void helper(vector<vector<string>> &ans,vector<string> &curr,vector<int> &u,vector<int> &b,vector<int> &l,int i,int j,int n){
        if(j == n){
            ans.push_back(curr);
            return ;
        }
        
        for(int i=0;i<n;i++){
                if(u[i+j] == 0 && b[n-1+j-i]== 0 && l[j]){
                    u[i+j] = 1;
                    b[n-1+(j-i)] = 1;
                    l[j] = 1;
                    curr[i][j]='Q';
                    helper(ans,curr,u,b,l,i,j,n);
                    u[i+j] = 0;
                    b[n-1+(j-i)] = 0;
                    l[j] = 0;
                    curr[i][j]='.';                    
                }
        }
    }
    
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string>v(n);
        vector<vector<string>> ans;
        string s(".",n);
        
        vector<int> u(0,2*n),l(0,n),b(0,2*n);
        
        
        for(int i=0;i<n;i++)
            v[i]=s;
        
        helper(ans,v,u,b,l,0,0,n);
        return ans;
    }
};
