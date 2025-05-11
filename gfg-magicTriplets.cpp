class Solution
{
public:
    int countTriplets(vector<int> nums)
    {
        // Code here.
        int n = nums.size();
        int res = 0;
        for (int j = 1; j <= n - 2; j++)
        {
            int leftCount = 0, rightCount = 0;
            for (int i = 0; i < j; ++i)
            {
                if (nums[i] < nums[j])
                {
                    leftCount++;
                }
            }
            for (int k = j + 1; k <= n - 1; ++k)
            {
                if (nums[k] > nums[j])
                {
                    rightCount++;
                }
            }
            res += leftCount * rightCount;
        }
        return res;
    }
};