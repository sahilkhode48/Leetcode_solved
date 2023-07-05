class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(nums.size()==1||nums.size()==k){
            return;
        }
        else if(nums.size()<k){
            k=k%nums.size();
            vector<int>temp(nums.end()-k,nums.end());
            for(int i=nums.size()-1;i>=k;i--){
           
            
         nums[i]=nums[i-k];
          
        
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }

        }
        else{
            vector<int>temp(nums.end()-k,nums.end());
            for(int i=nums.size()-1;i>=k;i--){
           
            
         nums[i]=nums[i-k];
          
        
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }

        }    
        
       
        
    }
};