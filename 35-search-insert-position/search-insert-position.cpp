class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=0;
         int ans=nums.size();

        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]>=target){
                ans=mid;
                end=mid-1;

            }
           
            else if (nums[mid]<target)start= mid+1;
        }
        return ans;
    }
};