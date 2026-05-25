class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> a (nums.begin(), nums.end());
        int res = 0, len;
        for(int i = 0; i < nums.size(); i++){
            if(a.find(nums[i] - 1) == a.end()){
                len = 1;
                while(a.find(nums[i] + len) != a.end()){
                    len++;
                }
                res = max(res, len);
            }
        }
        return res;
    }
};
