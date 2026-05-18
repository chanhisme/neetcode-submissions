class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> cnt;
        vector <int> res(2);
        for(int i = 0; i < nums.size(); i++){
            if(cnt.count(target-nums[i])){
                res[0] = cnt[target-nums[i]];
                res[1] = i;
                break;
            }
            else{
                cnt[nums[i]] = i;
            }

        }
        return res;
    }
};
