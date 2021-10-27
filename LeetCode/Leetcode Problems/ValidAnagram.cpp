class Solution {
public:


    bool isAnagram01(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
    

    bool isAnagram02(string s, string t) {
        int map[26] ={0} ; 

        

        for (int i=0; i<s.size(); i++) {
            map[s[i]-'a']++;
        }

        for (int i=0; i<t.size(); i++) {
            map[t[i]-'a']--;
        }
        

        for (int i=0; i<sizeof(map)/sizeof(map[0]); i++) {
            if (map[i]!=0) return false;
        }
        return true;
    }
    

    
    bool isAnagram(string s, string t) {
        return isAnagram02(s,t);
        return isAnagram01(s,t);
    }
    
};
