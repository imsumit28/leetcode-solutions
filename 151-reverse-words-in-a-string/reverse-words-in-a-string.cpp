class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1; // n-1 last index hota hai,we used the same logic here thats why s.size -1
        string ans = "";

        while(i>=0){

        while(i>=0 && s[i] == ' '){ // spaces skip kardiye 
            i--;
        }
        
        if(i<0){
            break;
        }
        int end = i; // stored the last word ie blue hai to e stored

        // move left untill space aa jaye 
        while(i>=0 && s[i] != ' '){
            i--;
        }

        if(!ans.empty()){ // add spaced between words
            ans = ans + ' ';
        }

        ans = ans + s.substr(i+1, end - i);

        }

        return ans;
    }
};