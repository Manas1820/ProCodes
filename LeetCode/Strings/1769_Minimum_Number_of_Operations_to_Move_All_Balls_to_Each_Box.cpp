class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.length();i++){
            int sum=0;
           for(int j=0;j<boxes.length();j++){
               sum+=abs(i-j)*(boxes[j]-'0');
           }
           ans.push_back(sum);
        }
        return ans;
    }
};
