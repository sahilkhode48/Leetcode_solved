class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int,int>mpp;
         for(auto x : nums){
            mpp[x]++;
     }
        
    
    for(auto a : mpp){
        if (a.second==1)
        return a.first;
    }
        return 0;
    }

};