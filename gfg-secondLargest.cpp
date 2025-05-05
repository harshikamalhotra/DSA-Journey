class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int max = -1;
        int secondMax = -1;

        for (int i = 0; i < n; ++i)
        {
            if (max < arr[i])
            {
                secondMax = max;
                max = arr[i];
            }
            if (secondMax < arr[i] && arr[i] < max)
            {
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};
