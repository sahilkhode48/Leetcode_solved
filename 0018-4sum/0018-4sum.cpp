class Solution {
public:
//brute is basically N^4
//2nd approach 4th element can be written as target-(numi+numj+numk) ofc all of them stored in a map
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                //hashset here as we need hash for b/w j and k.
                 set<long long>hashset;
                for(int k=j+1;k<n;k++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    long long fourth=target-sum;
                    if(hashset.find(fourth)!=hashset.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],int (fourth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }


                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
    
};