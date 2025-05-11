class Solution
{
public:
    void descending(vector<int> &ar)
    {
        int n = ar.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (ar[j] < ar[j + 1])
                {
                    swap(ar[j], ar[j + 1]);
                }
            }
        }
    }

    void reverseRange(vector<int> &ar, int P1, int P2)
    {
        while (P1 < P2)
        {
            swap(ar[P1], ar[P2]);
            P1++;
            P2--;
        }
        // return ar;
    }

    bool check(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            vector<int> org = nums;
            descending(org);
            vector<int> rev = org;
            reverseRange(rev, 0, i);
            reverseRange(rev, i + 1, n - 1);
            if (rev == nums)
            {
                return true;
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool check(vector<int>& a) {
//             int c = 0 ;
//             int n = a.size();
//         for(int i = 0 ; i<n ; i++){
//             int next = (i+1)%n;
//            if(a[i]>a[next]){
//             c++;
//            }
//         }
//         if(c==1 || c==0){
//             return true;
//         }
//         else{
//          return false;
//         }
//   return true;
//     }
// };