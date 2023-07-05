class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int it1=0;
        for( int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[it1+1]=nums[i];
                it1++;
                
                
            }
            
        }
        return it1+1;
    }
};