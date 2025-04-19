class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp;
        int size = nums.size();
        k = k % size;

        for (int i = size - k; i < size; i++)
        {
            temp.push_back(nums[i]);
        }
    }
};