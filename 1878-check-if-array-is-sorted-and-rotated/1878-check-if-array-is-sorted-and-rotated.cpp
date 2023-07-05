class Solution {
public:
    bool check(vector<int>& nums) {
        
        int flag=1;
      
        int min=nums[0];
        for( int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                flag--;
                
            }
            
        }
        if(nums[nums.size()-1]>min)
        flag--;
        if(flag<0)
        return false;
        else
        return true ;
    }
};