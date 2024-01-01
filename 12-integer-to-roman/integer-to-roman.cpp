class Solution {
public:
    //list should contain special entries
    string intToRoman(int num) {
        string symbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        for(int i=0;i<13;i++){
            int temp=num/values[i];
            int times=temp;
            while(temp--){
                ans+=symbols[i];
            }
            num=num-(times*values[i]);
        }
        return ans;

    }
};