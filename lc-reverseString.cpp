class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int length = s.size();
        int P1 = 0;
        int P2 = length - 1;
        while (P1 < P2)
        {
            swap(s[P1], s[P2]);
            P1++;
            P2--;
        }
    }
};