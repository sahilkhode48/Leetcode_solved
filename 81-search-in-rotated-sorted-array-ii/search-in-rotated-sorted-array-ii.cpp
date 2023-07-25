class Solution {
public:
//only edge case if arry low==mid==high
//solving this will make it proper
    bool search(vector<int>& nums, int target) {
        int start=0;
         int end=nums.size()-1;
         bool ans=false;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[start]==nums[mid]&&nums[mid]==nums[end]){//eliminate the edge case
            start++;
            end--;
            }
            
            //if right part is sorted 
            else if(nums[mid]<=nums[end]){
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