class Solution {
public:
//unsorted half will have min number
    int findMin(vector<int>& nums) {
        int start=0;
         int end=nums.size()-1;
         int ans;
         
        while(start<=end){
            int mid=(start+end)/2;
            ans=min(ans,nums[mid]);
            
            //if right part is sorted 
            if(nums[mid]<=nums[end]){
                end=mid-1;
            }
            //if left part sorted
            else{
                
                start=mid+1;
                
            }
        }
        return ans;
    }
};