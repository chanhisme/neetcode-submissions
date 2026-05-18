class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map <char, int> cnt1, cnt2;       
        for(int i = 0; i < s.size(); i++){
            cnt1[s[i]] ++;
        }
        for(int i = 0; i < t.size(); i ++ ){
            cnt2[t[i]] ++;
        }
        for(int i =0 ; i < t.size(); i ++){
            if(cnt2[t[i]] != cnt1[t[i]]){
                return false;
            }
        }
        return true;
    }
};
