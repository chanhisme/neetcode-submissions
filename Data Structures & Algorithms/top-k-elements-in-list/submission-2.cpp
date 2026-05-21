class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> cnt;
        vector<int> res;
        for(int x : nums){
            cnt[x] ++;
        }
        vector <vector <int>> bucket(nums.size()+1);
        for(auto &it : cnt){
            bucket[it.second].push_back(it.first);
        }
        for(int i = bucket.size()-1; i >= 0; i--){
            if(bucket[i].size() > 0 && k != 0){
                for(int x : bucket[i]){
                    res.push_back(x);
                    k--;
                }
            }
        }
        return res;
    }
};
