class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long expectedSum = n*(n+1)/2;
        long long expectedSquareSum = n*(n+1)*(2*n+1) / 6;

        long long actualSum =0;
        long long actualSquareSum=0;

        for(int i=0;i<n;i++){
            actualSum = actualSum + nums[i];
            actualSquareSum += 1LL*nums[i]*nums[i];
        }
            long long difference = actualSum - expectedSum;
            long long differenceSquare = actualSquareSum - expectedSquareSum;

            long long sum = differenceSquare/difference;

            long long repeating = (sum+difference)/2;
            long long missing = (sum-difference)/2;

            return{(int) repeating, (int) missing};
        }
        
        
  
};