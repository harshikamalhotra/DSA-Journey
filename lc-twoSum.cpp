class Solution
{
public:
    vector<int> twoSum(vector<int> &ar, int target)
    {
        int n = ar.size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (ar[i] + ar[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};