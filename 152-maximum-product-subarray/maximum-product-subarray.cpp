class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long maxProduct = nums[0];
        long long minProduct = nums[0];
        long long answer = nums[0];

        for(int i=1;i<nums.size();i++){
            long long current = nums[i];

            long long tempMax = max({
                current,
                current*maxProduct,
                current*minProduct
            });

            long long tempMin = min({
                current,
                current*maxProduct,
                current*minProduct
            });

            maxProduct = tempMax;
            minProduct = tempMin;

            answer = max(answer, maxProduct);
        }

        return (int) answer;
    }
};