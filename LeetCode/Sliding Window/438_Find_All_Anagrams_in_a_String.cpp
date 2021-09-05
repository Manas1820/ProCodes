class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int t=0,c=p.length();
        vector<int> m(26,0);
        for(int i=0;i<p.size();i++) m[p[i]-'a']++;
        for(int i=0;i<s.length();i++){
            if(i-t>=p.length()){
                m[s[t]-'a']++;
                if(m[s[t]-'a']>0) c++;
                t++;
            }
            m[s[i]-'a']--;
            if(m[s[i]-'a']>=0) c--;
            if(c==0) ans.push_back(t);
        }
        return ans;
    }
};
