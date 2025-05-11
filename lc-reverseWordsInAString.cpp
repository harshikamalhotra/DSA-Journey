class Solution
{
public:
    void reverseRange(string &s, int p1, int p2)
    {
        while (p1 < p2)
        {
            swap(s[p1], s[p2]);
            p1++;
            p2--;
        }
    }
    string reverseWords(string s)
    {
        int n = s.length();
        string temp, result;
        reverseRange(s, 0, n - 1);
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                if (!temp.empty())
                {
                    reverseRange(temp, 0, temp.length() - 1);
                    result += temp + ' ';
                    temp.clear();
                }
            }
        }
        if (!temp.empty())
        {
            reverseRange(temp, 0, temp.size() - 1);
            result += temp + ' ';
        }
        if (!result.empty() && result.back() == ' ')
        {
            result.pop_back();
        }
        return result;
    }
};