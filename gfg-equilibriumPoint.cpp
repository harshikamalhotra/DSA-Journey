class Solution
{
public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int totalSum = 0;
        for (int i = 0; i < n; ++i)
        {
            totalSum += arr[i];
        }
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                leftSum += arr[i - 1];
            }
            rightSum = totalSum - leftSum - arr[i];
            if (leftSum == rightSum)
            {
                return i;
            }
        }
        return -1;
    }
};