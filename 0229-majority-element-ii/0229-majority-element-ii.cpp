class Solution {
public:
//kind amodification of kadane's but with two counters
//in end it gives elm1 and elm2 the most occuring in array, but we need to check count seperately;
    vector<int> majorityElement(vector<int>& nums) {    
        int count1=0, count2=0;
        int elm1,elm2;
        int n=int(nums.size()/3)+1;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=elm2){
                elm1=nums[i];
                count1=1;
            }
            else if(count2==0 && nums[i]!=elm1){
                elm2=nums[i];
                count2=1;
            }
            
            else if (nums[i]==elm1)count1++;
            else if (nums[i]==elm2)count2++;
            
            
            else{
                count1--;
                count2--;
            }
        }
        count1=0;count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==elm1)count1++;
            if(nums[i]==elm2)count2++;
        }

        if( count1>=n){
            ans.push_back(elm1);
        }
        if(count2>=n)    {
            ans.push_back(elm2);
            
        }
        return ans;
        
        
        
    }
};