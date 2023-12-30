class Solution {
public:
    int myAtoi(string s) {
        int num=0, i = 0, sign =1;

        while(s[i]==' '){
            i++;
        }
        if(i<s.size() && (s[i]=='-'||s[i]=='+') ){
            sign = s[i] == '+'? 1:-1;
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            //convert this to 1-->1  2--->12 3---->123.
            if(num>INT_MAX/10 || (num == INT_MAX /10 && s[i]>'7')) return sign== -1?INT_MIN : INT_MAX;
            num= num*10 + (s[i]-'0');//s[i]-'0' converts string to num
            i++;

        }
        return num*sign;
        
    }
};