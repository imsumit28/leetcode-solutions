class Solution {
public:
    // ceil divide ka function bana lenge pehle
    int sumByD(vector<int> &nums, int div){
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n;i++){
            sum += ceil((double)(nums[i]) / (double)(div)); // double nhi likhne se answer galat aa raha hai so make sure to write double of nums of i divided by double of div 
        }

        return sum;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while(low<=high){
            int mid = (low+high) / 2;
            if(sumByD(nums,mid) <= threshold){
                ans = mid;
                high = mid-1;
            }

            else{
                low = mid+1;
            }
        }

        return ans;
    }
};