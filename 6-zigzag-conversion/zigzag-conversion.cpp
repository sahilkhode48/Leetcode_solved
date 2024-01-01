class Solution {
public:
//logic is it travels numrow times in 1 direction and then numrow-1 timesin other(keep alternating)
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string ans="";

        vector<string>ziggy(numRows);//size is numRows

        int i=0, row =0;
        bool direction=1;//bottom
        while(true){
            if(direction){//top to bottom
                while(row<numRows && i<s.size()){
                    ziggy[row++].push_back(s[i++]);
                   
                }
                row=numRows-2;
            }else{
                while(row>=0 && i<s.size()){
                    ziggy[row--].push_back(s[i++]);
                }
                row=1;
            }
            if(i>=s.size()) break;
            direction=!direction;//change direction after exec
        }
        for(int i=0;i<ziggy.size();i++){
            ans+=ziggy[i];
        }
        return ans;
        
    }
    
};