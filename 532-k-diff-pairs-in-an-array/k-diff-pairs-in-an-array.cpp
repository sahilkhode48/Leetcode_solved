class Solution {
public:
    int bs(vector<int>&nums, int start, int x){
        int end=nums.size()-1;
        while(start<=end){
            int mid =(start+end)/2;
            if(nums[mid]==x){
                return mid;
            }
            else if(nums[mid]<x)start=mid+1;
            else end =mid-1;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //int count = 0;
        //int first=0;
        //int last=1;
        //i!=j compulsory so check in between;

        /* 2ptr approach
            if(diff=k){
                pair is valid count++;
            }
            else if(diff>k)i++;
            else j++;
        */

        /*while(last<nums.size()){
            if(nums[last]-nums[first]==k){
                count++;
                ++first; ++last;
            }
            else if(nums[last]-nums[first]>k)first++;
            else last++;
            if(first==last)last++;
        }
        return count;
        */
        //
        // map approach --> put all in a map;
        //if curr+k is on right side BS to search


        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            if(bs(nums, i+1, nums[i]+k)!= -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();

    }   
};