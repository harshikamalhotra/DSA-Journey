class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        int n = nums.size();
        int triplets = 0;
        for (int j = 1; j <= n - 2; ++j)
        {
            for (int i = 0; i <= j - 1; ++i)
            {
                for (int k = j + 1; k <= n - 1; ++k)
                {
                    if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
                    {
                        triplets++;
                    }
                }
            }
        }
        return triplets;
    }
};