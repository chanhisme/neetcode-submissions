class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector <vector <string>> res;
        unordered_map <string, vector <string>> hm;
        for(int i = 0; i < str.size(); i ++){
            vector <int> cnt(26,0);
            for(char c : str[i]){
                cnt[c - 'a'] ++;
            }
            string key = "";
            for(int j = 0; j < 26; j++){
                key += to_string(cnt[j]) + '#';
            }
            hm[key].push_back(str[i]);
        }
        for(auto it : hm){
            res.push_back(it.second);
        }
        return res;
    }
};
