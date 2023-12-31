class Solution {
public:
    bool isvowel(char a){
        set<char>vw={'a','e','i','o','u','A','E','I','O','U'};
        if(vw.find(a)!= vw.end()){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {

        int l=0;
        int h= s.size()-1;
        while(l<h){
            if(isvowel(s[l]) && isvowel(s[h])){
                swap(s[l], s[h]);
                l++; h--;
            }
            else if(isvowel(s[l]) && !isvowel(s[h])){
                h--;
            }
            else l++;
        }
        return s;

    }
};