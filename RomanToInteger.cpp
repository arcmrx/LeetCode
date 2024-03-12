class Solution
{
public:
    int romanToInt(string s)
    {
        int minNum = 1000, currentNum, result = 0;

        for (int i = 0; i < s.size(); i++)
        {

            switch (s[i])
            {
            case 'I':
                currentNum = 1;
                break;
            case 'V':
                currentNum = 5;
                break;
            case 'X':
                currentNum = 10;
                break;
            case 'L':
                currentNum = 50;
                break;
            case 'C':
                currentNum = 100;
                break;
            case 'D':
                currentNum = 500;
                break;
            case 'M':
                currentNum = 1000;
                break;

            default:
                break;
            }

            if (currentNum <= minNum)
            {
                result += currentNum;
                minNum = currentNum;
            }
            else
            {
                result -= minNum;
                result += currentNum;
                result -= minNum;
            }
        }
        return result;
    }
};