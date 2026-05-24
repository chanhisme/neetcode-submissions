class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long p = 1;
        int cnt = 0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] != 0){
                p *= nums[i];
            }
            else{
                cnt++;
            }
        }
        vector <int> res(nums.size());
        if(cnt){
            if(cnt >= 2){
                return res;
            }
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    res[i] = p;
                }
            }
        }
        else{
            for(int i = 0; i < nums.size(); i++){
                res[i] = p / nums[i];
            }
        }
        return res;
    }
};
