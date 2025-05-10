class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(vector<int> &arr)
    {
        // Code here
        int max = INT_MIN;
        int c = 0;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i++)
        {
            if (arr[i] > max)
            {
                c++;
                max = arr[i];
            }
        }
        return c;
    }
};