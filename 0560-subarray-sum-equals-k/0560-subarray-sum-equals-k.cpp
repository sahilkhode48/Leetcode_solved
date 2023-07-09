class Solution {
public:
//using map to store prefix sum
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int presum=0;
        int count=0;
        map<int,int>mpp;
        mpp[0]=1;//important 
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int remove=presum-k;//remove this in back
            count+=mpp[remove];//count of subarrays forming k till the idx.
            mpp[presum]++;
        }
        return count;

        
    }
};