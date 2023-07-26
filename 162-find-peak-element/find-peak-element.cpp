class Solution {
public:
//technically peak here means that the largest number have right and left slope
    int findPeakElement(vector<int>& nums) {
        int min=INT_MIN;
        int start=1;
        int end=nums.size()-2;
        if(nums.size()==1)return 0;
        //if first element starts off grater than second
        if(nums[0]>nums[1])return 0;
        //if last element grater than previous

        if(nums[nums.size()-1]>nums[nums.size()-2])return nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            //if arr mid is peak
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
                return mid;
            }
            //if we are in left part i.e mid>mid-1 elemtn
            if(nums[mid]>nums[mid-1])start=mid+1;
            else end=mid-1;
                
            
        }
        return -1;

    }
};