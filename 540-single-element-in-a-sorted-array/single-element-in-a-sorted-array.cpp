class Solution {
public:
// dividing by single element, left part index alwas pairs as even,odd and right part odd,even
//stand at mid, if mid is at odd and mid-1 element is same, left half can be eliminated;if mid+1= same, eliminate right part

    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int start=1;
        int end=nums.size()-2;
        int ans;
        while(start<=end){
            int mid=(start+end)/2;
            //start and end edge case precoded
            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])return nums[mid];
            if(nums[nums.size()-1]!=nums[nums.size()-2])return nums[nums.size()-1];
            //if odd mid and left is same || if even mid and right is
            if(mid%2==0){
                if(nums[mid]==nums[mid-1])end=mid-1;
                else if(nums[mid]==nums[mid+1])start=mid+1;
            }
            else{
                if(nums[mid]==nums[mid-1])start=mid+1;
                else end=mid-1;
            }

        }
        return ans;
    }
};