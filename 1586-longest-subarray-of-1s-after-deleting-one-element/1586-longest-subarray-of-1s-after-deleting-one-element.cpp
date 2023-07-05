class Solution {
public:
///first intuition is cheking the longest subsrting with one 0 in between and keeping the length in max(max,present). print the maximum(top)in pq.(maybe a kadane's modified)
//revisit
    int longestSubarray(vector<int>& a) {
        int i,j,k,c=0,s=0,m=0;
        vector<int>v;
        v.push_back(-1);
        for(i=0;i<a.size();i++){
            if(a[i]==0)
            v.push_back(i);
        }
        v.push_back(i);

        for(i=1;i<v.size()-1;i++){
            m=max(m,v[i+1]-v[i-1]-2);
        }
        if(v.size()==2)
        return a.size()-1;

        return m;
    }
};