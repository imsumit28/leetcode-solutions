class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n<=1){
            return s;
        }

        int start = 0;
        int maxLength = 1;

        for(int i = 0;i<n;i++){

            // odd length palindrome ke liye : 
            int left = i;
            int right = i;

            while(left>=0 && right<n && s[left] == s[right]){
                int length = right - left + 1;

                if(length>maxLength){
                    maxLength=length;
                    start = left;
                }
                left--;
                right++;
            }

            //even length palindorme k liye
            left = i;
            right = i+1;

            while(left>=0 && right<n && s[left]==s[right]){
                int length = right-left+1;
                if(length>maxLength){
                    maxLength=length;
                    start = left;
                }
                left--;
                right++;
            }
        }

        return s.substr(start,maxLength);
    }
};