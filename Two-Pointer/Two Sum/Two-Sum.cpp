class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int pointer_left = 0;
        int pointer_right = numbers.size() - 1;

        while (pointer_left < pointer_right)
        {
            int sum = numbers[pointer_left] + numbers[pointer_right];
            if (sum == target)
            {
                return {pointer_left + 1, pointer_right + 1};
            }
            else if (sum > target)
            {
                pointer_right--;
            }
            else
            {
                pointer_left++;
            }
        }

        return {};
    }
};