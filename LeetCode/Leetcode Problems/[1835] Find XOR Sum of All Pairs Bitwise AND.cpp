class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> ba(32),bb(32);
        int ans=0;
        for (auto i = 0; i < arr1.size(); i++)
            for (int j = 0; j < 32; j++)
                ba[j] += ((arr1[i] & (1 << j)) > 0);
        
        for (auto i = 0; i < arr2.size(); i++)
            for (int j = 0; j < 32; j++)
                bb[j] += ((arr2[i] & (1 << j)) > 0);
        
        for(auto i=0;i<32;i++)
            ba[i] = (ba[i]%2)*(bb[i]%2);
        
       for (auto i = 0; i < 32; i++)
            if (ba[i]%2)
                ans |= (1 << i);
        
        return ans;
    }
};
