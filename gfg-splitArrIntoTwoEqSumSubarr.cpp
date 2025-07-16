// Split an array into two equal Sum subarrays
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        long totalSum = 0;
        for(int i=0; i<n; i++){
            totalSum = totalSum + arr[i];
        }
        
        if(totalSum % 2 != 0){
            return false;
        }
        
        int leftSum = 0;
        for(int i=0; i<n; i++){
            leftSum = leftSum + arr[i];
            int rightSum = totalSum - leftSum;
            if(leftSum == rightSum){
                return true;
            }
        }
        return false;
    }
};
