class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int index = 0;
        while (index <= end) {
            if (nums[index] == 0) {
                swap(nums[start], nums[index]);
                index++;
                start++;
            } else if (nums[index] == 2) {
                swap(nums[index], nums[end]);
                end--;
            } else {
                index++;
            }
        }
    }
};
