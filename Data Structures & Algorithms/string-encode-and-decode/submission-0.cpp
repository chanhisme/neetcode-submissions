class Solution {
public:

    string encode(vector<string>& strs) {
        string tmp = "";
        for(string s : strs){
            tmp += to_string(s.size()) + '@' + s;
        }
        return tmp;
    }

    vector<string> decode(string s) {
        vector <string> res;
        int i = 0;
        for(; i < s.size();){
            int j = i;
            while(s[j] != '@'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            string tmp = s.substr(j+1, len);
            res.push_back(tmp);
            i = j+len + 1;
        }
        
        return res;
    }
};
