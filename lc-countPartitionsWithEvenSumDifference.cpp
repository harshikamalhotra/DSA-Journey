class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int totalSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            totalSum += nums[i];
        }
        int leftSum = 0, rightSum = 0;
        int count = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            leftSum += nums[i];
            rightSum = totalSum - leftSum;
            if ((leftSum - rightSum) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};