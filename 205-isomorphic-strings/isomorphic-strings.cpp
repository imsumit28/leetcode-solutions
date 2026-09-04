class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, char> sToT;
        unordered_map<char, char> TToS;

        for(int i = 0; i<s.size(); i++){
            if(sToT.count(s[i]) &&  sToT[s[i]] != t[i]){
                return false;
            }

            if(TToS.count(t[i]) && TToS[t[i]] != s[i]){
                return false;
            }

            sToT[s[i]] = t[i];
            TToS[t[i]] = s[i];
        }

        return true;
    }
};