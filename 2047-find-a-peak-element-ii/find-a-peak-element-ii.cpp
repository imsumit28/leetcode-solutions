class Solution {
public:
// max element batata hai ki which row cotains max element in a given column
    int maxElement(vector<vector<int>> &mat, int n, int m, int col){
        int maxValue = -1;
        int index = -1;

        for(int i = 0; i<n;i++){
            if(mat[i][col] > maxValue){
                maxValue = mat[i][col];
                index = i;
            }
        }

        return index; // return kardo max value wala index
    }





    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(); // row
        int m = mat[0].size(); // col
        int low = 0, high = m-1;
        while(low<=high){
            int mid = (low+high) / 2;
            int row = maxElement(mat, n, m, mid); // which row ccontains largest value in column mid
            int left = mid-1>=0 ? mat[row][mid-1] : -1;
            int right = m > mid+1 ? mat[row][mid+1] : -1;

            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row, mid};
            }
            else if(mat[row][mid] < left) high = mid-1;
            else{
                low = mid+1;
            }
        }

        return{-1,-1};
    }
};