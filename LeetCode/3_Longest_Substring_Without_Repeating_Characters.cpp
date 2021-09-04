class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int ans=0,l=0,i;
        for(i=0;i<s.length();i++){
            if(m.count(s[i])){ 
                ans = max(int(i-l),ans);
                l=max(m[s[i]]+1,l);
                m[s[i]]=i;
            }    
            m[s[i]]=i;
        }
        ans=max(int(s.length()-l),ans);
        return ans;
    }
};
