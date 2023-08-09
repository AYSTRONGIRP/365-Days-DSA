class Solution
{
public:
    int countValidPair(vector<int> &nums, int p)
    {
        int index = 0, count = 0;
        while (index < nums.size() - 1)
        {
            if (nums[index + 1] - nums[index] <= p)
            {
                count++;
                index++;
            }
            index++;
        }
        return count;
    }
    int minimizeMax(vector<int> &nums, int p)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums[n - 1] - nums[0];

        while (left < right)
        {
            int mid = (left + right) / 2;

            if (countValidPair(nums, mid) >= p)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};