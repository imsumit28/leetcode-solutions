class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maximum = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                depth++;
                maximum = max(maximum,depth);
            }

            else if(s[i] == ')'){
                depth--;
            }
        }

        return maximum;
    }
};