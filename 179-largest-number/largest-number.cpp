class Solution {
public:
    //sort according to first digit then later and so forth(custom comparator)(string already sorts lexicographically but 3,30 is edge case
    static bool comparator(string a, string b){
        //check if 303 or 330 bigger
        //stuck for 0,0 returns 00 so

        string t1=a+b;
        string t2=b+a;

        return t1>t2;

    }
    string largestNumber(vector<int>& nums) {
        vector<string>snums;//conver exist int vector to string
        for(auto x: nums){
            snums.push_back(to_string(x));
        }
        sort(snums.begin(),snums.end(),comparator);
        //if largest number is 0

        if(snums[0]=="0")return "0";
        string ans="";
        for(auto x:snums)ans+=x;
        return ans;
    }
    
};