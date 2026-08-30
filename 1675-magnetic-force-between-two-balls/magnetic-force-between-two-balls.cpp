class Solution {
public:

    bool CanPlace(vector<int> &position, int dist, int balls){
        int n = position.size();
        int Cntballs = 1, last = position[0];
        for(int i = 1; i<n; i++){
            if(position[i] - last >= dist){
                Cntballs++;
                last = position[i];
            }
        }

        if(Cntballs >= balls) return true;
        else return false;
    } 


    int maxDistance(vector<int>& position, int m) {
        
        
        sort(position.begin(), position.end());
        int n = position.size();
        int low = 0;
        int high = position[n-1] - position[0];
        while(low<=high){
            int mid = (low+high) / 2;

            if(CanPlace(position, mid, m) == true){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }

        return high;
    }
};