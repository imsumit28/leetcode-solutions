class Solution {
public:

    int countSubarray(vector<int> &nums, int maxSum){
        int subarray = 1;
        int currentSum = 0;
        for(int i = 0;i<nums.size(); i++){
            if(currentSum + nums[i] <= maxSum){
                currentSum = currentSum + nums[i];
            } else{
                subarray++;
                currentSum = nums[i];
            }

        }

        return subarray;

    }





    int splitArray(vector<int>& nums, int k) {

        int maxi = 0;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            sum = sum + nums[i];
        }

        int low = maxi;
        int high = sum;
        int ans = -1;
        while(low<=high){
            int mid = (low+high) / 2;

            int required = countSubarray(nums, mid);
            if(required <= k){
                ans = mid;
                high = mid-1;
            } else{
                low = mid+1;
            }

        }

        return ans;
        
    }
};