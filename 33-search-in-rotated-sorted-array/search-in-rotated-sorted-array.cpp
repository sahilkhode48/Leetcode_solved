class Solution {
    //we can have a BS approach as we can eliminate the half which doesnt have the target
    //search conditions according to where the target might lie
public:
    int search(vector<int>& nums, int target) {
         int start=0;
         int end=nums.size()-1;
         int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(nums[mid]==target){
                ans=mid;
            }
            //if right part is sorted 
            if(nums[mid]<nums[end]){
                if(target<=nums[end] && target>=nums[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            //if left part sorted
            else{
                if(target<=nums[mid] && target>=nums[start]){
                    
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        return ans;
                 
    }
};