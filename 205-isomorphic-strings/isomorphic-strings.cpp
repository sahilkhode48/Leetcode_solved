class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mpp;
        map<char,char>mpp2;
        int n=s.size()-1;
        for(int i=0;i<=n;i++){
            if(mpp[s[i]]!=mpp2[t[i]])return false;
            mpp[s[i]]=i+1;
            mpp2[t[i]]=i+1;
            
        }

        return true;
    }
};