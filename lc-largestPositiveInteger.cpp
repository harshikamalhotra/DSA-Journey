class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int max = -2147483648;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (nums[i] > max && nums[i] == (-nums[j]))
                {
                    max = nums[i];
                }
            }
        }
        if (max == -2147483648)
        {
            return -1;
        }
        else
        {
            return max;
        }
    }
};