class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int preSum=0;
        int count=0;
        int n = nums.size();
        mpp[0] = 1;

        for(int i=0; i<n; i++){
            preSum = preSum + nums[i];
            int remove = preSum - k;
            count = count + mpp[remove];
            mpp[preSum] = mpp[preSum] + 1;
        }

        return count;
    }
};