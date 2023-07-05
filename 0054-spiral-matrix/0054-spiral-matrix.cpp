class Solution {
public:
//for pointer on four edges 2 row 2 column and ++ -- iteratively
//lt-rt;top-bot;rt-lt;bot-top
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        //int n=min(row,col)+2;
        vector<int>ans;
        int top=0;//row
        int bot=row-1;//row
        int left=0;//coll
        int right=col-1;//col
        while(left<=right && top<=bot){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }top++;
            for(int i=top;i<=bot;i++){
                ans.push_back(matrix[i][right]);
            }right--;
            if(top<=bot){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bot][i]);
                }bot--;
            }
            if(left<=right){
                for(int i=bot;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }left++;
            }

            
        }
        return ans;
    }
};