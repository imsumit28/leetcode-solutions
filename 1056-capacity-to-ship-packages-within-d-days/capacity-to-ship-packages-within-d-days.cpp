class Solution {
public:

    // write count days function first
    int countDays(vector<int> &weights, int capacity){
        int n = weights.size();
        int days = 1;
        int load = 0;
        for(int i = 0; i<n; i++){
            if(load + weights[i] > capacity){
                days = days+1;

                load = weights[i];
            }
            else{
                load = load + weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0;
        int sum = 0;
        for(int i = 0;i<weights.size();i++){
            maxi = max(maxi, weights[i]);
            sum = sum + weights[i];
        }

        int low = maxi, high = sum;
        while(low<=high){
            int mid = (low+high) / 2;

            int noOfDays = countDays(weights, mid);

            if(noOfDays <= days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return low;
    }
};