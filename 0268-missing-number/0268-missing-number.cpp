class Solution {
public:
    int missingNumber(vector<int>& nums) {
         bool missingNumber;
        for (int i = 0; i <= nums.size(); i++) {
            missingNumber = true;
            for (int j = 0; j < nums.size(); j++) {
                if (i == nums[j]) {
                    missingNumber = false;
                    break;
                }
            }
            if (missingNumber == true) {
                return i;
            }
        }
        return -1;
    }
};