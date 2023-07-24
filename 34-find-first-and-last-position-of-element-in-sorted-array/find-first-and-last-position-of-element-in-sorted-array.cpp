class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int start=0;
       int end=nums.size()-1;
       int a=nums.size();

       while(start<=end){
           int mid=(start+end)/2;
           if(nums[mid]>=target){
               a=mid;
               end=mid-1;
               
           }
           else start=mid+1;
       } 
       int b=nums.size();
       start=0;
       end=nums.size()-1;
       while(start<=end){
           int mid=(start+end)/2;
           if(nums[mid]>target){
               b=mid;
               end=mid-1;
               
           }
           else start=mid+1;
       } 
       vector<int>ans;
       if(a==nums.size()||nums[a]!=target) return{-1,-1};
       return{a,b-1};

    }
};