class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> pf(n);
        vector <int> sf(n);
        sf[n-1] = 1;
        pf[0] = 1;
        for(int i =1; i < n; i++){
            pf[i] = pf[i-1] * nums[i-1];
        }
        for(int i = n-2; i >= 0; i--){
            sf[i] = sf[i+1] * nums[i+1];
        }
        vector <int> res(n);
        for(int i = 0; i < n; i++){
            res[i] = pf[i] * sf[i];
        }
        return res;
    }
};
