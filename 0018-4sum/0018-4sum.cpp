class Solution {
public:
//brute is basically N^4
//2nd approach 4th element can be written as target-(numi+numj+numk) ofc all of them stored in a map
/*vector<vector<int>> fourSum(vector<int>& nums, int target) {
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
    }*/
//3rd approach sort array->fix i and j and 2ptr approach k and l->skip duplicate in k and l
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
         for(int i=0;i<n;i++){
             if(i>0 && nums[i]==nums[i-1])continue;//skip similar terms

            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int k =j+1;
                int l=n-1;
                while(k<l){
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;l--;
                        //no duplictes in l and k
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                    else if(sum<target)k++;
                    else if(sum>target)l--;
                }
                
            }
        }
        return ans;

    }
    
};