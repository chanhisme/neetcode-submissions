class Solution {
public:

    string encode(vector<string>& strs) {
        string tmp = "";
        for(int i = 0; i < strs.size(); i++){
            tmp += to_string(strs[i].size()) + '#' + strs[i];
        }
        return tmp;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector <string> res;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            res.push_back(s.substr(j+1, len));
            i = j + len + 1;

        }
        return res;
    }
};
