class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        vector<int> checked;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[i] == nums[j + 1])
                {
                    count++;
                }
            }
            checked.push_back(nums[i]);
        }
    }
};