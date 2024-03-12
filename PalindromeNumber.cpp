class Solution
{
public:
    bool isPalindrome(int x)
    {
        string str, str2;
        str = to_string(x);
        for (int i = str.length() - 1; i >= 0; i--)
        {
            str2 += str[i];
        }
        if (str == str2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};