//BS in 1 and max of piles and check thorugh all piles if time<=h

class Solution {
public:
    long long totalhrs(vector<int> & piles, long long hourly){//calculating total hrs for specific mid
        int n=piles.size();
        long long temp=0;
        for(int i=0;i<n;i++){
            temp+=(piles[i]+(hourly-1))/hourly;//ceil cause issue for big testcase
        }
        return temp;
    }
    int maximum(vector<int>& piles){
        int ans=INT_MIN;
        for(int i=0;i<piles.size();i++){
            ans=max(ans,piles[i]);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        long long end=maximum(piles);
        while(start<=end){
            long long mid=(start+end)/2;
            long long hrs=totalhrs(piles,mid);
            if(hrs<=h)end=mid-1;
            else start=mid+1;

        }
        return start;//why?? because you might arrive at last start and end for same answer, we want minimum
    }
};