class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int count=0;
        map<int,int>mpp;
        for(auto x:s){
            if(x=='('){
                count++;
                ans=max(ans,count);
            }   
            else if (x==')'){
                count--;
                ans=max(ans,count);
            }            
            
        }
        
        return ans;
    }
};