class Solution
{
public:
    void reverseRange(vector<int> &ar, int P1, int P2)
    {
        while (P1 < P2)
        {
            swap(ar[P1], ar[P2]);
            P1++;
            P2--;
        }
    }
    void reverseInGroups(vector<int> &arr, int k)
    {
        // code here
        int n = arr.size();
        if (k >= n)
        {
            reverseRange(arr, 0, n - 1);
        }
        else
        {
            // group = n/k;
            for (int i = 0; i < n; i += k)
            {
                int P1 = i;
                int P2 = min(i + k - 1, n - 1);
                reverseRange(arr, P1, P2);
            }
        }
    }
};