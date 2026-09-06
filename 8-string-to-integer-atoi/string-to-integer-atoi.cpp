class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        // skip spaces k liye ans make sure it is less than n
        while(i<n && s[i] == ' '){
            i++;
        }

        int sign = 1; // by default 1 liye sign
        if(i<n && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-'){
                sign = -1;
            }

            i++;
        }

        // store the number and read only the digits
        long long num = 0;
        while(i<n && s[i] >= '0' && s[i] <='9'){
            int digit = s[i] - '0';
            num = num*10 + digit;

            // checck karo overflow ka condition
            if(sign*num > INT_MAX){
                return INT_MAX;
            }
            if(sign*num < INT_MIN){
                return INT_MIN;
            }
            i++;
        }

        return sign*num;
    }
};