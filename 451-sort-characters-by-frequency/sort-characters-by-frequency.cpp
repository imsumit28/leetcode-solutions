// count frequency -> store(char,freq) -> sort - > add each char freq count

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int i = 0; i<s.size(); i++){
            freq[s[i]]++;
        }

        vector<pair<char,int>> characters;
        for(auto it : freq){
            characters.push_back({it.first, it.second});
        }

        sort(characters.begin(), characters.end(), [](pair<char,int> &a, pair<char,int> &b){
            return a.second > b.second;
        });

        string ans = "";
        for(int i=0;i<characters.size();i++){
            char ch = characters[i].first;
            int count = characters[i].second;

            for(int j = 0;j<count;j++){
                ans += ch;
            }
        }

        return ans;
    }
}; 