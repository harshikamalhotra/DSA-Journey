// Sum of Subarrays
// User function template for C++

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        // Your code goes here
        long long n = arr.size();
        long long sum = 0;
        for(long long i=0; i<n; ++i){
            long long occ = (long long)(i+1)*(long long)(n-i);
            sum += (long long)arr[i] * occ;
        }
        return sum% 1000000007;
    }
};