class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> uniqueElements;

        for (const auto &num : nums)
        {
            if (uniqueElements.find(num) != uniqueElements.end())
            {
                return true;
            }
            uniqueElements.insert(num);
        }

        return false;
    }
};