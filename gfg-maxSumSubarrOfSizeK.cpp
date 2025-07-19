class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector <long> pf(n);
        long sum=0;
        
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            pf[i] = sum;
        }
        
        int max = INT_MIN;
        int s=0, e=k-1;
        
        while(e<n){
            long sum =0;
            if(s==0){
                sum=pf[e];
            }
            else{
                sum=pf[e]-pf[s-1];
            }
            if(sum>max){
                max=sum;
            }
            s++; e++;
        }
        return max;
    }
};