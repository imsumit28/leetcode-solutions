class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if (s.size() != t.size()) {
            return false;
        }

       
        unordered_map<char, char> sToT;

       
        unordered_map<char, char> tToS;

        for (int i = 0; i < s.size(); i++) {

            char charS = s[i];
            char charT = t[i];

            
            if (sToT.count(charS) && sToT[charS] != charT) {
                return false;
            }

           
            if (tToS.count(charT) && tToS[charT] != charS) {
                return false;
            }

            
            sToT[charS] = charT;
            tToS[charT] = charS;
        }

        return true;
    }
};