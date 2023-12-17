class Solution {
public:

    bool static compare(pair<char,int>& n,pair<char,int>& m){
        return n.second >m.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        
        for(auto x:s){
            mpp[x]++;
        }
        vector<pair<char,int>>ans;
        for(auto x:mpp){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end(),compare);
        string aans;
        for(auto x: ans){
            int temp=x.second;
            while(temp--){
                aans.push_back(x.first);
            }
        }
        return aans;
    }
};