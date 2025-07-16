class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum=0;
        int pSum[n];

        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            pSum[i] = sum; 
        }

        int oddLenSum=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if((j-i+1)%2 != 0){
                    if(i==0){
                        oddLenSum = oddLenSum + pSum[j];
                    }
                    else{
                        oddLenSum += pSum[j] - pSum[i-1];
                    }
                }
            }
        }
        return oddLenSum;
    }
};