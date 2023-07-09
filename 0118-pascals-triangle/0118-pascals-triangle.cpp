class Solution {
public:
//doing rowise approach

    vector<int>gen_row(int row){
        vector<int>ans;
        ans.push_back(1);
        //i==column start from index 1 as we already put 0th index 0;
        long long temp=1;
        for(int col=1;col<row;col++){
            temp=temp*(row-col);
            temp=temp/col;
            ans.push_back(temp);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        int N=numRows;
        vector<vector<int>>ans;
        for(int i=0;i<N;i++){
                ans.push_back(gen_row(i+1));
        }
        return ans;
    }
};