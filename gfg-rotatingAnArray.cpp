class Solution
{
public:
    void leftRotate(vector<int> &arr, int d)
    {
        // code here
        int N = arr.size();
        d = d % N;
        reverseRange(arr, 0, N - 1);
        reverseRange(arr, N - d, N - 1);
        reverseRange(arr, 0, N - d - 1);
    }
    void reverseRange(vector<int> &ar, int l, int r)
    {
        int P1 = l, P2 = r;
        while (P1 < P2)
        {
            int temp = ar[P1];
            ar[P1] = ar[P2];
            ar[P2] = temp;
            P1++;
            P2--;
        }
    }
};