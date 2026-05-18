class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, bool> cnt;
        for(int i = 0; i < nums.size(); i++){
            if(cnt[nums[i]] == false){
                cnt[nums[i]] = true;
            }
            else{
                return true;
            }
        }
        return false;
    }
};