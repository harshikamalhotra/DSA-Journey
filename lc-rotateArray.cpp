class Solution
{
public:
    void reverseRange(vector<int> &ar, int l, int r)
    {
        int p1 = l;
        int p2 = r;
        while (p1 < p2)
        {
            int temp = ar[p1];
            ar[p1] = ar[p2];
            ar[p2] = temp;
            p1++;
            p2--;
        }
    }

    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        reverseRange(nums, 0, n - 1);
        reverseRange(nums, 0, k - 1);
        reverseRange(nums, k, n - 1);
    }
};