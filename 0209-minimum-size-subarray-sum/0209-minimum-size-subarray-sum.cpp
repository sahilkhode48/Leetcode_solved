class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int last=0;
        int sum=0;
        int maxc=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                maxc=min(maxc,i-last+1);
                sum-=nums[last];
                last++;
            }
        }
        if(maxc==INT_MAX)
        return 0;
        return maxc;
    }
};