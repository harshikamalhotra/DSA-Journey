class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        for(int i=0; i<n; i++){
            int minValue = nums[i];
            int maxValue = nums[i];
            for(int j=i; j<n; j++){
                minValue = min(minValue, nums[j]);
                maxValue = max(maxValue, nums[j]);
                int range = maxValue - minValue;
                total = total + range;
            }
        }
        return total;
    }
};