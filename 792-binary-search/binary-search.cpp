class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
       

        while(start<=end){
            int mid=(start+end)/2;
            int element=nums[mid];
            if(element==target){
                return mid;
            }
            else if(target>element){
                start=mid+1;
               

            }
            else if(element> target){
                 end=mid-1;
            }
            
        }
        return -1;
    }
};