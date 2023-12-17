class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
         goal=goal+goal;
         return (goal.find(s)!=string::npos);
    }
};