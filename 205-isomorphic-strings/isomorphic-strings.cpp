class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapp[256] = {0};
        bool ismapped[256]= {0};
        int n=s.size()-1;
        //first we map and also set is mapped, if mapped already we dont change the mapp
        for(int i=0;i<=n;i++){
            if(mapp[s[i]]==0 && (ismapped[t[i]]==0)){
                mapp[s[i]]=t[i];
                ismapped[t[i]]=true;

            }
            
        }
        //now we iterate and check if all are mapped;

        for(int i=0;i<=n;i++){
            if(char(mapp[s[i]])!= t[i]) return false;
        }
        return true;

        
    }
};