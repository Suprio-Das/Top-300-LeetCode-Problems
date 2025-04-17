class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> temp;
        temp.push_back(nums[0]);
        int pointer_left = 0;
        int pointer_right = 1;
        while (pointer_right < nums.size())
        {
            if (nums[pointer_left] < nums[pointer_right])
            {
                temp.push_back(nums[pointer_right]);
                pointer_left += 1;
                pointer_right += 1;
            }
        }
    }
};