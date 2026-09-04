class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return ""; // check empty input
        sort(strs.begin(), strs.end()); // step 2 : sort karlo 
// comparison k liye first ans last find karlo
        string first = strs[0];
        string last = strs[strs.size() - 1];

        string answer = ""; // initialize the answer variable
        int minimumLength = min(first.size(), last.size()); // find karo min length between first ans laast 

        for(int i =0; i<minimumLength; i++){
            if(first[i] != last[i]){ // not equal to 
                break;
            }

            answer = answer + first[i];
        }

        return answer;
    }
};