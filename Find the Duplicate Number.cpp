
//Method->1 : Negative Marking Approach
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]);
            if (nums[index] < 0) {
                return index;
            } else {
                nums[index] *= -1;
            }
        }
        return -1;
    }
};

//Method->2 
 int solve2(vector<int>& nums) {
        while (nums[0] != nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
